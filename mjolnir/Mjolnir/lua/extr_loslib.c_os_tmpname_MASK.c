
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_1) {
  char VAR_2[VAR_0];
  int VAR_3;
  FUNC_2(VAR_2, VAR_3);
  if (VAR_3)
    return FUNC_0(VAR_1, "unable to generate a unique filename");
  FUNC_1(VAR_1, VAR_2);
  return 1;
}
