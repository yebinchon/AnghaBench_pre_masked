
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int,int) ;
 char* FUNC_5 (int *,int,char*,size_t*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_1) {
  luaL_Buffer VAR_2;
  lua_Integer VAR_3 = FUNC_1(VAR_1, 1, VAR_0);
  size_t VAR_4;
  const char *VAR_5 = FUNC_5(VAR_1, 2, "", &VAR_4);
  lua_Integer VAR_6 = FUNC_4(VAR_1, 3, 1);
  VAR_3 = FUNC_4(VAR_1, 4, VAR_3);
  FUNC_3(VAR_1, &VAR_2);
  for (; VAR_6 < VAR_3; VAR_6++) {
    FUNC_0(VAR_1, &VAR_2, VAR_6);
    FUNC_2(&VAR_2, VAR_5, VAR_4);
  }
  if (VAR_6 == VAR_3)
    FUNC_0(VAR_1, &VAR_2, VAR_6);
  FUNC_6(&VAR_2);
  return 1;
}
