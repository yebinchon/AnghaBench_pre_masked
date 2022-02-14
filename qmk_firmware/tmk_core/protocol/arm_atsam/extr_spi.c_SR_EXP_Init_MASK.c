
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_30__ {scalar_t__ ENABLE; } ;
struct TYPE_28__ {int DORD; int CPOL; int CPHA; int DIPO; int MODE; int ENABLE; scalar_t__ DOPO; } ;
struct TYPE_29__ {TYPE_7__ bit; } ;
struct TYPE_22__ {int reg; } ;
struct TYPE_27__ {TYPE_5__* PINCFG; TYPE_3__* PMUX; TYPE_1__ DIRSET; } ;
struct TYPE_25__ {int PMUXEN; } ;
struct TYPE_26__ {TYPE_4__ bit; } ;
struct TYPE_23__ {int SR_EXP_SCLK_MUX_SEL; int SR_EXP_DATAOUT_MUX_SEL; } ;
struct TYPE_24__ {TYPE_2__ bit; } ;
struct TYPE_21__ {TYPE_6__* Group; } ;
struct TYPE_16__ {TYPE_9__ bit; } ;
struct TYPE_17__ {TYPE_10__ SYNCBUSY; TYPE_8__ CTRLA; } ;
struct TYPE_20__ {TYPE_11__ SPI; } ;
struct TYPE_18__ {int E_UP_N; int S_DN1; int E_DN1_N; int SRC_1; int SRC_2; int IRST; scalar_t__ SDB_N; scalar_t__ E_VBUS_2; scalar_t__ E_VBUS_1; scalar_t__ S_UP; scalar_t__ HUB_RESET_N; scalar_t__ HUB_CONNECT; } ;
struct TYPE_19__ {TYPE_12__ bit; scalar_t__ reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_15__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 TYPE_14__* VAR_19 ;
 int FUNC_2 () ;
 TYPE_13__ VAR_20 ;

void FUNC_3(void) {
    FUNC_1(VAR_1);

    FUNC_0(VAR_0, VAR_4);


    VAR_5->Group[VAR_15].DIRSET.reg = (1 << VAR_14);
    VAR_5->Group[VAR_12].DIRSET.reg = (1 << VAR_11);


    VAR_5->Group[VAR_8].PMUX[VAR_7 / 2].bit.SR_EXP_DATAOUT_MUX_SEL = VAR_6;
    VAR_5->Group[VAR_18].PMUX[VAR_17 / 2].bit.SR_EXP_SCLK_MUX_SEL = VAR_16;
    VAR_5->Group[VAR_8].PINCFG[VAR_7].bit.PMUXEN = 1;
    VAR_5->Group[VAR_18].PINCFG[VAR_17].bit.PMUXEN = 1;


    VAR_9;
    VAR_13;

    VAR_19->SPI.CTRLA.bit.DORD = 1;
    VAR_19->SPI.CTRLA.bit.CPOL = 1;
    VAR_19->SPI.CTRLA.bit.CPHA = 1;
    VAR_19->SPI.CTRLA.bit.DIPO = 3;
    VAR_19->SPI.CTRLA.bit.DOPO = 0;
    VAR_19->SPI.CTRLA.bit.MODE = 3;

    VAR_19->SPI.CTRLA.bit.ENABLE = 1;
    while (VAR_19->SPI.SYNCBUSY.bit.ENABLE) {
        FUNC_1(VAR_3);
    }

    VAR_20.reg = 0;
    VAR_20.bit.HUB_CONNECT = 0;
    VAR_20.bit.HUB_RESET_N = 0;
    VAR_20.bit.S_UP = 0;
    VAR_20.bit.E_UP_N = 1;
    VAR_20.bit.S_DN1 = 1;
    VAR_20.bit.E_DN1_N = 1;
    VAR_20.bit.E_VBUS_1 = 0;
    VAR_20.bit.E_VBUS_2 = 0;
    VAR_20.bit.SRC_1 = 1;
    VAR_20.bit.SRC_2 = 1;
    VAR_20.bit.IRST = 1;
    VAR_20.bit.SDB_N = 0;
    FUNC_2();


    VAR_10;

    FUNC_1(VAR_2);
}
