
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int FILE ;


 size_t FUNC_0 (char*,int,size_t,int *) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_0, FILE *VAR_1, size_t VAR_2) {
  size_t VAR_3;
  char *VAR_4;
  luaL_Buffer VAR_5;
  FUNC_2(VAR_0, &VAR_5);
  VAR_4 = FUNC_3(&VAR_5, VAR_2);
  VAR_3 = FUNC_0(VAR_4, sizeof(char), VAR_2, VAR_1);
  FUNC_1(&VAR_5, VAR_3);
  FUNC_4(&VAR_5);
  return (VAR_3 > 0);
}
