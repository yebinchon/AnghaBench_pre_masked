
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;

lua_Integer FUNC_2 (lua_State *VAR_0, lua_Integer VAR_1, lua_Integer VAR_2) {
  if (FUNC_0(VAR_2) + 1u <= 1u) {
    if (VAR_2 == 0)
      FUNC_1(VAR_0, "attempt to perform 'n%%0'");
    return 0;
  }
  else {
    lua_Integer VAR_3 = VAR_1 % VAR_2;
    if (VAR_3 != 0 && (VAR_1 ^ VAR_2) < 0)
      VAR_3 += VAR_2;
    return VAR_3;
  }
}
