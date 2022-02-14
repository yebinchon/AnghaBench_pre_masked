
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;

void FUNC_1(js_State *VAR_3, int VAR_4)
{
 VAR_4 = VAR_4 < 0 ? VAR_2 + VAR_4 : VAR_0 + VAR_4;
 if (VAR_4 < VAR_0 || VAR_4 >= VAR_2)
  FUNC_0(VAR_3, "stack error!");
 for (;VAR_4 < VAR_2 - 1; ++VAR_4)
  VAR_1[VAR_4] = VAR_1[VAR_4+1];
 --VAR_2;
}
