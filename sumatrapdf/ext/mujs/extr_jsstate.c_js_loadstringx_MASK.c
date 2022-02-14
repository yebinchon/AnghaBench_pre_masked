
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * GE; int * E; scalar_t__ strict; scalar_t__ default_strict; } ;
typedef TYPE_1__ js_State ;
typedef int js_Function ;
typedef int js_Ast ;


 int * FUNC_0 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,char const*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(js_State *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
 js_Ast *VAR_4;
 js_Function *VAR_5;

 if (FUNC_6(VAR_0)) {
  FUNC_1(VAR_0);
  FUNC_5(VAR_0);
 }

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_3 ? VAR_0->strict : VAR_0->default_strict);
 FUNC_1(VAR_0);
 FUNC_4(VAR_0, VAR_5, VAR_3 ? (VAR_0->strict ? VAR_0->E : ((void*)0)) : VAR_0->GE);

 FUNC_3(VAR_0);
}
