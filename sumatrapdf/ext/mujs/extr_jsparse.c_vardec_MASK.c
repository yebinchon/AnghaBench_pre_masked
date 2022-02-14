
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lexline; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int * FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char) ;

__attribute__((used)) static js_Ast *FUNC_5(js_State *VAR_1, int VAR_2)
{
 js_Ast *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = VAR_1->lexline;
 if (FUNC_4(VAR_1, '='))
  return FUNC_1(VAR_0, VAR_3, FUNC_2(VAR_1, VAR_2));
 return FUNC_0(VAR_0, VAR_3);
}
