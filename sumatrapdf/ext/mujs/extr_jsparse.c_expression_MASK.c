
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lexline; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char) ;

__attribute__((used)) static js_Ast *FUNC_6(js_State *VAR_1, int VAR_2)
{
 js_Ast *VAR_3 = FUNC_4(VAR_1, VAR_2);
 FUNC_3();
 int VAR_4 = VAR_1->lexline;
 while (FUNC_5(VAR_1, ',')) {
  FUNC_1();
  VAR_3 = FUNC_0(VAR_0, VAR_3, FUNC_4(VAR_1, VAR_2));
  VAR_4 = VAR_1->lexline;
 }
 FUNC_2();
 return VAR_3;
}
