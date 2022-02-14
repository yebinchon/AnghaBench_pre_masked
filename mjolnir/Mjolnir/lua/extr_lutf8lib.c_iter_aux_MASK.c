
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 char* FUNC_5 (char const*,int*) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0) {
  size_t VAR_1;
  const char *VAR_2 = FUNC_1(VAR_0, 1, &VAR_1);
  lua_Integer VAR_3 = FUNC_4(VAR_0, 2) - 1;
  if (VAR_3 < 0)
    VAR_3 = 0;
  else if (VAR_3 < (lua_Integer)VAR_1) {
    VAR_3++;
    while (FUNC_0(VAR_2 + VAR_3)) VAR_3++;
  }
  if (VAR_3 >= (lua_Integer)VAR_1)
    return 0;
  else {
    int VAR_4;
    const char *VAR_5 = FUNC_5(VAR_2 + VAR_3, &VAR_4);
    if (VAR_5 == ((void*)0) || FUNC_0(VAR_5))
      return FUNC_2(VAR_0, "invalid UTF-8 code");
    FUNC_3(VAR_0, VAR_3 + 1);
    FUNC_3(VAR_0, VAR_4);
    return 2;
  }
}
