
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_draw_state ;
struct TYPE_3__ {int top; int * stack; } ;
typedef TYPE_1__ fz_draw_device ;
typedef int fz_context ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static fz_draw_state *FUNC_1(fz_context *VAR_0, fz_draw_device *VAR_1, const char *VAR_2)
{
 fz_draw_state *VAR_3 = &VAR_1->stack[VAR_1->top-1];
 FUNC_0(VAR_2);
 return VAR_3;
}
