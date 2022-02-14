
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int inc ;
typedef int i ;
typedef int d ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_1) {
 int VAR_2 = FUNC_3(VAR_1,1);
 luaL_Buffer VAR_3;
 FUNC_2(VAR_1, &VAR_3);
 FUNC_0(&VAR_3, 0);
 FUNC_0(&VAR_3, VAR_0);
 if (FUNC_5(VAR_1,2)) {
  static uint32_t VAR_4 = 0;
  FUNC_1(&VAR_3, (const char *)&VAR_4, sizeof(VAR_4));
  ++VAR_4;
 } else {
  uint32_t VAR_5 = (uint32_t)FUNC_6(VAR_1,2);
  FUNC_1(&VAR_3, (const char *)&VAR_5, sizeof(VAR_5));
 }
 FUNC_1(&VAR_3, (const char *)&VAR_2, sizeof(VAR_2));
 FUNC_4(&VAR_3);

 return 1;
}
