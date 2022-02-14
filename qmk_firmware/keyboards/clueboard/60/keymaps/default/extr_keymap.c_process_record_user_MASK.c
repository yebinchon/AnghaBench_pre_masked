
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


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
 int FUNC_1 () ;

bool FUNC_2(uint16_t VAR_9, keyrecord_t *VAR_10) {
    switch (VAR_9) {
        case 136:
            if (VAR_10->event.pressed) {
                FUNC_1();
                FUNC_0(VAR_0);
            }
            return 0;
        case 133:
            if (VAR_10->event.pressed) {
                FUNC_1();
                FUNC_0(VAR_3);
            }
            return 0;
        case 131:
            if (VAR_10->event.pressed) {
                FUNC_1();
                FUNC_0(VAR_5);
            }
            return 0;
        case 134:
            if (VAR_10->event.pressed) {
                FUNC_1();
                FUNC_0(VAR_2);
            }
            return 0;
        case 130:
            if (VAR_10->event.pressed) {
                FUNC_1();
                FUNC_0(VAR_6);
            }
            return 0;
        case 132:
            if (VAR_10->event.pressed) {
                FUNC_1();
                FUNC_0(VAR_4);
            }
            return 0;
        case 135:
            if (VAR_10->event.pressed) {
                FUNC_1();
                FUNC_0(VAR_1);
            }
            return 0;
        case 129:
            if (VAR_10->event.pressed) {
                FUNC_1();
                FUNC_0(VAR_7);
            }
            return 0;
        case 128:
            if (VAR_10->event.pressed) {
                FUNC_1();
                FUNC_0(VAR_8);
            }
            return 0;
    }
    return 1;
}
