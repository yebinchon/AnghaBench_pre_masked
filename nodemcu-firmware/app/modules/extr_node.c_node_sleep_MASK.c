
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2( lua_State* VAR_0 )
{
  FUNC_0("\n The options \"TIMER_SUSPEND_ENABLE\" and \"PMSLEEP_ENABLE\" in \"app/include/user_config.h\" were disabled during FW build!\n");
  return FUNC_1(VAR_0, "node.sleep() is unavailable");
}
