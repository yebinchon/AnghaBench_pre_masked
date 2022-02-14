
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; scalar_t__ keycode; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (qk_tap_dance_state_t *VAR_5, void *VAR_6) {
  if (VAR_5->count == 1) {
    if (VAR_5->keycode == FUNC_0(VAR_0))
      FUNC_1 (VAR_1);
    else
      FUNC_1 (VAR_3);
  } else if (VAR_5->count == 2) {
    if (VAR_5->keycode == FUNC_0(VAR_0))
      FUNC_1 (VAR_2);
    else
      FUNC_1 (VAR_4);
  }
}
