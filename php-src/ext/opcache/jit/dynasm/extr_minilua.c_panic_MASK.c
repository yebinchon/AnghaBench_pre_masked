
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(lua_State*VAR_1){
(void)VAR_1;
FUNC_0(VAR_0,"PANIC: unprotected error in call to Lua API (%s)\n",
FUNC_1(VAR_1,-1));
return 0;
}
