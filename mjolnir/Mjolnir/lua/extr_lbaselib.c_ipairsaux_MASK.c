
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_1) {
  lua_Integer VAR_2 = FUNC_0(VAR_1, 2) + 1;
  FUNC_2(VAR_1, VAR_2);
  return (FUNC_1(VAR_1, 1, VAR_2) == VAR_0) ? 1 : 2;
}
