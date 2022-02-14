
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_1) {
  (void)VAR_1;




  FUNC_2("PANIC: unprotected error in call to Lua API (%s)\n",
                   FUNC_1(VAR_1, -1));

  while (1) {}
  return 0;
}
