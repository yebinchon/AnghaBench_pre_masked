
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {int timer; scalar_t__ count; } ;
struct TYPE_5__ {scalar_t__ custom_tapping_term; TYPE_3__ state; } ;
typedef TYPE_1__ qk_tap_dance_action_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3() {
    if (VAR_1 == -1) return;
    uint16_t VAR_3;

    for (uint8_t VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++) {
        qk_tap_dance_action_t *VAR_5 = &VAR_2[VAR_4];
        if (VAR_5->custom_tapping_term > 0) {
            VAR_3 = VAR_5->custom_tapping_term;
        } else {
            VAR_3 = VAR_0;
        }
        if (VAR_5->state.count && FUNC_2(VAR_5->state.timer) > VAR_3) {
            FUNC_0(VAR_5);
            FUNC_1(&VAR_5->state);
        }
    }
}
