
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_77__ TYPE_9__ ;
typedef struct TYPE_76__ TYPE_8__ ;
typedef struct TYPE_75__ TYPE_7__ ;
typedef struct TYPE_74__ TYPE_6__ ;
typedef struct TYPE_73__ TYPE_5__ ;
typedef struct TYPE_72__ TYPE_4__ ;
typedef struct TYPE_71__ TYPE_3__ ;
typedef struct TYPE_70__ TYPE_36__ ;
typedef struct TYPE_69__ TYPE_35__ ;
typedef struct TYPE_68__ TYPE_34__ ;
typedef struct TYPE_67__ TYPE_33__ ;
typedef struct TYPE_66__ TYPE_32__ ;
typedef struct TYPE_65__ TYPE_31__ ;
typedef struct TYPE_64__ TYPE_30__ ;
typedef struct TYPE_63__ TYPE_2__ ;
typedef struct TYPE_62__ TYPE_29__ ;
typedef struct TYPE_61__ TYPE_28__ ;
typedef struct TYPE_60__ TYPE_27__ ;
typedef struct TYPE_59__ TYPE_26__ ;
typedef struct TYPE_58__ TYPE_25__ ;
typedef struct TYPE_57__ TYPE_24__ ;
typedef struct TYPE_56__ TYPE_23__ ;
typedef struct TYPE_55__ TYPE_22__ ;
typedef struct TYPE_54__ TYPE_21__ ;
typedef struct TYPE_53__ TYPE_20__ ;
typedef struct TYPE_52__ TYPE_1__ ;
typedef struct TYPE_51__ TYPE_19__ ;
typedef struct TYPE_50__ TYPE_18__ ;
typedef struct TYPE_49__ TYPE_17__ ;
typedef struct TYPE_48__ TYPE_16__ ;
typedef struct TYPE_47__ TYPE_15__ ;
typedef struct TYPE_46__ TYPE_14__ ;
typedef struct TYPE_45__ TYPE_13__ ;
typedef struct TYPE_44__ TYPE_12__ ;
typedef struct TYPE_43__ TYPE_11__ ;
typedef struct TYPE_42__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_55__ {int TCEI; int EVACT; } ;
struct TYPE_56__ {TYPE_22__ bit; } ;
struct TYPE_53__ {int SWRST; int MODE; scalar_t__ ENABLE; } ;
struct TYPE_54__ {TYPE_20__ bit; } ;
struct TYPE_50__ {scalar_t__ SWRST; scalar_t__ ENABLE; } ;
struct TYPE_51__ {TYPE_18__ bit; } ;
struct TYPE_57__ {TYPE_23__ EVCTRL; TYPE_21__ CTRLA; TYPE_19__ SYNCBUSY; } ;
struct TYPE_45__ {int MC0; } ;
struct TYPE_46__ {TYPE_13__ bit; } ;
struct TYPE_43__ {int MCEO0; } ;
struct TYPE_44__ {TYPE_11__ bit; } ;
struct TYPE_77__ {int WAVEGEN; } ;
struct TYPE_42__ {TYPE_9__ bit; } ;
struct TYPE_75__ {scalar_t__ CC0; scalar_t__ CTRLB; scalar_t__ SWRST; scalar_t__ ENABLE; } ;
struct TYPE_76__ {TYPE_7__ bit; } ;
struct TYPE_73__ {int reg; } ;
struct TYPE_71__ {int SWRST; scalar_t__ ENABLE; } ;
struct TYPE_72__ {TYPE_3__ bit; } ;
struct TYPE_47__ {TYPE_14__ INTENSET; TYPE_12__ EVCTRL; TYPE_10__ WAVE; TYPE_8__ SYNCBUSY; TYPE_6__* CC; TYPE_5__ CTRLBCLR; TYPE_4__ CTRLA; } ;
struct TYPE_67__ {TYPE_24__ COUNT32; TYPE_15__ COUNT16; } ;
typedef TYPE_33__ Tc ;
struct TYPE_74__ {int reg; } ;
struct TYPE_70__ {TYPE_32__* Channel; TYPE_29__* USER; } ;
struct TYPE_69__ {TYPE_28__* PCHCTRL; } ;
struct TYPE_58__ {int EVSYS_; } ;
struct TYPE_59__ {TYPE_25__ bit; } ;
struct TYPE_48__ {int TC0_; int TC1_; } ;
struct TYPE_49__ {TYPE_16__ bit; } ;
struct TYPE_52__ {int TC4_; } ;
struct TYPE_63__ {TYPE_1__ bit; } ;
struct TYPE_68__ {TYPE_26__ APBBMASK; TYPE_17__ APBAMASK; TYPE_2__ APBCMASK; } ;
struct TYPE_64__ {int EVGEN; int PATH; int EDGSEL; } ;
struct TYPE_65__ {TYPE_30__ bit; } ;
struct TYPE_66__ {TYPE_31__ CHANNEL; } ;
struct TYPE_62__ {int reg; } ;
struct TYPE_60__ {int CHEN; void* GEN; } ;
struct TYPE_61__ {TYPE_27__ bit; } ;
typedef TYPE_34__ Mclk ;
typedef TYPE_35__ Gclk ;
typedef TYPE_36__ Evsys ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_15 ;
 TYPE_36__* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_35__* VAR_23 ;
 void* VAR_24 ;
 TYPE_34__* VAR_25 ;
 int FUNC_5 (int ) ;
 TYPE_33__* VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 TYPE_33__* VAR_29 ;
 size_t VAR_30 ;
 int VAR_31 ;

