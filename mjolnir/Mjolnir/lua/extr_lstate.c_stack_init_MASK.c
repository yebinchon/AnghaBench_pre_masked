
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int func; int top; scalar_t__ callstatus; int * previous; int next; } ;
struct TYPE_6__ {int stack; int stacksize; int top; int stack_last; TYPE_2__* ci; TYPE_2__ base_ci; } ;
typedef TYPE_1__ lua_State ;
typedef TYPE_2__ CallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2 (lua_State *VAR_4, lua_State *VAR_5) {
  int VAR_6; CallInfo *VAR_7;

  VAR_4->stack = FUNC_0(VAR_5, VAR_0, VAR_3);
  VAR_4->stacksize = VAR_0;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    FUNC_1(VAR_4->stack + VAR_6);
  VAR_4->top = VAR_4->stack;
  VAR_4->stack_last = VAR_4->stack + VAR_4->stacksize - VAR_1;

  VAR_7 = &VAR_4->base_ci;
  VAR_7->next = *(VAR_7->previous = ((void*)0));
  VAR_7->callstatus = 0;
  VAR_7->func = VAR_4->top;
  FUNC_1(VAR_4->top++);
  VAR_7->top = VAR_4->top + VAR_2;
  VAR_4->ci = VAR_7;
}
