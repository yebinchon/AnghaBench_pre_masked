
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(js_State *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1 - VAR_3 - 2;
 if (FUNC_2(VAR_2)) {

  VAR_0[VAR_4] = VAR_0[VAR_1-1];
  VAR_1 = VAR_4 + 1;
  return 1;
 }
 FUNC_0(VAR_2, VAR_3);
 FUNC_1(VAR_2);
 return 0;
}
