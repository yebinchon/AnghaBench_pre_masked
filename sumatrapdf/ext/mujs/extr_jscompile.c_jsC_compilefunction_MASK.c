
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int default_strict; } ;
typedef TYPE_1__ js_State ;
typedef int js_Function ;
struct TYPE_7__ {int c; int b; int a; int line; } ;
typedef TYPE_2__ js_Ast ;


 int * FUNC_0 (TYPE_1__*,int ,int ,int ,int ,int ,int ) ;

js_Function *FUNC_1(js_State *VAR_0, js_Ast *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->line, VAR_1->a, VAR_1->b, VAR_1->c, 0, VAR_0->default_strict);
}
