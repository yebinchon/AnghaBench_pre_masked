
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_22__ ;
typedef struct TYPE_37__ TYPE_21__ ;
typedef struct TYPE_36__ TYPE_20__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_19__ ;
typedef struct TYPE_33__ TYPE_18__ ;
typedef struct TYPE_32__ TYPE_17__ ;
typedef struct TYPE_31__ TYPE_16__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_46__ {scalar_t__ LOCK; scalar_t__ CLKRDY; } ;
struct TYPE_44__ {scalar_t__ ENABLE; scalar_t__ DPLLRATIO; } ;
struct TYPE_45__ {TYPE_7__ bit; } ;
struct TYPE_42__ {int ENABLE; scalar_t__ ONDEMAND; } ;
struct TYPE_43__ {TYPE_5__ bit; } ;
struct TYPE_40__ {scalar_t__ XOSCRDY0; } ;
struct TYPE_41__ {TYPE_3__ bit; } ;
struct TYPE_35__ {int ENABLE; int STARTUP; int ENALC; int IMULT; int IPTAT; int XTALEN; scalar_t__ ONDEMAND; } ;
struct TYPE_39__ {TYPE_1__ bit; } ;
struct TYPE_38__ {int freq_dfll; int* freq_gclk; int freq_xosc0; int* freq_dpll; } ;
struct TYPE_33__ {scalar_t__ GENCTRL0; } ;
struct TYPE_34__ {TYPE_18__ bit; } ;
struct TYPE_37__ {TYPE_19__ SYNCBUSY; TYPE_17__* GENCTRL; } ;
struct TYPE_36__ {TYPE_15__* Dpll; TYPE_4__ STATUS; TYPE_2__* XOSCCTRL; } ;
struct TYPE_31__ {int SRC; } ;
struct TYPE_32__ {TYPE_16__ bit; } ;
struct TYPE_28__ {int LDR; } ;
struct TYPE_29__ {TYPE_13__ bit; } ;
struct TYPE_26__ {int REFCLK; int DIV; } ;
struct TYPE_27__ {TYPE_11__ bit; } ;
struct TYPE_25__ {TYPE_9__ bit; } ;
struct TYPE_30__ {TYPE_14__ DPLLRATIO; TYPE_12__ DPLLCTRLB; TYPE_10__ DPLLSTATUS; TYPE_8__ DPLLSYNCBUSY; TYPE_6__ DPLLCTRLA; } ;
typedef TYPE_20__ Oscctrl ;
typedef TYPE_21__ Gclk ;


 int FUNC_0 (int ) ;
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
 TYPE_21__* VAR_11 ;
 size_t VAR_12 ;
 TYPE_20__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 TYPE_22__ VAR_18 ;
 int VAR_19 ;

void FUNC_1(void) {
    Oscctrl *VAR_20 = VAR_13;
    Gclk * VAR_21 = VAR_11;

    FUNC_0(VAR_0);


    VAR_18.freq_dfll = VAR_9;
    VAR_18.freq_gclk[0] = VAR_18.freq_dfll;


    VAR_20->XOSCCTRL[0].bit.ENABLE = 0;
    VAR_20->XOSCCTRL[0].bit.STARTUP = 0xD;
    VAR_20->XOSCCTRL[0].bit.ENALC = 1;
    VAR_20->XOSCCTRL[0].bit.IMULT = 5;
    VAR_20->XOSCCTRL[0].bit.IPTAT = 3;
    VAR_20->XOSCCTRL[0].bit.ONDEMAND = 0;
    VAR_20->XOSCCTRL[0].bit.XTALEN = 1;
    VAR_20->XOSCCTRL[0].bit.ENABLE = 1;
    while (VAR_20->STATUS.bit.XOSCRDY0 == 0) {
        FUNC_0(VAR_8);
    }
    VAR_18.freq_xosc0 = VAR_10;


    VAR_20->Dpll[VAR_17].DPLLCTRLA.bit.ENABLE = 0;
    while (VAR_20->Dpll[VAR_17].DPLLSYNCBUSY.bit.ENABLE) {
        FUNC_0(VAR_2);
    }
    VAR_20->Dpll[VAR_17].DPLLCTRLB.bit.REFCLK = 2;
    VAR_20->Dpll[VAR_17].DPLLCTRLB.bit.DIV = 7;
    VAR_20->Dpll[VAR_17].DPLLRATIO.bit.LDR = VAR_14;
    while (VAR_20->Dpll[VAR_17].DPLLSYNCBUSY.bit.DPLLRATIO) {
        FUNC_0(VAR_4);
    }
    VAR_20->Dpll[VAR_17].DPLLCTRLA.bit.ONDEMAND = 0;
    VAR_20->Dpll[VAR_17].DPLLCTRLA.bit.ENABLE = 1;
    while (VAR_20->Dpll[VAR_17].DPLLSYNCBUSY.bit.ENABLE) {
        FUNC_0(VAR_3);
    }
    while (VAR_20->Dpll[VAR_17].DPLLSTATUS.bit.LOCK == 0) {
        FUNC_0(VAR_6);
    }
    while (VAR_20->Dpll[VAR_17].DPLLSTATUS.bit.CLKRDY == 0) {
        FUNC_0(VAR_5);
    }
    VAR_18.freq_dpll[0] = (VAR_18.freq_xosc0 / 2 / (VAR_20->Dpll[VAR_17].DPLLCTRLB.bit.DIV + 1)) * (VAR_20->Dpll[VAR_17].DPLLRATIO.bit.LDR + 1);


    VAR_21->GENCTRL[VAR_12].bit.SRC = VAR_16;
    while (VAR_21->SYNCBUSY.bit.GENCTRL0) {
        FUNC_0(VAR_7);
    }

    VAR_18.freq_gclk[0] = VAR_18.freq_dpll[0];

    VAR_19 = VAR_18.freq_gclk[0] / (VAR_15 * 1000000);
    if (VAR_19 < 1) VAR_19 = 1;

    FUNC_0(VAR_1);
}
