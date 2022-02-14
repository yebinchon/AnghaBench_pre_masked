
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int lua_State ;
typedef int lua_Number ;
typedef int StkId ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ) ;

int FUNC_7 (lua_State *VAR_1, StkId VAR_2) {
  if (!FUNC_6(VAR_2))
    return 0;
  else {
    char VAR_3[VAR_0];
    ptrdiff_t VAR_4 = FUNC_4(VAR_1, VAR_2);
    lua_Number VAR_5 = FUNC_2(VAR_2);
    FUNC_1(VAR_3, VAR_5);
    FUNC_5(VAR_1, FUNC_3(VAR_1, VAR_4), FUNC_0(VAR_1, VAR_3));
    return 1;
  }
}
