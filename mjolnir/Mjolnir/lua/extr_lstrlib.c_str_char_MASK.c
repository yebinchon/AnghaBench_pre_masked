
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef char lua_Integer ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,int,int,char*) ;
 char* FUNC_1 (int *,int *,int) ;
 char FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 char FUNC_5 (char) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0) {
  int VAR_1 = FUNC_4(VAR_0);
  int VAR_2;
  luaL_Buffer VAR_3;
  char *VAR_4 = FUNC_1(VAR_0, &VAR_3, VAR_1);
  for (VAR_2=1; VAR_2<=VAR_1; VAR_2++) {
    lua_Integer VAR_5 = FUNC_2(VAR_0, VAR_2);
    FUNC_0(VAR_0, FUNC_5(VAR_5) == VAR_5, VAR_2, "value out of range");
    VAR_4[VAR_2 - 1] = FUNC_5(VAR_5);
  }
  FUNC_3(&VAR_3, VAR_1);
  return 1;
}
