
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lexline; } ;
typedef TYPE_1__ js_State ;
typedef TYPE_1__* js_Ast ;


 int VAR_0 ;
 TYPE_1__** FUNC_0 (int ,TYPE_1__**,TYPE_1__**) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*,char) ;

__attribute__((used)) static js_Ast *FUNC_5(js_State *VAR_1, int VAR_2)
{
 js_Ast *VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_3();
 int VAR_4 = VAR_1->lexline;
 while (FUNC_4(VAR_1, '^')) {
  FUNC_1();
  VAR_3 = FUNC_0(VAR_0, VAR_3, FUNC_0(VAR_1, VAR_2));
  VAR_4 = VAR_1->lexline;
 }
 FUNC_2();
 return VAR_3;
}
