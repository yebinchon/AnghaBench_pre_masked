
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *,int) ;

__attribute__((used)) static bool
FUNC_4(lua_State *VAR_0) {
 size_t VAR_1 = FUNC_3(VAR_0, -1);
 if (VAR_1 > 0) {
  FUNC_2(VAR_0, VAR_1);
  if (FUNC_0(VAR_0,-2) == 0) {
   return 1;
  } else {
   FUNC_1(VAR_0,2);
  }
 }
 return 0;
}
