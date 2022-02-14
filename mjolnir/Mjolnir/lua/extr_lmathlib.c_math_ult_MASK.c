
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lua_Unsigned ;
typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2 (lua_State *VAR_0) {
  lua_Integer VAR_1 = FUNC_0(VAR_0, 1);
  lua_Integer VAR_2 = FUNC_0(VAR_0, 2);
  FUNC_1(VAR_0, (lua_Unsigned)VAR_1 < (lua_Unsigned)VAR_2);
  return 1;
}
