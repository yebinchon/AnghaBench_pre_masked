
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int softAPchannel; void* lua_dbg_cb_ref; void* lua_err_cb_ref; void* lua_connected_cb_ref; scalar_t__ connecting; scalar_t__ lastStationStatus; scalar_t__ callbackDone; scalar_t__ success; } ;
typedef TYPE_1__ enduser_setup_state_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int) ;
 void* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_6)
{

  FUNC_0("enduser_setup_init");


  int VAR_7 = 0;

  if (VAR_5 != ((void*)0))
  {
    VAR_7 = VAR_0;
  }
  else
  {
    VAR_5 = (enduser_setup_state_t *) FUNC_2(1, sizeof(enduser_setup_state_t));

    if (VAR_5 == ((void*)0))
    {
      VAR_7 = VAR_2;
    }
    else
    {
      FUNC_6(VAR_5, 0, sizeof(enduser_setup_state_t));

      VAR_5->lua_connected_cb_ref = VAR_3;
      VAR_5->lua_err_cb_ref = VAR_3;
      VAR_5->lua_dbg_cb_ref = VAR_3;

      VAR_5->softAPchannel = 1;
      VAR_5->success = 0;
      VAR_5->callbackDone = 0;
      VAR_5->lastStationStatus = 0;
      VAR_5->connecting = 0;
    }
  }

  if (!FUNC_4(VAR_6, 1))
  {
    FUNC_5(VAR_6, 1);
    VAR_5->lua_connected_cb_ref = FUNC_3(VAR_6, VAR_4);
  }

  if (!FUNC_4(VAR_6, 2))
  {
    FUNC_5 (VAR_6, 2);
    VAR_5->lua_err_cb_ref = FUNC_3(VAR_6, VAR_4);
  }

  if (!FUNC_4(VAR_6, 3))
  {
    FUNC_5 (VAR_6, 3);
    VAR_5->lua_dbg_cb_ref = FUNC_3(VAR_6, VAR_4);
    FUNC_0("enduser_setup_init: Debug callback has been set");
  }

  if (VAR_7 == VAR_0)
  {
    FUNC_1("init failed. Appears to already be started. EUS will shut down now.", VAR_0, VAR_1);
  }
  else if (VAR_7 == VAR_2)
  {
    FUNC_1("init failed. Unable to allocate memory.", VAR_2, VAR_1);
  }

  return VAR_7;
}
