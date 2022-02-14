
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ top; scalar_t__ stack_last; scalar_t__ stack; TYPE_2__* ci; TYPE_2__* base_ci; } ;
typedef TYPE_1__ lua_State ;
typedef int global_State ;
struct TYPE_7__ {scalar_t__ top; } ;
typedef scalar_t__ StkId ;
typedef TYPE_2__ CallInfo ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5 (global_State *VAR_0, lua_State *VAR_1) {
  StkId VAR_2, VAR_3;
  CallInfo *VAR_4;
  FUNC_3(VAR_0, FUNC_1(VAR_1));
  VAR_3 = VAR_1->top;
  for (VAR_4 = VAR_1->base_ci; VAR_4 <= VAR_1->ci; VAR_4++) {
    FUNC_2(VAR_4->top <= VAR_1->stack_last);
    if (VAR_3 < VAR_4->top) VAR_3 = VAR_4->top;
  }
  for (VAR_2 = VAR_1->stack; VAR_2 < VAR_1->top; VAR_2++)
    FUNC_3(VAR_0, VAR_2);
  for (; VAR_2 <= VAR_3; VAR_2++)
    FUNC_4(VAR_2);
  FUNC_0(VAR_1, VAR_3);
}
