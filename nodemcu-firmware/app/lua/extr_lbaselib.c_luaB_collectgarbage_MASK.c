
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;




 int const VAR_0 ;







 int FUNC_0 (int *,int,char*,char const* const*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int const,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1) {
  static const char *const VAR_2[] = {"stop", "restart", "collect",
    "count", "step", "setpause", "setstepmul","setmemlimit","getmemlimit", ((void*)0)};
  static const int VAR_3[] = {128, 133, 136,
    135, 129, 131, 130,
  132,134};
  int VAR_4 = FUNC_0(VAR_1, 1, "collect", VAR_2);
  int VAR_5 = FUNC_1(VAR_1, 2, 0);
  int VAR_6 = FUNC_2(VAR_1, VAR_3[VAR_4], VAR_5);
  switch (VAR_3[VAR_4]) {
    case 135: {
      int VAR_7 = FUNC_2(VAR_1, VAR_0, 0);
      FUNC_4(VAR_1, VAR_6 + ((lua_Number)VAR_7/1024));
      return 1;
    }
    case 129: {
      FUNC_3(VAR_1, VAR_6);
      return 1;
    }
    default: {
      FUNC_4(VAR_1, VAR_6);
      return 1;
    }
  }
}
