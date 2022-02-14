
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

bool FUNC_5(uint16_t VAR_3, keyrecord_t* VAR_4)
{
    if (VAR_4->event.pressed) {
        switch (VAR_3) {
            case 128:
                if (VAR_4->event.pressed) {
                    if (FUNC_3() & VAR_0) {
                        uint8_t VAR_5 = FUNC_3();
                        FUNC_2();
                        FUNC_0(FUNC_1(VAR_2));
                        FUNC_4(VAR_5);
                    } else {
                        FUNC_0(FUNC_1(VAR_1));
                    }
                }
                return 0;
            case 137:
                if (VAR_4->event.pressed) {
                    uint8_t VAR_6 = FUNC_3();
                    if (VAR_6 & VAR_0) {
                        FUNC_2();
                        FUNC_0("1");
                        FUNC_4(VAR_6);
                    } else {
                        FUNC_0("!");
                    }
                }
                return 0;
            case 136:
                if (VAR_4->event.pressed) {
                    uint8_t VAR_7 = FUNC_3();
                    if (VAR_7 & VAR_0) {
                        FUNC_2();
                        FUNC_0("2");
                        FUNC_4(VAR_7);
                    } else {
                        FUNC_0("@");
                    }
                }
                return 0;
            case 135:
                if (VAR_4->event.pressed) {
                    uint8_t VAR_8 = FUNC_3();
                    if (VAR_8 & VAR_0) {
                        FUNC_2();
                        FUNC_0("3");
                        FUNC_4(VAR_8);
                    } else {
                        FUNC_0("#");
                    }
                }
                return 0;
            case 134:
                if (VAR_4->event.pressed) {
                    uint8_t VAR_9 = FUNC_3();
                    if (VAR_9 & VAR_0) {
                        FUNC_2();
                        FUNC_0("4");
                        FUNC_4(VAR_9);
                    } else {
                        FUNC_0("$");
                    }
                }
                return 0;
            case 133:
                if (VAR_4->event.pressed) {
                    uint8_t VAR_10 = FUNC_3();
                    if (VAR_10 & VAR_0) {
                        FUNC_2();
                        FUNC_0("5");
                        FUNC_4(VAR_10);
                    } else {
                        FUNC_0("%");
                    }
                }
                return 0;
            case 132:
                if (VAR_4->event.pressed) {
                    uint8_t VAR_11 = FUNC_3();
                    if (VAR_11 & VAR_0) {
                        FUNC_2();
                        FUNC_0("6");
                        FUNC_4(VAR_11);
                    } else {
                        FUNC_0("^");
                    }
                }
                return 0;
            case 131:
                if (VAR_4->event.pressed) {
                    uint8_t VAR_12 = FUNC_3();
                    if (VAR_12 & VAR_0) {
                        FUNC_2();
                        FUNC_0("7");
                        FUNC_4(VAR_12);
                    } else {
                        FUNC_0("&");
                    }
                }
                return 0;
            case 130:
                if (VAR_4->event.pressed) {
                    uint8_t VAR_13 = FUNC_3();
                    if (VAR_13 & VAR_0) {
                        FUNC_2();
                        FUNC_0("8");
                        FUNC_4(VAR_13);
                    } else {
                        FUNC_0("*");
                    }
                }
                return 0;
            case 129:
                if (VAR_4->event.pressed) {
                    uint8_t VAR_14 = FUNC_3();
                    if (VAR_14 & VAR_0) {
                        FUNC_2();
                        FUNC_0("9");
                        FUNC_4(VAR_14);
                    } else {
                        FUNC_0("(");
                    }
                }
                return 0;
            case 138:
                if (VAR_4->event.pressed) {
                    uint8_t VAR_15 = FUNC_3();
                    if (VAR_15 & VAR_0) {
                        FUNC_2();
                        FUNC_0("0");
                        FUNC_4(VAR_15);
                    } else {
                        FUNC_0(")");
                    }
                }
                return 0;
        }
    }
    return 1;
}
