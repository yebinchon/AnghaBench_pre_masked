
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int is_pressed; int kc_tap; int timer; } ;
typedef TYPE_1__ tap_hold_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

void FUNC_3(uint8_t VAR_2, bool VAR_3) {
    if (VAR_2 >= VAR_0) { return; }

    tap_hold_t *VAR_4 = &VAR_1[VAR_2];

    if (VAR_3) {
        VAR_4->timer = FUNC_1();
        VAR_4->is_pressed = 1;
    } else if (VAR_4->is_pressed) {
        FUNC_0(VAR_4->kc_tap);
        FUNC_2(VAR_4->kc_tap);
        VAR_4->is_pressed = 0;
    }
}
