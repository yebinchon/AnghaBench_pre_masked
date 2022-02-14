
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_Value ;
typedef int js_State ;


 int * VAR_0 ;
 int VAR_1 ;

void FUNC_0(js_State *VAR_2, int VAR_3)
{
 int VAR_4;
 js_Value VAR_5 = VAR_0[VAR_1-1];
 for (VAR_4 = 1; VAR_4 < VAR_3; ++VAR_4)
  VAR_0[VAR_1-VAR_4] = VAR_0[VAR_1-VAR_4-1];
 VAR_0[VAR_1-VAR_4] = VAR_5;
}
