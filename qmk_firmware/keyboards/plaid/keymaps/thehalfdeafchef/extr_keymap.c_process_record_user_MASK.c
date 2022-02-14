
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {void* red_mode; void* green_mode; int raw; } ;





 void* VAR_0 ;
 void* VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_4__ VAR_5 ;
 int FUNC_1 (int ) ;

bool FUNC_2(uint16_t VAR_6, keyrecord_t *VAR_7) {
    switch (VAR_6) {
        case 128:
            if (VAR_7->event.pressed) {
                FUNC_1(VAR_4);
            }
            return 0;
            break;
        case 131:
            if (VAR_7->event.pressed) {
                FUNC_1(VAR_2);
            }
            return 0;
            break;
        case 130:
            if (VAR_7->event.pressed) {
                FUNC_1(VAR_3);
            }
            return 0;
            break;
        case 129:
            if (VAR_7->event.pressed) {
                if (VAR_5.red_mode == VAR_1 && VAR_5.green_mode == VAR_1) {
                    VAR_5.red_mode = VAR_0;
                    VAR_5.green_mode = VAR_0;
                } else if (VAR_5.red_mode == VAR_0 && VAR_5.green_mode == VAR_0) {
                    VAR_5.red_mode = VAR_1;
                    VAR_5.green_mode = VAR_1;
                }
            }
            FUNC_0(VAR_5.raw);
            return 0;
            break;
    }
    return 1;
}
