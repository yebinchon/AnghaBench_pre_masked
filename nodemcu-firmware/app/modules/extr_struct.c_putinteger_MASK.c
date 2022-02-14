
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Number ;
typedef int luaL_Buffer ;
typedef int Uinttype ;
typedef scalar_t__ Inttype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2 (lua_State *VAR_2, luaL_Buffer *VAR_3, int VAR_4, int VAR_5,
                        int VAR_6) {
  lua_Number VAR_7 = FUNC_1(VAR_2, VAR_4);
  Uinttype VAR_8;
  char VAR_9[VAR_1];
  if (VAR_7 < 0)
    VAR_8 = (Uinttype)(Inttype)VAR_7;
  else
    VAR_8 = (Uinttype)VAR_7;
  if (VAR_5 == VAR_0) {
    int VAR_10;
    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
      VAR_9[VAR_10] = (VAR_8 & 0xff);
      VAR_8 >>= 8;
    }
  }
  else {
    int VAR_11;
    for (VAR_11 = VAR_6 - 1; VAR_11 >= 0; VAR_11--) {
      VAR_9[VAR_11] = (VAR_8 & 0xff);
      VAR_8 >>= 8;
    }
  }
  FUNC_0(VAR_3, VAR_9, VAR_6);
}
