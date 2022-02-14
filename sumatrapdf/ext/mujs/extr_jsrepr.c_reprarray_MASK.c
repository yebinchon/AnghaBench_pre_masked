
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int js_Buffer ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int **,char) ;
 int FUNC_6 (int *,int **,char*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int **) ;

__attribute__((used)) static void FUNC_9(js_State *VAR_0, js_Buffer **VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_0) - 1;
 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  if (FUNC_3(VAR_0, VAR_3)) {
   if (FUNC_7(VAR_0, VAR_3) == FUNC_7(VAR_0, -1)) {
    FUNC_6(VAR_0, VAR_1, "[]");
    return;
   }
  }
 }

 FUNC_5(VAR_0, VAR_1, '[');
 VAR_2 = FUNC_0(VAR_0, -1);
 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  if (VAR_3 > 0)
   FUNC_6(VAR_0, VAR_1, ", ");
  if (FUNC_2(VAR_0, -1, VAR_3)) {
   FUNC_8(VAR_0, VAR_1);
   FUNC_4(VAR_0, 1);
  }
 }
 FUNC_5(VAR_0, VAR_1, ']');
}
