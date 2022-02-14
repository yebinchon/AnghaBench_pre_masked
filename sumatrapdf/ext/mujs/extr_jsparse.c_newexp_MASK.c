
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lexline; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int *,int *) ;
 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int * FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char) ;
 int FUNC_5 (TYPE_1__*,char) ;
 int * FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static js_Ast *FUNC_8(js_State *VAR_3)
{
 js_Ast *VAR_4, *VAR_5;
 int VAR_6 = VAR_3->lexline;

 if (FUNC_4(VAR_3, VAR_2)) {
  VAR_4 = FUNC_6(VAR_3);
  if (FUNC_4(VAR_3, '(')) {
   VAR_5 = FUNC_2(VAR_3);
   FUNC_5(VAR_3, ')');
   return FUNC_1(VAR_0, VAR_4, VAR_5);
  }
  return FUNC_0(VAR_0, VAR_4);
 }

 if (FUNC_4(VAR_3, VAR_1))
  return FUNC_3(VAR_3, VAR_6);

 return FUNC_7(VAR_3);
}
