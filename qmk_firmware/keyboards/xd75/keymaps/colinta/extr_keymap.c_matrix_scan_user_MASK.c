
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int is_pressed; int kc_hold; int timer; } ;
typedef TYPE_1__ tap_hold_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3() {
    for (uint8_t VAR_3 = 0 ; VAR_3 < VAR_1 ; ++VAR_3 ) {
        tap_hold_t *VAR_4 = &VAR_2[VAR_3];
        if ( VAR_4->is_pressed && FUNC_1(VAR_4->timer) > VAR_0) {
            FUNC_0(VAR_4->kc_hold);
            FUNC_2(VAR_4->kc_hold);
            VAR_4->is_pressed = 0;
        }
    }
}
