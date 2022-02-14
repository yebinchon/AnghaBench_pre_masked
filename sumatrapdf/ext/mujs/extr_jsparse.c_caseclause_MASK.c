
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int lexline; int lookahead; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*,char) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static js_Ast *FUNC_8(js_State *VAR_4)
{
 js_Ast *VAR_5, *VAR_6;
 int VAR_7 = VAR_4->lexline;

 if (FUNC_3(VAR_4, VAR_2)) {
  VAR_5 = FUNC_2(VAR_4, 0);
  FUNC_5(VAR_4, ':');
  VAR_6 = FUNC_7(VAR_4);
  return FUNC_1(VAR_0, VAR_5, VAR_6);
 }

 if (FUNC_3(VAR_4, VAR_3)) {
  FUNC_5(VAR_4, ':');
  VAR_5 = FUNC_7(VAR_4);
  return FUNC_0(VAR_1, VAR_5);
 }

 FUNC_4(VAR_4, "unexpected token in switch: %s (expected 'case' or 'default')", FUNC_6(VAR_4->lookahead));
}
