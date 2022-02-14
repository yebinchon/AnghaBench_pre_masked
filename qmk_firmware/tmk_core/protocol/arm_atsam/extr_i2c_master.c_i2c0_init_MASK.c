
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_27__ {scalar_t__ SYSOP; scalar_t__ ENABLE; } ;
struct TYPE_28__ {TYPE_8__ bit; } ;
struct TYPE_25__ {int MODE; int RUNSTDBY; int ENABLE; scalar_t__ SPEED; } ;
struct TYPE_26__ {TYPE_6__ bit; } ;
struct TYPE_24__ {TYPE_4__* PINCFG; TYPE_2__* PMUX; } ;
struct TYPE_22__ {int PMUXEN; } ;
struct TYPE_23__ {TYPE_3__ bit; } ;
struct TYPE_20__ {int PMUXE; int PMUXO; } ;
struct TYPE_21__ {TYPE_1__ bit; } ;
struct TYPE_19__ {TYPE_5__* Group; } ;
struct TYPE_15__ {int BUSSTATE; } ;
struct TYPE_16__ {TYPE_10__ bit; } ;
struct TYPE_17__ {TYPE_11__ STATUS; TYPE_9__ SYNCBUSY; TYPE_7__ CTRLA; } ;
struct TYPE_18__ {TYPE_12__ I2CM; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_14__* VAR_7 ;
 TYPE_13__* VAR_8 ;

void FUNC_2(void) {
    FUNC_1(VAR_1);

    FUNC_0(VAR_0, VAR_6);


    VAR_7->Group[0].PMUX[4].bit.PMUXE = 2;
    VAR_7->Group[0].PMUX[4].bit.PMUXO = 2;
    VAR_7->Group[0].PINCFG[8].bit.PMUXEN = 1;
    VAR_7->Group[0].PINCFG[9].bit.PMUXEN = 1;




    VAR_8->I2CM.CTRLA.bit.MODE = 5;

    VAR_8->I2CM.CTRLA.bit.SPEED = 0;
    VAR_8->I2CM.CTRLA.bit.RUNSTDBY = 1;

    VAR_8->I2CM.CTRLA.bit.ENABLE = 1;
    while (VAR_8->I2CM.SYNCBUSY.bit.ENABLE) {
        FUNC_1(VAR_3);
    }

    VAR_8->I2CM.STATUS.bit.BUSSTATE = 1;
    while (VAR_8->I2CM.SYNCBUSY.bit.SYSOP) {
        FUNC_1(VAR_4);
    }
    while (VAR_8->I2CM.STATUS.bit.BUSSTATE != 1) {
        FUNC_1(VAR_5);
    }

    FUNC_1(VAR_2);
}
