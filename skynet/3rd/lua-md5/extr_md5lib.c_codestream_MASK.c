
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_1, const char *VAR_2, size_t VAR_3,
                                      char *VAR_4, int VAR_5) {
  luaL_Buffer VAR_6;
  FUNC_1(VAR_1, &VAR_6);
  while (VAR_3 > 0) {
    char VAR_7[VAR_0];
    int VAR_8;
    FUNC_3(VAR_4, VAR_5, VAR_7);
    for (VAR_8=0; VAR_8<VAR_0 && VAR_3 > 0; VAR_8++, VAR_3--)
      VAR_7[VAR_8] ^= *VAR_2++;
    FUNC_0(&VAR_6, VAR_7, VAR_8);
    FUNC_4(VAR_4, VAR_7, VAR_8);
  }
  FUNC_2(&VAR_6);
}
