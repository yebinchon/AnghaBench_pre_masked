
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 char* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(js_State *VAR_0)
{
 const char *VAR_1, *VAR_2;
 VAR_1 = FUNC_0(VAR_0, 0);
 while (FUNC_1(*VAR_1))
  ++VAR_1;
 VAR_2 = VAR_1 + FUNC_3(VAR_1);
 while (VAR_2 > VAR_1 && FUNC_1(VAR_2[-1]))
  --VAR_2;
 FUNC_2(VAR_0, VAR_1, VAR_2 - VAR_1);
}
