
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_draw_state ;
struct TYPE_4__ {int top; int stack_cap; int * stack; } ;
typedef TYPE_1__ fz_draw_device ;
typedef int fz_context ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static fz_draw_state *FUNC_3(fz_context *VAR_0, fz_draw_device *VAR_1, const char *VAR_2)
{
 fz_draw_state *VAR_3;
 if (VAR_1->top == VAR_1->stack_cap-1)
  FUNC_1(VAR_0, VAR_1);
 VAR_3 = &VAR_1->stack[VAR_1->top];
 VAR_1->top++;
 FUNC_2(&VAR_3[1], VAR_3, sizeof(*VAR_3));
 FUNC_0(VAR_2);
 return VAR_3;
}
