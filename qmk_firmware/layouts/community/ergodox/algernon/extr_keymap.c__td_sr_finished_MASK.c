
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (qk_tap_dance_state_t *VAR_1, void *VAR_2) {
  if (VAR_1->count == 1) {
    FUNC_0 (VAR_0);
  }
  if (VAR_1->count >= 4) {
    FUNC_3("CMD:reflash\n");
    FUNC_4 (1000);
    FUNC_1 ();
    FUNC_2 (VAR_1);
  }
}
