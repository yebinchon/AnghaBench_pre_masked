
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SRC_1; int SRC_2; int E_UP_N; int E_DN1_N; int E_VBUS_1; int E_VBUS_2; int S_UP; int S_DN1; } ;
struct TYPE_4__ {TYPE_1__ bit; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void* FUNC_4 (int ) ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_5 (int) ;

void FUNC_6(void) {




    FUNC_0(VAR_5);

    VAR_14 = VAR_11;

    VAR_13 = VAR_8;

    VAR_12.bit.SRC_1 = 1;
    VAR_12.bit.SRC_2 = 1;
    VAR_12.bit.E_UP_N = 1;
    VAR_12.bit.E_DN1_N = 1;
    VAR_12.bit.E_VBUS_1 = 0;
    VAR_12.bit.E_VBUS_2 = 0;

    FUNC_1();

    FUNC_5(250);

    while ((VAR_15 = FUNC_4(VAR_0)) < VAR_1) {
        FUNC_0(VAR_4);
    }

    VAR_16 = FUNC_4(VAR_2);
    VAR_18 = FUNC_4(VAR_3);

    VAR_17 = VAR_16;
    VAR_19 = VAR_18;

    if (VAR_16 > VAR_18) {
        VAR_12.bit.S_UP = 0;
        VAR_12.bit.S_DN1 = 1;
        VAR_12.bit.SRC_1 = 1;
        VAR_12.bit.SRC_2 = 0;

        VAR_12.bit.E_VBUS_1 = 1;
        VAR_12.bit.E_VBUS_2 = 0;

        FUNC_1();

        VAR_12.bit.E_UP_N = 0;

        FUNC_1();

        VAR_14 = VAR_9;
    } else {
        VAR_12.bit.S_UP = 1;
        VAR_12.bit.S_DN1 = 0;
        VAR_12.bit.SRC_1 = 0;
        VAR_12.bit.SRC_2 = 1;

        VAR_12.bit.E_VBUS_1 = 0;
        VAR_12.bit.E_VBUS_2 = 1;

        FUNC_1();

        VAR_12.bit.E_UP_N = 0;

        FUNC_1();

        VAR_14 = VAR_10;
    }


    VAR_13 = VAR_7;


    FUNC_3();
    FUNC_2();

    FUNC_0(VAR_6);
}
