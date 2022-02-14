
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
  lua_Integer VAR_4;
  if (!FUNC_4(VAR_0, VAR_1)) {
    FUNC_3(VAR_0, VAR_1 - 1);
    return -1;
  }
  else if (FUNC_1(VAR_0, VAR_1))
    VAR_4 = VAR_2;
  else {
    VAR_4 = FUNC_5(VAR_0, VAR_1) - 1;
    if (VAR_4 < VAR_2 || VAR_4 > VAR_3)
      FUNC_0(VAR_0, "invalid position returned by match-time capture");
  }
  FUNC_2(VAR_0, VAR_1);
  return VAR_4;
}
