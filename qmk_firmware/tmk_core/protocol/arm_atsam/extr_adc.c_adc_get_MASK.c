
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_20__ {int reg; } ;
struct TYPE_18__ {int RESRDY; } ;
struct TYPE_19__ {TYPE_7__ bit; } ;
struct TYPE_16__ {scalar_t__ SWTRIG; scalar_t__ INPUTCTRL; } ;
struct TYPE_17__ {TYPE_5__ bit; } ;
struct TYPE_14__ {int START; } ;
struct TYPE_15__ {TYPE_3__ bit; } ;
struct TYPE_12__ {int MUXPOS; } ;
struct TYPE_13__ {TYPE_1__ bit; } ;
struct TYPE_11__ {TYPE_9__ RESULT; TYPE_8__ INTFLAG; TYPE_6__ SYNCBUSY; TYPE_4__ SWTRIG; TYPE_2__ INPUTCTRL; } ;


 TYPE_10__* VAR_0 ;

uint16_t FUNC_0(uint8_t VAR_1) {
    VAR_0->INPUTCTRL.bit.MUXPOS = VAR_1;
    while (VAR_0->SYNCBUSY.bit.INPUTCTRL) {
    }

    VAR_0->SWTRIG.bit.START = 1;
    while (VAR_0->SYNCBUSY.bit.SWTRIG) {
    }
    while (!VAR_0->INTFLAG.bit.RESRDY) {
    }

    return VAR_0->RESULT.reg;
}
