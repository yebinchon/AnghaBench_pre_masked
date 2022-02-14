
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int js_Buffer ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int *,int **,char const*) ;
 int FUNC_3 (int *,int **,char const*) ;

__attribute__((used)) static void FUNC_4(js_State *VAR_0, js_Buffer **VAR_1, const char *VAR_2)
{
 const char *VAR_3 = VAR_2;
 if (FUNC_1(*VAR_3))
  while (FUNC_1(*VAR_3))
   ++VAR_3;
 else if (FUNC_0(*VAR_3) || *VAR_3 == '_')
  while (FUNC_1(*VAR_3) || FUNC_0(*VAR_3) || *VAR_3 == '_')
   ++VAR_3;
 if (VAR_3 > VAR_2 && *VAR_3 == 0)
  FUNC_2(VAR_0, VAR_1, VAR_2);
 else
  FUNC_3(VAR_0, VAR_1, VAR_2);
}
