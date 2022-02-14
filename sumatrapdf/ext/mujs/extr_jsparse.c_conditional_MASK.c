
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lexline; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char) ;
 int FUNC_5 (TYPE_1__*,char) ;
 int * FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static js_Ast *FUNC_7(js_State *VAR_1, int VAR_2)
{
 js_Ast *VAR_3 = FUNC_6(VAR_1, VAR_2);
 int VAR_4 = VAR_1->lexline;
 if (FUNC_4(VAR_1, '?')) {
  js_Ast *VAR_5, *VAR_6;
  FUNC_2();
  VAR_5 = FUNC_3(VAR_1, 0);
  FUNC_5(VAR_1, ':');
  VAR_6 = FUNC_3(VAR_1, VAR_2);
  FUNC_0();
  return FUNC_1(VAR_0, VAR_3, VAR_5, VAR_6);
 }
 return VAR_3;
}
