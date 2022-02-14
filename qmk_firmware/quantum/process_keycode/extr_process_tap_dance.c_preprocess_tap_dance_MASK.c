
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_11__ {scalar_t__ keycode; int interrupted; scalar_t__ interrupting_keycode; scalar_t__ count; } ;
struct TYPE_9__ {TYPE_5__ state; } ;
typedef TYPE_2__ qk_tap_dance_action_t ;
struct TYPE_8__ {int pressed; } ;
struct TYPE_10__ {TYPE_1__ event; } ;
typedef TYPE_3__ keyrecord_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_2__* VAR_2 ;

void FUNC_2(uint16_t VAR_3, keyrecord_t *VAR_4) {
    qk_tap_dance_action_t *VAR_5;

    if (!VAR_4->event.pressed) return;

    if (VAR_0 == -1) return;

    for (int VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++) {
        VAR_5 = &VAR_2[VAR_6];
        if (VAR_5->state.count) {
            if (VAR_3 == VAR_5->state.keycode && VAR_3 == VAR_1) continue;
            VAR_5->state.interrupted = 1;
            VAR_5->state.interrupting_keycode = VAR_3;
            FUNC_0(VAR_5);
            FUNC_1(&VAR_5->state);
        }
    }
}
