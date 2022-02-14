
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TValue ;


 int FUNC_0 (int *,int const*,char*) ;
 int * FUNC_1 (int const*,int *) ;

void FUNC_2 (lua_State *VAR_0, const TValue *VAR_1, const TValue *VAR_2) {
  TValue VAR_3;
  if (FUNC_1(VAR_1, &VAR_3) == ((void*)0))
    VAR_2 = VAR_1;
  FUNC_0(VAR_0, VAR_2, "perform arithmetic on");
}
