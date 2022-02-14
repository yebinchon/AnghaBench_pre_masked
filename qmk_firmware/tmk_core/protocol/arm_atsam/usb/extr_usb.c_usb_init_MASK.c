
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_80__ TYPE_9__ ;
typedef struct TYPE_79__ TYPE_8__ ;
typedef struct TYPE_78__ TYPE_7__ ;
typedef struct TYPE_77__ TYPE_6__ ;
typedef struct TYPE_76__ TYPE_5__ ;
typedef struct TYPE_75__ TYPE_4__ ;
typedef struct TYPE_74__ TYPE_3__ ;
typedef struct TYPE_73__ TYPE_38__ ;
typedef struct TYPE_72__ TYPE_37__ ;
typedef struct TYPE_71__ TYPE_36__ ;
typedef struct TYPE_70__ TYPE_35__ ;
typedef struct TYPE_69__ TYPE_34__ ;
typedef struct TYPE_68__ TYPE_33__ ;
typedef struct TYPE_67__ TYPE_32__ ;
typedef struct TYPE_66__ TYPE_31__ ;
typedef struct TYPE_65__ TYPE_30__ ;
typedef struct TYPE_64__ TYPE_2__ ;
typedef struct TYPE_63__ TYPE_29__ ;
typedef struct TYPE_62__ TYPE_28__ ;
typedef struct TYPE_61__ TYPE_27__ ;
typedef struct TYPE_60__ TYPE_26__ ;
typedef struct TYPE_59__ TYPE_25__ ;
typedef struct TYPE_58__ TYPE_24__ ;
typedef struct TYPE_57__ TYPE_23__ ;
typedef struct TYPE_56__ TYPE_22__ ;
typedef struct TYPE_55__ TYPE_21__ ;
typedef struct TYPE_54__ TYPE_20__ ;
typedef struct TYPE_53__ TYPE_1__ ;
typedef struct TYPE_52__ TYPE_19__ ;
typedef struct TYPE_51__ TYPE_18__ ;
typedef struct TYPE_50__ TYPE_17__ ;
typedef struct TYPE_49__ TYPE_16__ ;
typedef struct TYPE_48__ TYPE_15__ ;
typedef struct TYPE_47__ TYPE_14__ ;
typedef struct TYPE_46__ TYPE_13__ ;
typedef struct TYPE_45__ TYPE_12__ ;
typedef struct TYPE_44__ TYPE_11__ ;
typedef struct TYPE_43__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_64__ {int SPDCONF; } ;
struct TYPE_74__ {TYPE_2__ bit; } ;
struct TYPE_53__ {int reg; } ;
struct TYPE_57__ {int SWRST; int RUNSTDBY; int MODE; } ;
struct TYPE_58__ {TYPE_23__ bit; } ;
struct TYPE_65__ {int TRANSN; int TRANSP; int TRIM; } ;
struct TYPE_66__ {TYPE_30__ bit; } ;
struct TYPE_59__ {scalar_t__ SWRST; } ;
struct TYPE_60__ {TYPE_25__ bit; } ;
struct TYPE_67__ {TYPE_3__ CTRLB; TYPE_1__ DESCADD; TYPE_24__ CTRLA; TYPE_31__ PADCAL; TYPE_26__ SYNCBUSY; } ;
struct usb_module {scalar_t__ speed_mode; scalar_t__* device_endpoint_enabled_callback_mask; scalar_t__* device_endpoint_registered_callback_mask; scalar_t__ device_enabled_callback_mask; scalar_t__ device_registered_callback_mask; int *** device_endpoint_callback; int ** device_callback; TYPE_32__ DEVICE; struct usb_module* hw; int run_in_standby; int select_host_mode; } ;
struct usb_config {scalar_t__ speed_mode; scalar_t__* device_endpoint_enabled_callback_mask; scalar_t__* device_endpoint_registered_callback_mask; scalar_t__ device_enabled_callback_mask; scalar_t__ device_registered_callback_mask; int *** device_endpoint_callback; int ** device_callback; TYPE_32__ DEVICE; struct usb_config* hw; int run_in_standby; int select_host_mode; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef struct usb_module Usb ;
struct TYPE_79__ {int PMUXE; } ;
struct TYPE_80__ {int reg; TYPE_8__ bit; } ;
struct TYPE_77__ {int USB_; } ;
struct TYPE_78__ {TYPE_6__ bit; } ;
struct TYPE_75__ {int USB_; } ;
struct TYPE_76__ {TYPE_4__ bit; } ;
struct TYPE_61__ {int CQOS; int DQOS; } ;
struct TYPE_62__ {TYPE_27__ bit; } ;
struct TYPE_63__ {TYPE_28__ QOSCTRL; } ;
struct TYPE_73__ {TYPE_29__ DEVICE; } ;
struct TYPE_72__ {int * usb_endpoint_table; } ;
struct TYPE_71__ {TYPE_22__* PCHCTRL; } ;
struct TYPE_70__ {TYPE_7__ APBBMASK; TYPE_5__ AHBMASK; } ;
struct TYPE_52__ {scalar_t__ ENABLE; scalar_t__ DFLLMUL; scalar_t__ DFLLCTRLB; } ;
struct TYPE_54__ {TYPE_19__ bit; } ;
struct TYPE_50__ {int ENABLE; } ;
struct TYPE_51__ {TYPE_17__ bit; } ;
struct TYPE_48__ {int MUL; } ;
struct TYPE_49__ {TYPE_15__ bit; } ;
struct TYPE_46__ {int USBCRM; int MODE; int CCDIS; scalar_t__ QLDIS; } ;
struct TYPE_47__ {TYPE_13__ bit; } ;
struct TYPE_69__ {TYPE_20__ DFLLSYNC; TYPE_18__ DFLLCTRLA; TYPE_16__ DFLLMUL; TYPE_14__ DFLLCTRLB; } ;
struct TYPE_68__ {TYPE_12__* Group; } ;
struct TYPE_55__ {int CHEN; scalar_t__ GEN; } ;
struct TYPE_56__ {TYPE_21__ bit; } ;
struct TYPE_45__ {TYPE_11__* PINCFG; TYPE_9__* PMUX; } ;
struct TYPE_43__ {int PMUXEN; } ;
struct TYPE_44__ {TYPE_10__ bit; } ;
typedef TYPE_33__ Port ;
typedef TYPE_34__ Oscctrl ;
typedef TYPE_35__ Mclk ;
typedef TYPE_36__ Gclk ;


