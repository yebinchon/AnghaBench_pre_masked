
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t keycode; int interrupted; int finished; scalar_t__ interrupting_keycode; scalar_t__ count; scalar_t__ pressed; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;
typedef int qk_tap_dance_action_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * VAR_2 ;

void FUNC_1(qk_tap_dance_state_t *VAR_3) {
    qk_tap_dance_action_t *VAR_4;

    if (VAR_3->pressed) return;

    VAR_4 = &VAR_2[VAR_3->keycode - VAR_0];

    FUNC_0(VAR_4);

    VAR_3->count = 0;
    VAR_3->interrupted = 0;
    VAR_3->finished = 0;
    VAR_3->interrupting_keycode = 0;
    VAR_1 = 0;
}
