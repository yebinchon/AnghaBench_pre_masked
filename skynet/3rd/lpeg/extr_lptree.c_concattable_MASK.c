
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_1, int VAR_2, int VAR_3) {
  int VAR_4;
  int VAR_5 = FUNC_0(VAR_1, VAR_2);
  int VAR_6 = FUNC_0(VAR_1, VAR_3);
  if (VAR_5 + VAR_6 > VAR_0)
    FUNC_1(VAR_1, "too many Lua values in pattern");
  if (VAR_5 == 0) return 0;
  for (VAR_4 = 1; VAR_4 <= VAR_5; VAR_4++) {
    FUNC_2(VAR_1, VAR_2, VAR_4);
    FUNC_3(VAR_1, VAR_3 - 1, VAR_6 + VAR_4);
  }
  return VAR_6;
}
