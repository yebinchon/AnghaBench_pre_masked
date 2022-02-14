
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_1, int VAR_2) {
  if (FUNC_2(VAR_1, VAR_2))
    return 0;
  else {
    int VAR_3;
    FUNC_1(VAR_1, -1);
    VAR_3 = FUNC_5(VAR_1, -1);
    if (VAR_3 >= VAR_0)
      FUNC_0(VAR_1, "too many Lua values in pattern");
    FUNC_4(VAR_1, VAR_2);
    FUNC_6(VAR_1, -2, ++VAR_3);
    FUNC_3(VAR_1, 1);
    return VAR_3;
  }
}
