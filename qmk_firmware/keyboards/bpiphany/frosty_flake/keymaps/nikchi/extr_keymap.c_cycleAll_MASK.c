
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * VAR_2 ;

void FUNC_5(qk_tap_dance_state_t *VAR_3, void *VAR_4) {
  if(VAR_3->count == 1) {
    FUNC_4();
    FUNC_1(FUNC_0(&VAR_2[VAR_0]));
    FUNC_3();
  }
  else if(VAR_3->count <= 1642) {
    FUNC_2(VAR_1);
    FUNC_4();
    FUNC_1(FUNC_0(&VAR_2[1])+VAR_3->count);
    FUNC_3();
  }
}
