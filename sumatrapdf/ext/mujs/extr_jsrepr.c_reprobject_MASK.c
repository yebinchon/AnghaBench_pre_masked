
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int js_Buffer ;


 int FUNC_0 (int *,int,char const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int **,char) ;
 int FUNC_7 (int *,int **,char*) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int **,char const*) ;
 int FUNC_10 (int *,int **) ;

__attribute__((used)) static void FUNC_11(js_State *VAR_0, js_Buffer **VAR_1)
{
 const char *VAR_2;
 int VAR_3, VAR_4;

 VAR_4 = FUNC_1(VAR_0) - 1;
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
  if (FUNC_2(VAR_0, VAR_3)) {
   if (FUNC_8(VAR_0, VAR_3) == FUNC_8(VAR_0, -1)) {
    FUNC_7(VAR_0, VAR_1, "{}");
    return;
   }
  }
 }

 VAR_4 = 0;
 FUNC_6(VAR_0, VAR_1, '{');
 FUNC_5(VAR_0, -1, 1);
 while ((VAR_2 = FUNC_3(VAR_0, -1))) {
  if (VAR_4++ > 0)
   FUNC_7(VAR_0, VAR_1, ", ");
  FUNC_9(VAR_0, VAR_1, VAR_2);
  FUNC_7(VAR_0, VAR_1, ": ");
  FUNC_0(VAR_0, -2, VAR_2);
  FUNC_10(VAR_0, VAR_1);
  FUNC_4(VAR_0, 1);
 }
 FUNC_4(VAR_0, 1);
 FUNC_6(VAR_0, VAR_1, '}');
}
