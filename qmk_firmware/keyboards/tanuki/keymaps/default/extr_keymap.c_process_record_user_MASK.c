
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int layer_rgb; int raw; } ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_1 ;

bool FUNC_2 (uint16_t VAR_2, keyrecord_t *VAR_3) {
    switch (VAR_2) {
        case 134:
            if(VAR_3->event.pressed) {
                VAR_1.layer_rgb ^= 1;
                FUNC_0(VAR_1.raw);
                if (VAR_1.layer_rgb) {
                    FUNC_1(VAR_0);
                }
            }
            return 0;
            break;
        case 132:
        case 131:
        case 130:
        case 133:
        case 129:
        case 128:
            if(VAR_1.layer_rgb && VAR_3->event.pressed) {
                return 0;
            }
            break;
    }
    return 1;
}
