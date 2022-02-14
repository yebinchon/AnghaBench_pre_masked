
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stack_last; int stack; int stacksize; int size_ci; scalar_t__ base_ci; scalar_t__ ci; } ;
typedef TYPE_1__ lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_2) {
  FUNC_2(VAR_2->stack_last - VAR_2->stack == VAR_2->stacksize - VAR_0 - 1);
  if (VAR_2->size_ci > VAR_1) {
    int VAR_3 = FUNC_0(VAR_2->ci - VAR_2->base_ci);
    if (VAR_3 + 1 < VAR_1)
      FUNC_1(VAR_2, VAR_1);
  }
}
