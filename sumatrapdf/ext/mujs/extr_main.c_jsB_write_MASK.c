
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (char) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(js_State *VAR_1)
{
 int VAR_2, VAR_3 = FUNC_1(VAR_1);
 for (VAR_2 = 1; VAR_2 < VAR_3; ++VAR_2) {
  const char *VAR_4 = FUNC_3(VAR_1, VAR_2);
  if (VAR_2 > 1) FUNC_4(' ');
  FUNC_0(VAR_4, VAR_0);
 }
 FUNC_2(VAR_1);
}
