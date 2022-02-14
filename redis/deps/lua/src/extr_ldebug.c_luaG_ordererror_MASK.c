
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TValue ;


 int FUNC_0 (int *,char*,char const*,...) ;
 char** VAR_0 ;
 size_t FUNC_1 (int const*) ;

int FUNC_2 (lua_State *VAR_1, const TValue *VAR_2, const TValue *VAR_3) {
  const char *VAR_4 = VAR_0[FUNC_1(VAR_2)];
  const char *VAR_5 = VAR_0[FUNC_1(VAR_3)];
  if (VAR_4[2] == VAR_5[2])
    FUNC_0(VAR_1, "attempt to compare two %s values", VAR_4);
  else
    FUNC_0(VAR_1, "attempt to compare %s with %s", VAR_4, VAR_5);
  return 0;
}
