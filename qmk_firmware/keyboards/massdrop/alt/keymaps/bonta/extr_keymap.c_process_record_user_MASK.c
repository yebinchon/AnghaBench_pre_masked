
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
 int const VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ,char*) ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_7 ;
 int VAR_8 ;

bool FUNC_7(uint16_t VAR_9, keyrecord_t *VAR_10) {
    static uint32_t VAR_11;

    switch (VAR_9) {
        case 128:
            if (VAR_10->event.pressed && VAR_2 && VAR_1) {
                FUNC_0(VAR_7, "USB extra port manual mode");
            }
            return 0;
        case 129:
            if (VAR_10->event.pressed && VAR_2 && VAR_1) {
                FUNC_0(VAR_8, "USB GCR auto mode");
            }
            return 0;
        case 134:
            if (VAR_10->event.pressed) {
                FUNC_0(VAR_3, "Debug mode");
            }
            return 0;
        case 135:
            if (VAR_10->event.pressed) {
                FUNC_0(VAR_5, "Debug matrix");
            }
            return 0;
        case 137:
            if (VAR_10->event.pressed) {
                FUNC_0(VAR_4, "Debug keyboard");
            }
            return 0;
        case 136:
            if (VAR_10->event.pressed) {
                FUNC_0(VAR_6, "Debug mouse");
            }
            return 0;
        case 130:
            if (VAR_10->event.pressed) {
              switch (FUNC_2()) {
                case 133: {
                    FUNC_4(132);
                    FUNC_3(0, 0, 0);
                  }
                  break;
                case 132: {
                    FUNC_4(VAR_0);
                    FUNC_3(0, 0, 0);
                  }
                  break;
                default: {
                    FUNC_4(133);
                  }
                  break;
              }
            }
            return 0;
        case 131:
            if (VAR_10->event.pressed) {
                VAR_11 = FUNC_6();
            } else {
                if (FUNC_5(VAR_11) >= 500) {
                    FUNC_1();
                }
            }
            return 0;
        default:
            return 1;
    }
}
