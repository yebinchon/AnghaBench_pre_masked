
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int lua_State ;
typedef int hostname ;


 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 pid_t VAR_1 = FUNC_1();
 char VAR_2[256];
 if (FUNC_0(VAR_2, sizeof(VAR_2))==0) {
  FUNC_2(VAR_0, "%s%d", VAR_2, (int)VAR_1);
 } else {
  FUNC_2(VAR_0, "noname%d", (int)VAR_1);
 }
 return 1;
}
