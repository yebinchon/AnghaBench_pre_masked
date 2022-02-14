
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3 (qk_tap_dance_state_t *VAR_1, void *VAR_2) {
  if (VAR_1->count == 1) {
    FUNC_0("[]"); FUNC_1(VAR_0); FUNC_2(VAR_0);
  } else if (VAR_1->count == 2) {
    FUNC_0("[");
  } else if (VAR_1->count == 3) {
    FUNC_0("]");
  }
}
