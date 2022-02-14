
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sticky; int layer_toggle; } ;
typedef TYPE_1__ td_ta_state_t ;
struct TYPE_5__ {int count; int pressed; } ;
typedef TYPE_2__ qk_tap_dance_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3 (qk_tap_dance_state_t *VAR_2, void *VAR_3) {
  td_ta_state_t *VAR_4 = (td_ta_state_t *) VAR_3;

  if (VAR_4->sticky) {
    VAR_4->sticky = 0;
    VAR_4->layer_toggle = 0;
    FUNC_0 (VAR_0);
    return;
  }

  if (VAR_2->count == 1 && !VAR_2->pressed) {
    FUNC_2 (VAR_1);
    VAR_4->sticky = 0;
    VAR_4->layer_toggle = 0;
  } else {
    VAR_4->layer_toggle = 1;
    FUNC_1 (VAR_0);
    VAR_4->sticky = (VAR_2->count == 2);
  }
}
