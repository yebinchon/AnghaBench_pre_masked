
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size_ci; int stacksize; scalar_t__ stack; scalar_t__ base_ci; scalar_t__ ci; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ StkId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4 (lua_State *VAR_4, StkId VAR_5) {
  int VAR_6 = FUNC_0(VAR_4->ci - VAR_4->base_ci);
  int VAR_7 = FUNC_0(VAR_5 - VAR_4->stack);
  if (VAR_4->size_ci > VAR_3)
    return;
  if (4*VAR_6 < VAR_4->size_ci && 2*VAR_0 < VAR_4->size_ci)
    FUNC_2(VAR_4, VAR_4->size_ci/2);
  FUNC_1(FUNC_2(VAR_4, VAR_6 + 1));
  if (4*VAR_7 < VAR_4->stacksize &&
      2*(VAR_1+VAR_2) < VAR_4->stacksize)
    FUNC_3(VAR_4, VAR_4->stacksize/2);
  FUNC_1(FUNC_3(VAR_4, VAR_7));
}
