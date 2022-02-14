
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int layer_state_t ;
struct TYPE_4__ {int matrix; int keyboard; int mouse; int enable; int raw; } ;
struct TYPE_3__ {int swap_control_capslock; int capslock_to_control; int swap_lalt_lgui; int swap_ralt_rgui; int no_gui; int swap_grave_esc; int swap_backslash_backspace; int nkro; int raw; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__ VAR_25 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 TYPE_1__ VAR_26 ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int) ;

void FUNC_15(void) {

    if (!FUNC_4()) {
        FUNC_3();
    }


    FUNC_13("bootmagic scan: ... ");
    uint8_t VAR_27 = 100;
    while (VAR_27--) {
        FUNC_12();
        FUNC_14(10);
    }
    FUNC_13("done.\n");


    if (FUNC_1(VAR_19)) {
        return;
    }


    if (FUNC_1(VAR_15)) {
        FUNC_3();
    }


    if (FUNC_1(VAR_1)) {
        FUNC_0();
    }


    VAR_25.raw = FUNC_5();
    if (FUNC_1(VAR_3)) {
        if (FUNC_1(VAR_5)) {
            VAR_25.matrix = !VAR_25.matrix;
        } else if (FUNC_1(VAR_4)) {
            VAR_25.keyboard = !VAR_25.keyboard;
        } else if (FUNC_1(VAR_6)) {
            VAR_25.mouse = !VAR_25.mouse;
        } else {
            VAR_25.enable = !VAR_25.enable;
        }
    }
    FUNC_8(VAR_25.raw);


    VAR_26.raw = FUNC_7();
    if (FUNC_1(VAR_21)) {
        VAR_26.swap_control_capslock = !VAR_26.swap_control_capslock;
    }
    if (FUNC_1(VAR_2)) {
        VAR_26.capslock_to_control = !VAR_26.capslock_to_control;
    }
    if (FUNC_1(VAR_23)) {
        VAR_26.swap_lalt_lgui = !VAR_26.swap_lalt_lgui;
    }
    if (FUNC_1(VAR_24)) {
        VAR_26.swap_ralt_rgui = !VAR_26.swap_ralt_rgui;
    }
    if (FUNC_1(VAR_18)) {
        VAR_26.no_gui = !VAR_26.no_gui;
    }
    if (FUNC_1(VAR_22)) {
        VAR_26.swap_grave_esc = !VAR_26.swap_grave_esc;
    }
    if (FUNC_1(VAR_20)) {
        VAR_26.swap_backslash_backspace = !VAR_26.swap_backslash_backspace;
    }
    if (FUNC_1(VAR_0)) {
        VAR_26.nkro = !VAR_26.nkro;
    }
    FUNC_11(VAR_26.raw);


    uint8_t VAR_28 = 0;
    if (FUNC_1(VAR_7)) {
        VAR_28 |= (1 << 0);
    }
    if (FUNC_1(VAR_8)) {
        VAR_28 |= (1 << 1);
    }
    if (FUNC_1(VAR_9)) {
        VAR_28 |= (1 << 2);
    }
    if (FUNC_1(VAR_10)) {
        VAR_28 |= (1 << 3);
    }
    if (FUNC_1(VAR_11)) {
        VAR_28 |= (1 << 4);
    }
    if (FUNC_1(VAR_12)) {
        VAR_28 |= (1 << 5);
    }
    if (FUNC_1(VAR_13)) {
        VAR_28 |= (1 << 6);
    }
    if (FUNC_1(VAR_14)) {
        VAR_28 |= (1 << 7);
    }
    if (VAR_28) {
        FUNC_9(VAR_28);
        FUNC_2((layer_state_t)VAR_28);
    } else {
        VAR_28 = FUNC_6();
        FUNC_2((layer_state_t)VAR_28);
    }


    if (FUNC_1(VAR_16)) {
        FUNC_10(1);
    }
    if (FUNC_1(VAR_17)) {
        FUNC_10(0);
    }
}
