
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(lua_State* VAR_0) {

  luaL_Buffer VAR_1;
  FUNC_2(VAR_0, &VAR_1);

  FUNC_0(&VAR_1, '[');
  FUNC_1(&VAR_1, "effects");
  FUNC_0(&VAR_1, ']');
  FUNC_3(&VAR_1);

  return 1;
}