uint32_t FUNC_6(void) {
    Gclk * VAR_32 = VAR_23;
    Mclk * VAR_33 = VAR_25;
    Tc * VAR_34 = VAR_29;
    Tc * VAR_35 = VAR_26;
    Evsys *VAR_36 = VAR_16;

    FUNC_4(VAR_0);


    FUNC_3(VAR_24, VAR_22);
    FUNC_1();


    VAR_33->APBCMASK.bit.TC4_ = 1;
    VAR_32->PCHCTRL[VAR_30].bit.GEN = VAR_24;
    VAR_32->PCHCTRL[VAR_30].bit.CHEN = 1;


    FUNC_4(VAR_9);
    VAR_34->COUNT16.CTRLA.bit.ENABLE = 0;
    while (VAR_34->COUNT16.SYNCBUSY.bit.ENABLE) {
        FUNC_4(VAR_13);
    }
    VAR_34->COUNT16.CTRLA.bit.SWRST = 1;
    while (VAR_34->COUNT16.SYNCBUSY.bit.SWRST) {
        FUNC_4(VAR_14);
    }
    while (VAR_34->COUNT16.CTRLA.bit.SWRST) {
        FUNC_4(VAR_15);
    }



    VAR_34->COUNT16.CTRLBCLR.reg = 5;
    while (VAR_34->COUNT16.SYNCBUSY.bit.CTRLB) {
        FUNC_4(VAR_12);
    }
    VAR_34->COUNT16.CC[0].reg = 999;
    while (VAR_34->COUNT16.SYNCBUSY.bit.CC0) {
        FUNC_4(VAR_11);
    }



    VAR_34->COUNT16.WAVE.bit.WAVEGEN = 1;

    VAR_34->COUNT16.EVCTRL.bit.MCEO0 = 1;

    FUNC_5(VAR_31);
    VAR_34->COUNT16.INTENSET.bit.MC0 = 1;

    FUNC_4(VAR_10);


    VAR_33->APBAMASK.bit.TC0_ = 1;
    VAR_32->PCHCTRL[VAR_27].bit.GEN = VAR_24;
    VAR_32->PCHCTRL[VAR_27].bit.CHEN = 1;

    VAR_33->APBAMASK.bit.TC1_ = 1;
    VAR_32->PCHCTRL[VAR_28].bit.GEN = VAR_24;
    VAR_32->PCHCTRL[VAR_28].bit.CHEN = 1;


    FUNC_4(VAR_4);
    VAR_35->COUNT32.CTRLA.bit.ENABLE = 0;
    while (VAR_35->COUNT32.SYNCBUSY.bit.ENABLE) {
        FUNC_4(VAR_6);
    }
    VAR_35->COUNT32.CTRLA.bit.SWRST = 1;
    while (VAR_35->COUNT32.SYNCBUSY.bit.SWRST) {
        FUNC_4(VAR_7);
    }
    while (VAR_35->COUNT32.CTRLA.bit.SWRST) {
        FUNC_4(VAR_8);
    }

    VAR_35->COUNT32.CTRLA.bit.MODE = 2;
    VAR_35->COUNT32.EVCTRL.bit.TCEI = 1;
    VAR_35->COUNT32.EVCTRL.bit.EVACT = 2;

    FUNC_4(VAR_5);

    FUNC_4(VAR_2);


    VAR_33->APBBMASK.bit.EVSYS_ = 1;
    VAR_32->PCHCTRL[VAR_19].bit.GEN = VAR_24;
    VAR_32->PCHCTRL[VAR_19].bit.CHEN = 1;
    VAR_36->USER[44].reg = VAR_21;
    VAR_36->Channel[0].CHANNEL.bit.EDGSEL = VAR_17;
    VAR_36->Channel[0].CHANNEL.bit.PATH = VAR_18;
    VAR_36->Channel[0].CHANNEL.bit.EVGEN = VAR_20;

    FUNC_4(VAR_3);

    FUNC_2();

    FUNC_0();

    FUNC_4(VAR_1);

    return 0;
}
