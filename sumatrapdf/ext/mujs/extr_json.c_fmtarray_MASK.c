
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int js_Buffer ;


 int FUNC_0 (int *,int **,char const*,int) ;
 int FUNC_1 (int *,int **,int ,char const*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,int **,char) ;
 int FUNC_7 (int *,int **,char*) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static void FUNC_10(js_State *VAR_0, js_Buffer **VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 char VAR_6[32];

 VAR_4 = FUNC_3(VAR_0) - 1;
 for (VAR_5 = 4; VAR_5 < VAR_4; ++VAR_5)
  if (FUNC_4(VAR_0, VAR_5))
   if (FUNC_8(VAR_0, VAR_5) == FUNC_8(VAR_0, -1))
    FUNC_9(VAR_0, "cyclic object value");

 FUNC_6(VAR_0, VAR_1, '[');
 VAR_4 = FUNC_2(VAR_0, -1);
 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  if (VAR_5) FUNC_6(VAR_0, VAR_1, ',');
  if (VAR_2) FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3 + 1);
  if (!FUNC_1(VAR_0, VAR_1, FUNC_5(VAR_6, VAR_5), VAR_2, VAR_3 + 1))
   FUNC_7(VAR_0, VAR_1, "null");
 }
 if (VAR_2 && VAR_4) FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_6(VAR_0, VAR_1, ']');
}
