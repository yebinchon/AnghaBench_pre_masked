
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sticky; int layer_toggle; } ;
typedef TYPE_1__ td_ta_state_t ;
typedef int qk_tap_dance_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 (qk_tap_dance_state_t *VAR_2, void *VAR_3) {
  td_ta_state_t *VAR_4 = (td_ta_state_t *) VAR_3;

  if (!VAR_4->layer_toggle)
    FUNC_1 (VAR_1);
  if (!VAR_4->sticky)
    FUNC_0 (VAR_0);
}
