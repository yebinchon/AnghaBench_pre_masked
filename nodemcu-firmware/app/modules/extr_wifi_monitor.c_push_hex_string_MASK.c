
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(lua_State *VAR_0, const uint8 *VAR_1, int VAR_2, char *VAR_3) {
  luaL_Buffer VAR_4;
  FUNC_1(VAR_0, &VAR_4);

  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    if (VAR_5 && VAR_3 && *VAR_3) {
      FUNC_0(&VAR_4, VAR_3);
    }
    char VAR_6[3];

    uint8 VAR_7 = VAR_1[VAR_5];

    VAR_6[0] = "0123456789abcdef"[VAR_7 >> 4];
    VAR_6[1] = "0123456789abcdef"[VAR_7 & 0xf];
    VAR_6[2] = 0;
    FUNC_0(&VAR_4, VAR_6);
  }

  FUNC_2(&VAR_4);
}
