
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
struct TYPE_7__ {int swapped_numbers; int raw; } ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 TYPE_3__ VAR_1 ;

bool FUNC_4(uint16_t VAR_2, keyrecord_t *VAR_3) {
    switch (VAR_2) {
        case 130:
            if (FUNC_0(VAR_0) && VAR_1.swapped_numbers) {
                if (VAR_3->event.pressed) {
                    FUNC_2(129);
                } else {
                    FUNC_3(129);
                }
                return 0;
            }
            break;
        case 129:
            if (FUNC_0(VAR_0) && VAR_1.swapped_numbers) {
                if (VAR_3->event.pressed) {
                    FUNC_2(130);
                } else {
                    FUNC_3(130);
                }
                return 0;
            }
            break;
        case 128:
            if (VAR_3->event.pressed) {
                VAR_1.swapped_numbers ^= 1;
                FUNC_1(VAR_1.raw);
            }
            break;
    }
    return 1;
}
