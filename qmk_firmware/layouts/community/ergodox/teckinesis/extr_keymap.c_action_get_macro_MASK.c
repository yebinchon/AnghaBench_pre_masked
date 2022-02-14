
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_5__ {int interrupted; int count; } ;
struct TYPE_7__ {TYPE_2__ event; TYPE_1__ tap; } ;
typedef TYPE_3__ keyrecord_t ;


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




 int const* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (int ) ;

const macro_t *FUNC_7(keyrecord_t *VAR_20, uint8_t VAR_21, uint8_t VAR_22)
{
    switch(VAR_21) {






        case 139:
        case 131:
        if (VAR_20->event.pressed && !VAR_20->tap.count) {
            if(++VAR_15 > 2) VAR_15 = 2;
            if(VAR_15 == 2) {
                FUNC_5(VAR_1);
                FUNC_6(VAR_1);
            } else if(VAR_15 == 1) {
                FUNC_5(VAR_3);
            }
        } else {
            if(--VAR_15 < 0) VAR_15 = 0;
            if(VAR_15 == 0) FUNC_6(VAR_3);
        }
        break;

        case 136:
        if (VAR_20->event.pressed) {
            if(++VAR_19 > 2) VAR_19 = 2;
            if(VAR_19 == 2) {
                VAR_18 = !VAR_18;
            } else if(VAR_19 == 1) {
                FUNC_1(VAR_14);
            }
        } else {
            if(--VAR_19 < 0) VAR_19 = 0;
            if((VAR_19 == 0) && (!VAR_18)) FUNC_0(VAR_14);
        }
        break;

        case 138:
        if (VAR_20->event.pressed) {
            if (VAR_20->tap.count && (!VAR_17) && (!VAR_16)) {
                FUNC_5(VAR_10);
            } else {
                if(++VAR_17 > 2) VAR_17 = 2;
                if(VAR_17 == 2) {
                    VAR_16 = !VAR_16;
                } else if(VAR_17 == 1) {
                    FUNC_1(VAR_12);
                }
            }
        } else {
            if(VAR_20->tap.count && (!VAR_17) && (!VAR_16)) {
                FUNC_6(VAR_10);
            } else {
                if(--VAR_17 < 0) VAR_17 = 0;
                if((!VAR_17) && (!VAR_16)) FUNC_0(VAR_12);
            }
        }
        break;

        case 137:
        if (VAR_20->event.pressed) {
            if (VAR_20->tap.count && !VAR_20->tap.interrupted) {
                FUNC_5(VAR_2);
            } else {
                FUNC_1(VAR_13);
            }
        } else {
            if(VAR_20->tap.count && !VAR_20->tap.interrupted) {
                FUNC_6(VAR_2);
            } else {
                FUNC_0(VAR_13);
            }
        }
        break;

        case 128:
        if (VAR_20->event.pressed) {
            if (VAR_20->tap.count && (!VAR_19) && (!VAR_18)) {
                FUNC_5(VAR_9);
            } else {
                if(++VAR_19 > 2) VAR_19 = 2;
                if(VAR_19 == 2) {
                    VAR_18 = !VAR_18;
                } else if(VAR_19 == 1) {
                    FUNC_1(VAR_14);
                }
            }
        } else {
            if(VAR_20->tap.count && VAR_19 == 0) {
                FUNC_6(VAR_9);
            } else {
                if(--VAR_19 < 0) VAR_19 = 0;
                if((!VAR_19) && (!VAR_18)) FUNC_0(VAR_14);
            }
        }
        break;

        case 130:
        if (VAR_20->event.pressed) {
            if (VAR_20->tap.count && (!VAR_17) && (!VAR_16)) {
                FUNC_5(VAR_0);
            } else {
                if(++VAR_17 > 2) VAR_17 = 2;
                if(VAR_17 == 2) {
                    VAR_16 = !VAR_16;
                } else if(VAR_17 == 1) {
                    FUNC_1(VAR_12);
                }
            }
        } else {
            if(VAR_20->tap.count && (!VAR_17) && (!VAR_16)) {
                FUNC_6(VAR_0);
            } else {
                if(--VAR_17 < 0) VAR_17 = 0;
                if((!VAR_17) && (!VAR_16)) FUNC_0(VAR_12);
            }
        }
        break;

        case 129:
        if (VAR_20->event.pressed) {
            if (VAR_20->tap.count && !VAR_20->tap.interrupted) {
                FUNC_5(VAR_4);
            } else {
                FUNC_1(VAR_13);
            }
        } else {
            if(VAR_20->tap.count && !VAR_20->tap.interrupted) {
                FUNC_6(VAR_4);
            } else {
                FUNC_0(VAR_13);
            }
        }
        break;



        case 133:
        if (VAR_20->event.pressed) {
            FUNC_3(VAR_8);
            FUNC_3(VAR_6);
            FUNC_4();
        } else {
            FUNC_2(VAR_8);
            FUNC_2(VAR_6);
            FUNC_4();
        }
        break;

        case 132:
        if (VAR_20->event.pressed) {
            FUNC_3(VAR_8);
            FUNC_3(VAR_7);
            FUNC_4();
        } else {
            FUNC_2(VAR_8);
            FUNC_2(VAR_7);
            FUNC_4();
        }
        break;

        case 135:
        if (VAR_20->event.pressed) {
            FUNC_3(VAR_5);
            FUNC_3(VAR_6);
            FUNC_4();
        } else {
            FUNC_2(VAR_5);
            FUNC_2(VAR_6);
            FUNC_4();
        }
        break;

        case 134:
        if (VAR_20->event.pressed) {
            FUNC_3(VAR_5);
            FUNC_3(VAR_7);
            FUNC_4();
        } else {
            FUNC_2(VAR_5);
            FUNC_2(VAR_7);
            FUNC_4();
        }
        break;

        default:

            break;
    }

    return VAR_11;
}
