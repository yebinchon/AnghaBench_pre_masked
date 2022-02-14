
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size_ci; int stack; int stacksize; int top; int stack_last; int base; TYPE_1__* ci; TYPE_1__* base_ci; TYPE_1__* end_ci; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_6__ {int func; int base; int top; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(lua_State*VAR_2,lua_State*VAR_3){
VAR_2->base_ci=FUNC_0(VAR_3,8,VAR_0);
VAR_2->ci=VAR_2->base_ci;
VAR_2->size_ci=8;
VAR_2->end_ci=VAR_2->base_ci+VAR_2->size_ci-1;
VAR_2->stack=FUNC_0(VAR_3,(2*20)+5,VAR_1);
VAR_2->stacksize=(2*20)+5;
VAR_2->top=VAR_2->stack;
VAR_2->stack_last=VAR_2->stack+(VAR_2->stacksize-5)-1;
VAR_2->ci->func=VAR_2->top;
FUNC_1(VAR_2->top++);
VAR_2->base=VAR_2->ci->base=VAR_2->top;
VAR_2->ci->top=VAR_2->top+20;
}
