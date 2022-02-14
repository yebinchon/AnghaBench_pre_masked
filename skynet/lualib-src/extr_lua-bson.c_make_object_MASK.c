
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(lua_State *VAR_0, int VAR_1, const void * VAR_2, size_t VAR_3) {
 luaL_Buffer VAR_4;
 FUNC_2(VAR_0, &VAR_4);
 FUNC_0(&VAR_4, 0);
 FUNC_0(&VAR_4, VAR_1);
 FUNC_1(&VAR_4, VAR_2, VAR_3);
 FUNC_3(&VAR_4);
}
