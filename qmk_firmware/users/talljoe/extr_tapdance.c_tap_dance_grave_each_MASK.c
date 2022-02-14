
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int FUNC_0 (char*) ;

void FUNC_1(qk_tap_dance_state_t *VAR_0, void *VAR_1) {
  if(VAR_0->count == 3) {
    FUNC_0("```");
  } else if (VAR_0->count > 3) {
    FUNC_0("`");
  }
}
