
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,char const) ;
 int FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_0 )
{
  int VAR_1, VAR_2, VAR_3;
  const char* VAR_4 = FUNC_2(VAR_0, 1, &VAR_1);
  const char* VAR_5 = FUNC_2(VAR_0, 2, &VAR_2);
  luaL_Buffer VAR_6;

  if(VAR_2 <= 0)
    return FUNC_3(VAR_0, "invalid argument: mask");

  FUNC_1(VAR_0, &VAR_6);
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    FUNC_0(&VAR_6, VAR_4[VAR_3] ^ VAR_5[VAR_3 % VAR_2]);
  }

  FUNC_4(&VAR_6);
  return 1;
}
