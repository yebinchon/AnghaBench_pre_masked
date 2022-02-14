
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1, char **VAR_2, int VAR_3) {
  int VAR_4;
  for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
    if (VAR_2[VAR_4] == ((void*)0)) continue;
    FUNC_3(VAR_2[VAR_4][0] == '-');
    switch (VAR_2[VAR_4][1]) {
      case 'e': {
        const char *VAR_5 = VAR_2[VAR_4] + 2;
        if (*VAR_5 == '\0') VAR_5 = VAR_2[++VAR_4];
        FUNC_3(VAR_5 != ((void*)0));
        if (FUNC_2(VAR_1, VAR_5, "=(command line)") != 0)
          return 1;
        break;
      }
      case 'm': {
        const char *VAR_6 = VAR_2[VAR_4] + 2;
        int VAR_7=0;
        if (*VAR_6 == '\0') VAR_6 = VAR_2[++VAR_4];
        FUNC_3(VAR_6 != ((void*)0));
        VAR_7 = FUNC_0(VAR_6);
        FUNC_4(VAR_1, VAR_0, VAR_7);
        break;
      }
      case 'l': {
        const char *VAR_8 = VAR_2[VAR_4] + 2;
        if (*VAR_8 == '\0') VAR_8 = VAR_2[++VAR_4];
        FUNC_3(VAR_8 != ((void*)0));
        if (FUNC_1(VAR_1, VAR_8))
          return 1;
        break;
      }
      default: break;
    }
  }
  return 0;
}
