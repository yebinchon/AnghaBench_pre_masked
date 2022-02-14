
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(lua_State *VAR_0) {
 const char * VAR_1 = FUNC_1(VAR_0, 1);
 if (VAR_1 && VAR_1[0] == '@') {
  FUNC_0(VAR_0, 1);
  return 1;
 }
 return 0;
}
