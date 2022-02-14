
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int d ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_1) {
 int VAR_2 = FUNC_3(VAR_1,1);
 luaL_Buffer VAR_3;
 FUNC_2(VAR_1, &VAR_3);
 FUNC_0(&VAR_3, 0);
 FUNC_0(&VAR_3, VAR_0);
 FUNC_1(&VAR_3, (const char *)&VAR_2, sizeof(VAR_2));
 FUNC_4(&VAR_3);

 return 1;
}
