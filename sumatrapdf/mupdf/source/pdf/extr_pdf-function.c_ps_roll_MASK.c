
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int psobj ;
struct TYPE_4__ {int sp; int * stack; } ;
typedef TYPE_1__ ps_stack ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(ps_stack *VAR_0, int VAR_1, int VAR_2)
{
 psobj VAR_3;
 int VAR_4;

 if (FUNC_1(VAR_0, VAR_1) || VAR_2 == 0 || VAR_1 == 0)
  return;

 if (VAR_2 >= 0)
 {
  VAR_2 %= VAR_1;
 }
 else
 {
  VAR_2 = -VAR_2 % VAR_1;
  if (VAR_2 != 0)
   VAR_2 = VAR_1 - VAR_2;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  VAR_3 = VAR_0->stack[VAR_0->sp - 1];
  FUNC_0(VAR_0->stack + VAR_0->sp - VAR_1 + 1, VAR_0->stack + VAR_0->sp - VAR_1, VAR_1 * sizeof(psobj));
  VAR_0->stack[VAR_0->sp - VAR_1] = VAR_3;
 }
}
