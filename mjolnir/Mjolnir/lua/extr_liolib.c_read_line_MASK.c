
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_2, FILE *VAR_3, int VAR_4) {
  luaL_Buffer VAR_5;
  int VAR_6 = '\0';
  FUNC_5(VAR_2, &VAR_5);
  while (VAR_6 != VAR_0 && VAR_6 != '\n') {
    char *VAR_7 = FUNC_6(&VAR_5);
    int VAR_8 = 0;
    FUNC_1(VAR_3);
    while (VAR_8 < VAR_1 && (VAR_6 = FUNC_0(VAR_3)) != VAR_0 && VAR_6 != '\n')
      VAR_7[VAR_8++] = VAR_6;
    FUNC_2(VAR_3);
    FUNC_4(&VAR_5, VAR_8);
  }
  if (!VAR_4 && VAR_6 == '\n')
    FUNC_3(&VAR_5, VAR_6);
  FUNC_7(&VAR_5);

  return (VAR_6 == '\n' || FUNC_8(VAR_2, -1) > 0);
}
