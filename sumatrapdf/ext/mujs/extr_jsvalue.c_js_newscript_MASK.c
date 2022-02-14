
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_6__ {int * scope; int * function; } ;
struct TYPE_7__ {TYPE_1__ f; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
typedef TYPE_3__ js_Object ;
typedef int js_Function ;
typedef int js_Environment ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,TYPE_3__*) ;

void FUNC_2(js_State *VAR_1, js_Function *VAR_2, js_Environment *VAR_3)
{
 js_Object *VAR_4 = FUNC_0(VAR_1, VAR_0, ((void*)0));
 VAR_4->u.f.function = VAR_2;
 VAR_4->u.f.scope = VAR_3;
 FUNC_1(VAR_1, VAR_4);
}
