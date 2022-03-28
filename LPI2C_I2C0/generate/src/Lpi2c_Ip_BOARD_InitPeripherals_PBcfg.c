/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : LPI2C
* Dependencies : none
*
* Autosar Version : 4.4.0
* Autosar Revision : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version : 1.0.0
* Build Version : S32K3_RTD_1_0_0_D2110_ASR_REL_4_4_REV_0000_20211007
*
* (c) Copyright 2020 - 2021 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/

/**
*   @file
*
*   @addtogroup LPI2C_DRIVER_CONFIGURATION Lpi2c Driver Configurations
*   @{
*/


#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Lpi2c_Ip.h"
#include "Mcal.h"

#if (STD_ON == LPI2C_IP_DMA_FEATURE_AVAILABLE)
#include "Dma_Ip.h"
#endif
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C                     43
#define LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_MODULE_ID_C                     255
#define LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C      4
#define LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C              1
#define LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C              0
#define LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C              0


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and I2c header file are of the same vendor */
#if (LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != LPI2C_IP_VENDOR_ID)
    #error "Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.c and Lpi2c_Ip.h have different vendor ids"
#endif
/* Check if current file and I2c header file are of the same Autosar version */
#if ((LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != LPI2C_IP_AR_RELEASE_MAJOR_VERSION) || \
     (LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != LPI2C_IP_AR_RELEASE_MINOR_VERSION) || \
     (LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != LPI2C_IP_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.c and Lpi2c_Ip.h are different"
#endif
/* Check if current file and I2c header file are of the same Software version */
#if ((LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != LPI2C_IP_SW_MAJOR_VERSION) || \
     (LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != LPI2C_IP_SW_MINOR_VERSION) || \
     (LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != LPI2C_IP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.c and Lpi2c_Ip.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if(STD_ON == LPI2C_IP_DMA_FEATURE_AVAILABLE)
        /* Check if current file and Dma_Ip.h header file are of the same Autosar version */
        #if ( (LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_AR_RELEASE_MAJOR_VERSION) || \
              (LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != DMA_IP_AR_RELEASE_MINOR_VERSION)    \
             )
            #error "AutoSar Version Numbers of Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.c and Dma_Ip.h are different"
        #endif
    #endif /* (STD_ON == LPI2C_IP_DMA_FEATURE_AVAILABLE) */

    /* Checks against Mcal.h */
    #if ((LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.c and Mcal.h are different"
    #endif
#endif
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

#define I2C_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"



#define I2C_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

