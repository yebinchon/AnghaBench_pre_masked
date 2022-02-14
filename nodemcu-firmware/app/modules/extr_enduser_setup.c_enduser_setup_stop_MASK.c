
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int callbackDone; scalar_t__ success; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(lua_State* VAR_3)
{
  FUNC_0("enduser_setup_stop");

  if (!VAR_1)
  {
    FUNC_1();
  }
  if (VAR_2 != ((void*)0) && VAR_2->success && !VAR_2->callbackDone)
  {
    FUNC_7(VAR_0 | FUNC_6());
    FUNC_8();
    FUNC_2();
  }
  FUNC_3();
  FUNC_5();
  FUNC_4();

  return 0;
}
