
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_23 ;

bool FUNC_5(uint16_t VAR_24, keyrecord_t *VAR_25) {
    static uint32_t VAR_26;

    switch (VAR_24) {
        case 140:
            if (VAR_25->event.pressed) {
                if (VAR_3 > VAR_2 - VAR_14) VAR_14 = VAR_2;
                else VAR_14 += VAR_3;
                if (VAR_16) VAR_13 = VAR_14;
            }
            return 0;
        case 141:
            if (VAR_25->event.pressed) {
                if (VAR_3 > VAR_14) VAR_14 = 0;
                else VAR_14 -= VAR_3;
                if (VAR_16) VAR_13 = VAR_14;
            }
            return 0;
        case 135:
            if (VAR_25->event.pressed) {
                if (VAR_18 == VAR_22 - 1) VAR_18 = 0;
                else VAR_18++;
            }
            return 0;
        case 134:
            if (VAR_25->event.pressed) {
                if (VAR_18 == 0) VAR_18 = VAR_22 - 1;
                else VAR_18--;
            }
            return 0;
        case 136:
            if (VAR_25->event.pressed) {
                VAR_19 += VAR_0;
            }
            return 0;
        case 137:
            if (VAR_25->event.pressed) {
                VAR_19 -= VAR_0;
                if (VAR_19 < 0) VAR_19 = 0;
            }
            return 0;
        case 132:
            if (VAR_25->event.pressed) {
                VAR_21++;
                if (VAR_21 > VAR_4) VAR_21 = VAR_5;
            }
            return 0;
        case 131:
            if (VAR_25->event.pressed) {
                VAR_20 = !VAR_20;
                FUNC_0(VAR_20);
            }
            return 0;
        case 138:
            if (VAR_25->event.pressed) {
                VAR_20 = 1;
                FUNC_0(VAR_20);
            }
            return 0;
        case 139:
            if (VAR_25->event.pressed) {
                VAR_20 = 0;
                FUNC_0(VAR_20);
            }
            return 0;
        case 133:
            if (VAR_25->event.pressed) {
                VAR_16 = !VAR_16;
                if (VAR_16) {
                    VAR_13 = VAR_14;
                    VAR_15 = VAR_1;
                    VAR_8 = 1;
                }
            }
            return 0;
        case 130:
            if (VAR_25->event.pressed) {
                VAR_17 = !VAR_17;
            }
            return 0;
        case 128:
            if (VAR_25->event.pressed && VAR_7 && VAR_6) {
                FUNC_1(VAR_23, "USB GCR auto mode");
            }
            return 0;
        case 142:
            if (VAR_25->event.pressed) {
                FUNC_1(VAR_9, "Debug mode");
            }
            return 0;
        case 143:
            if (VAR_25->event.pressed) {
                FUNC_1(VAR_11, "Debug matrix");
            }
            return 0;
        case 145:
            if (VAR_25->event.pressed) {
                FUNC_1(VAR_10, "Debug keyboard");
            }
            return 0;
        case 144:
            if (VAR_25->event.pressed) {
                FUNC_1(VAR_12, "Debug mouse");
            }
            return 0;
        case 129:
            if (VAR_25->event.pressed) {
                VAR_26 = FUNC_4();
            } else {
                if (FUNC_3(VAR_26) >= 500) {
                    FUNC_2();
                }
            }
            return 0;
        default:
            return 1;
    }
}