 int FUNC_0 (struct usb_module* const) ;
 TYPE_36__* VAR_0 ;
 size_t VAR_1 ;
 TYPE_35__* VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_34__* VAR_3 ;
 TYPE_33__* VAR_4 ;
 int VAR_5 ;
 TYPE_38__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 struct usb_module* VAR_26 ;
 int FUNC_2 (int *,int ,int) ;
 TYPE_37__ VAR_27 ;

enum status_code FUNC_3(struct usb_module *VAR_28, Usb *const VAR_29, struct usb_config *VAR_30) {

    FUNC_0(VAR_29);
    FUNC_0(VAR_28);
    FUNC_0(VAR_30);

    uint32_t VAR_31, VAR_32;
    uint32_t VAR_33, VAR_34, VAR_35;

    Gclk * VAR_36 = VAR_0;
    Mclk * VAR_37 = VAR_2;
    Port * VAR_38 = VAR_4;
    Oscctrl *VAR_39 = VAR_3;

    VAR_26 = VAR_28;


    VAR_28->hw = VAR_29;


    VAR_37->AHBMASK.bit.USB_ = 1;
    VAR_37->APBBMASK.bit.USB_ = 1;


    VAR_38->Group[0].PMUX[12].reg = 0x77;
    VAR_38->Group[0].PINCFG[24].bit.PMUXEN = 1;
    VAR_38->Group[0].PINCFG[25].bit.PMUXEN = 1;
    VAR_38->Group[1].PMUX[11].bit.PMUXE = 7;
    VAR_38->Group[1].PINCFG[22].bit.PMUXEN = 1;


