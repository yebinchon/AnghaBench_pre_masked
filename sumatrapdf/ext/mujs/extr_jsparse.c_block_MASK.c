
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lexline; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int * FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static js_Ast *FUNC_3(js_State *VAR_1)
{
 js_Ast *VAR_2;
 int VAR_3 = VAR_1->lexline;
 FUNC_1(VAR_1, '{');
 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(VAR_1, '}');
 return FUNC_0(VAR_0, VAR_2);
}
