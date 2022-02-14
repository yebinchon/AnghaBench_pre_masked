
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t sp; int * stack; } ;
typedef TYPE_1__ ps_stack ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(ps_stack *VAR_0, int VAR_1)
{
 if (!FUNC_0(VAR_0, 1) && !FUNC_1(VAR_0, VAR_1 + 1))
 {
  VAR_0->stack[VAR_0->sp] = VAR_0->stack[VAR_0->sp - VAR_1 - 1];
  VAR_0->sp++;
 }
}
