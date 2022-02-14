
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





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

bool FUNC_2(uint16_t VAR_6, keyrecord_t *VAR_7) {
    switch(VAR_6) {
        case 131:
            if (VAR_7->event.pressed) {
                FUNC_0(VAR_5);
            }
            return 0;
            break;
        case 132:
            if (VAR_7->event.pressed) {
                FUNC_0(VAR_4);
            }
            return 0;
            break;
        case 133:
            if (VAR_7->event.pressed) {
                FUNC_0(VAR_3);
            }
            return 0;
            break;
        case 130:
            FUNC_1(VAR_0);
            return 0;
            break;
        case 128:
            FUNC_1(VAR_2);
            return 0;
            break;
        case 129:
            FUNC_1(VAR_1);
            return 0;
            break;
    }
    return 1;
}
