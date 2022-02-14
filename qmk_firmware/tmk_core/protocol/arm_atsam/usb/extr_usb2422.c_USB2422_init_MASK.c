
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_79__ TYPE_9__ ;
typedef struct TYPE_78__ TYPE_8__ ;
typedef struct TYPE_77__ TYPE_7__ ;
typedef struct TYPE_76__ TYPE_6__ ;
typedef struct TYPE_75__ TYPE_5__ ;
typedef struct TYPE_74__ TYPE_4__ ;
typedef struct TYPE_73__ TYPE_3__ ;
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


struct TYPE_59__ {int DQOS; int CQOS; } ;
struct TYPE_60__ {TYPE_25__ bit; } ;
struct TYPE_57__ {scalar_t__ ENABLE; scalar_t__ SWRST; } ;
struct TYPE_58__ {TYPE_23__ bit; } ;
struct TYPE_55__ {int SWRST; int ENABLE; scalar_t__ MODE; } ;
struct TYPE_56__ {TYPE_21__ bit; } ;
struct TYPE_52__ {scalar_t__ SPDCONF; } ;
struct TYPE_54__ {TYPE_19__ bit; } ;
struct TYPE_50__ {int TRANSN; int TRANSP; int TRIM; } ;
struct TYPE_51__ {TYPE_17__ bit; } ;
struct TYPE_61__ {TYPE_26__ QOSCTRL; TYPE_24__ SYNCBUSY; TYPE_22__ CTRLA; TYPE_20__ CTRLB; TYPE_18__ PADCAL; } ;
struct TYPE_67__ {TYPE_27__ DEVICE; } ;
typedef TYPE_32__ Usb ;
struct TYPE_79__ {int USBCRM; int MODE; int CCDIS; scalar_t__ QLDIS; } ;
struct TYPE_77__ {int PMUXE; } ;
struct TYPE_78__ {int reg; TYPE_7__ bit; } ;
struct TYPE_75__ {int USB_; } ;
struct TYPE_76__ {TYPE_5__ bit; } ;
struct TYPE_73__ {int USB_; } ;
struct TYPE_74__ {TYPE_3__ bit; } ;
struct TYPE_66__ {int HUB_CONNECT; int HUB_RESET_N; } ;
struct TYPE_72__ {TYPE_31__ bit; } ;
struct TYPE_71__ {TYPE_2__* PCHCTRL; } ;
struct TYPE_70__ {TYPE_6__ APBBMASK; TYPE_4__ AHBMASK; } ;
struct TYPE_48__ {scalar_t__ ENABLE; scalar_t__ DFLLMUL; scalar_t__ DFLLCTRLB; } ;
struct TYPE_49__ {TYPE_15__ bit; } ;
struct TYPE_46__ {int ENABLE; } ;
struct TYPE_47__ {TYPE_13__ bit; } ;
struct TYPE_44__ {int MUL; } ;
struct TYPE_45__ {TYPE_11__ bit; } ;
struct TYPE_43__ {TYPE_9__ bit; } ;
struct TYPE_69__ {TYPE_16__ DFLLSYNC; TYPE_14__ DFLLCTRLA; TYPE_12__ DFLLMUL; TYPE_10__ DFLLCTRLB; } ;
struct TYPE_68__ {TYPE_30__* Group; } ;
struct TYPE_65__ {TYPE_29__* PINCFG; TYPE_8__* PMUX; } ;
struct TYPE_53__ {int CHEN; scalar_t__ GEN; } ;
struct TYPE_64__ {TYPE_1__ bit; } ;
struct TYPE_62__ {int PMUXEN; int INEN; } ;
struct TYPE_63__ {TYPE_28__ bit; } ;
typedef TYPE_33__ Port ;
typedef TYPE_34__ Oscctrl ;
typedef TYPE_35__ Mclk ;
typedef TYPE_36__ Gclk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_36__* VAR_15 ;
 TYPE_35__* VAR_16 ;
 TYPE_34__* VAR_17 ;
 TYPE_33__* VAR_18 ;
 int FUNC_1 () ;
 TYPE_32__* VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 TYPE_37__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_4 (int) ;

