
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_13__ {int freq_xosc0; int * freq_gclk; } ;
struct TYPE_10__ {scalar_t__ GENCTRL; } ;
struct TYPE_11__ {TYPE_3__ vec; } ;
struct TYPE_12__ {TYPE_4__ SYNCBUSY; TYPE_2__* GENCTRL; } ;
struct TYPE_8__ {int DIV; int GENEN; scalar_t__ DIVSEL; int SRC; } ;
struct TYPE_9__ {TYPE_1__ bit; } ;
typedef TYPE_5__ Gclk ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 TYPE_6__ VAR_10 ;

void FUNC_1(void) {
    uint8_t VAR_11 = VAR_9;
    Gclk * VAR_12 = VAR_7;

    FUNC_0(VAR_0);

    while (VAR_12->SYNCBUSY.vec.GENCTRL) {
        FUNC_0(VAR_2);
    }
    VAR_12->GENCTRL[VAR_11].bit.SRC = VAR_8;
    while (VAR_12->SYNCBUSY.vec.GENCTRL) {
        FUNC_0(VAR_3);
    }
    VAR_12->GENCTRL[VAR_11].bit.DIV = 1;
    while (VAR_12->SYNCBUSY.vec.GENCTRL) {
        FUNC_0(VAR_4);
    }
    VAR_12->GENCTRL[VAR_11].bit.DIVSEL = 0;
    while (VAR_12->SYNCBUSY.vec.GENCTRL) {
        FUNC_0(VAR_5);
    }
    VAR_12->GENCTRL[VAR_11].bit.GENEN = 1;
    while (VAR_12->SYNCBUSY.vec.GENCTRL) {
        FUNC_0(VAR_6);
    }
    VAR_10.freq_gclk[VAR_11] = VAR_10.freq_xosc0;

    FUNC_0(VAR_1);
}
