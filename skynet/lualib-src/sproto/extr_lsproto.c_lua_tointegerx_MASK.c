
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int int64_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int64_t FUNC_2(lua_State *VAR_0, int VAR_1, int *VAR_2) {
 if (FUNC_0(VAR_0, VAR_1)) {
  if (VAR_2) *VAR_2 = 1;
  return (int64_t)FUNC_1(VAR_0, VAR_1);
 }
 else {
  if (VAR_2) *VAR_2 = 0;
  return 0;
 }
}