void FUNC_5(void) {
    Gclk * VAR_35 = VAR_15;
    Mclk * VAR_36 = VAR_16;
    Port * VAR_37 = VAR_18;
    Oscctrl *VAR_38 = VAR_17;
    Usb * VAR_39 = VAR_19;

    FUNC_0(VAR_2);

    while ((VAR_34 = FUNC_2(VAR_0)) < VAR_1) {
        FUNC_0(VAR_14);
    }


    VAR_35->PCHCTRL[10].bit.GEN = 0;
    VAR_35->PCHCTRL[10].bit.CHEN = 1;
    VAR_36->AHBMASK.bit.USB_ = 1;
    VAR_36->APBBMASK.bit.USB_ = 1;


    VAR_37->Group[0].PMUX[12].reg = 0x77;
    VAR_37->Group[0].PINCFG[24].bit.PMUXEN = 1;
    VAR_37->Group[0].PINCFG[25].bit.PMUXEN = 1;
    VAR_37->Group[1].PMUX[11].bit.PMUXE = 7;
    VAR_37->Group[1].PINCFG[22].bit.PMUXEN = 1;


    VAR_38->DFLLCTRLA.bit.ENABLE = 0;
    while (VAR_38->DFLLSYNC.bit.ENABLE) {
        FUNC_0(VAR_9);
    }
    while (VAR_38->DFLLSYNC.bit.DFLLCTRLB) {
        FUNC_0(VAR_4);
    }
    VAR_38->DFLLCTRLB.bit.USBCRM = 1;
    while (VAR_38->DFLLSYNC.bit.DFLLCTRLB) {
        FUNC_0(VAR_5);
    }
    VAR_38->DFLLCTRLB.bit.MODE = 1;
    while (VAR_38->DFLLSYNC.bit.DFLLCTRLB) {
        FUNC_0(VAR_6);
    }
    VAR_38->DFLLCTRLB.bit.QLDIS = 0;
    while (VAR_38->DFLLSYNC.bit.DFLLCTRLB) {
        FUNC_0(VAR_7);
    }
    VAR_38->DFLLCTRLB.bit.CCDIS = 1;
    VAR_38->DFLLMUL.bit.MUL = 0xBB80;
    while (VAR_38->DFLLSYNC.bit.DFLLMUL) {
        FUNC_0(VAR_8);
    }
    VAR_38->DFLLCTRLA.bit.ENABLE = 1;
    while (VAR_38->DFLLSYNC.bit.ENABLE) {
        FUNC_0(VAR_10);
    }

    VAR_39->DEVICE.CTRLA.bit.SWRST = 1;
    while (VAR_39->DEVICE.SYNCBUSY.bit.SWRST) {
        FUNC_0(VAR_12);
    }
    while (VAR_39->DEVICE.CTRLA.bit.SWRST) {
        FUNC_0(VAR_13);
    }

    VAR_39->DEVICE.PADCAL.bit.TRANSN = (VAR_22 >> VAR_24) & VAR_23;
    VAR_39->DEVICE.PADCAL.bit.TRANSP = (VAR_25 >> VAR_27) & VAR_26;
    VAR_39->DEVICE.PADCAL.bit.TRIM = (VAR_28 >> VAR_30) & VAR_29;

    VAR_39->DEVICE.CTRLB.bit.SPDCONF = 0;
    VAR_39->DEVICE.CTRLA.bit.MODE = 0;
    VAR_39->DEVICE.CTRLA.bit.ENABLE = 1;
    while (VAR_39->DEVICE.SYNCBUSY.bit.ENABLE) {
        FUNC_0(VAR_11);
    }

    VAR_39->DEVICE.QOSCTRL.bit.DQOS = 2;
    VAR_39->DEVICE.QOSCTRL.bit.CQOS = 2;

    VAR_37->Group[VAR_20].PINCFG[VAR_21].bit.INEN = 1;

    FUNC_3();

    VAR_31.bit.HUB_CONNECT = 1;
    VAR_31.bit.HUB_RESET_N = 1;
    FUNC_1();

    FUNC_4(100);



    VAR_32 = 0;
    VAR_33 = 1;



    FUNC_0(VAR_3);
}
