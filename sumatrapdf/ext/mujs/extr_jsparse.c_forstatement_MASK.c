
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char lookahead; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int *,int *,int *) ;
 int * FUNC_1 (int ,int *,int *,int *,int *) ;
 char VAR_4 ;
 char VAR_5 ;
 int * FUNC_2 (TYPE_1__*,int) ;
 int * FUNC_3 (TYPE_1__*,char) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,char) ;
 int FUNC_7 (char) ;
 int * FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static js_Ast *FUNC_10(js_State *VAR_6, int VAR_7)
{
 js_Ast *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 FUNC_6(VAR_6, '(');
 if (FUNC_4(VAR_6, VAR_5)) {
  VAR_8 = FUNC_9(VAR_6, 1);
  if (FUNC_4(VAR_6, ';')) {
   VAR_9 = FUNC_3(VAR_6, ';');
   VAR_10 = FUNC_3(VAR_6, ')');
   VAR_11 = FUNC_8(VAR_6);
   return FUNC_1(VAR_3, VAR_8, VAR_9, VAR_10, VAR_11);
  }
  if (FUNC_4(VAR_6, VAR_4)) {
   VAR_9 = FUNC_2(VAR_6, 0);
   FUNC_6(VAR_6, ')');
   VAR_10 = FUNC_8(VAR_6);
   return FUNC_0(VAR_2, VAR_8, VAR_9, VAR_10);
  }
  FUNC_5(VAR_6, "unexpected token in for-var-statement: %s", FUNC_7(VAR_6->lookahead));
 }

 if (VAR_6->lookahead != ';')
  VAR_8 = FUNC_2(VAR_6, 1);
 else
  VAR_8 = ((void*)0);
 if (FUNC_4(VAR_6, ';')) {
  VAR_9 = FUNC_3(VAR_6, ';');
  VAR_10 = FUNC_3(VAR_6, ')');
  VAR_11 = FUNC_8(VAR_6);
  return FUNC_1(VAR_0, VAR_8, VAR_9, VAR_10, VAR_11);
 }
 if (FUNC_4(VAR_6, VAR_4)) {
  VAR_9 = FUNC_2(VAR_6, 0);
  FUNC_6(VAR_6, ')');
  VAR_10 = FUNC_8(VAR_6);
  return FUNC_0(VAR_1, VAR_8, VAR_9, VAR_10);
 }
 FUNC_5(VAR_6, "unexpected token in for-statement: %s", FUNC_7(VAR_6->lookahead));
}
