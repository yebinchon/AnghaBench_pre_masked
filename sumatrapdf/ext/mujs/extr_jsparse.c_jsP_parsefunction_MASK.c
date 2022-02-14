
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ astdepth; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int * FUNC_0 (int ,int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,char const*) ;
 int FUNC_3 (TYPE_1__*,char const*,char const*) ;
 int * FUNC_4 (TYPE_1__*) ;

js_Ast *FUNC_5(js_State *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 js_Ast *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 if (VAR_3) {
  FUNC_3(VAR_1, VAR_2, VAR_3);
  FUNC_1(VAR_1);
  VAR_1->astdepth = 0;
  VAR_5 = FUNC_4(VAR_1);
 }
 return FUNC_0(VAR_0, ((void*)0), VAR_5, FUNC_2(VAR_1, VAR_2, VAR_4));
}