    VAR_39->DFLLCTRLA.bit.ENABLE = 0;
    while (VAR_39->DFLLSYNC.bit.ENABLE)
        ;
    while (VAR_39->DFLLSYNC.bit.DFLLCTRLB)
        ;
    VAR_39->DFLLCTRLB.bit.USBCRM = 1;
    while (VAR_39->DFLLSYNC.bit.DFLLCTRLB)
        ;
    VAR_39->DFLLCTRLB.bit.MODE = 1;
    while (VAR_39->DFLLSYNC.bit.DFLLCTRLB)
        ;
    VAR_39->DFLLCTRLB.bit.QLDIS = 0;
    while (VAR_39->DFLLSYNC.bit.DFLLCTRLB)
        ;
    VAR_39->DFLLCTRLB.bit.CCDIS = 1;
    VAR_39->DFLLMUL.bit.MUL = 0xbb80;
    while (VAR_39->DFLLSYNC.bit.DFLLMUL)
        ;
    VAR_39->DFLLCTRLA.bit.ENABLE = 1;
    while (VAR_39->DFLLSYNC.bit.ENABLE)
        ;


    VAR_36->PCHCTRL[VAR_1].bit.GEN = 0;
    VAR_36->PCHCTRL[VAR_1].bit.CHEN = 1;


    VAR_29->DEVICE.CTRLA.bit.SWRST = 1;
    while (VAR_29->DEVICE.SYNCBUSY.bit.SWRST) {

    }


    VAR_6->DEVICE.QOSCTRL.bit.CQOS = 2;
    VAR_6->DEVICE.QOSCTRL.bit.DQOS = 2;



    VAR_33 = (VAR_15 >> VAR_17) & VAR_16;
    if (VAR_33 == 0x1F) {
        VAR_33 = 5;
    }

    VAR_29->DEVICE.PADCAL.bit.TRANSN = VAR_33;

    VAR_34 = (VAR_18 >> VAR_20) & VAR_19;
    if (VAR_34 == 0x1F) {
        VAR_34 = 29;
    }

    VAR_29->DEVICE.PADCAL.bit.TRANSP = VAR_34;

    VAR_35 = (VAR_21 >> VAR_23) & VAR_22;
    if (VAR_35 == 0x07) {
        VAR_35 = 3;
    }

    VAR_29->DEVICE.PADCAL.bit.TRIM = VAR_35;


    VAR_29->DEVICE.CTRLA.bit.MODE = VAR_30->select_host_mode;
    VAR_29->DEVICE.CTRLA.bit.RUNSTDBY = VAR_30->run_in_standby;
    VAR_29->DEVICE.DESCADD.reg = (uint32_t)(&VAR_27.usb_endpoint_table[0]);
    if (VAR_24 == VAR_30->speed_mode) {
        VAR_28->hw->DEVICE.CTRLB.bit.SPDCONF = VAR_11;
    } else if (VAR_25 == VAR_30->speed_mode) {
        VAR_28->hw->DEVICE.CTRLB.bit.SPDCONF = VAR_12;
    }

    FUNC_2((uint8_t *)(&VAR_27.usb_endpoint_table[0]), 0, sizeof(VAR_27.usb_endpoint_table));


    for (VAR_31 = 0; VAR_31 < VAR_10; VAR_31++) {
        VAR_28->device_callback[VAR_31] = ((void*)0);
    }
    for (VAR_31 = 0; VAR_31 < VAR_14; VAR_31++) {
        for (VAR_32 = 0; VAR_32 < VAR_13; VAR_32++) {
            VAR_28->device_endpoint_callback[VAR_31][VAR_32] = ((void*)0);
        }
    }
    VAR_28->device_registered_callback_mask = 0;
    VAR_28->device_enabled_callback_mask = 0;
    for (VAR_32 = 0; VAR_32 < VAR_14; VAR_32++) {
        VAR_28->device_endpoint_registered_callback_mask[VAR_32] = 0;
        VAR_28->device_endpoint_enabled_callback_mask[VAR_32] = 0;
    }


    FUNC_1(VAR_7);
    FUNC_1(VAR_8);
    FUNC_1(VAR_9);

    return VAR_5;
}
