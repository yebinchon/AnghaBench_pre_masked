
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int js_Buffer ;


 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 char* FUNC_2 (int *,char*,double) ;
 int FUNC_3 (int *,int **,char*) ;

__attribute__((used)) static void FUNC_4(js_State *VAR_0, js_Buffer **VAR_1, double VAR_2)
{
 if (FUNC_1(VAR_2)) FUNC_3(VAR_0, VAR_1, "null");
 else if (FUNC_0(VAR_2)) FUNC_3(VAR_0, VAR_1, "null");
 else if (VAR_2 == 0) FUNC_3(VAR_0, VAR_1, "0");
 else {
  char VAR_3[40];
  FUNC_3(VAR_0, VAR_1, FUNC_2(VAR_0, VAR_3, VAR_2));
 }
}
