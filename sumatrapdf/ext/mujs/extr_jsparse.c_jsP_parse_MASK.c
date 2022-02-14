
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ astdepth; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,char const*) ;
 int * FUNC_3 (TYPE_1__*,int ) ;

js_Ast *FUNC_4(js_State *VAR_0, const char *VAR_1, const char *VAR_2)
{
 js_Ast *VAR_3;

 FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0);
 VAR_0->astdepth = 0;
 VAR_3 = FUNC_3(VAR_0, 0);
 if (VAR_3)
  FUNC_0(VAR_3);

 return VAR_3;
}
