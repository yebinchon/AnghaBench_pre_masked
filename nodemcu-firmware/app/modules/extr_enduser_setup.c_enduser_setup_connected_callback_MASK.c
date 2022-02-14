
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {scalar_t__ lua_connected_cb_ref; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_4()
{
  FUNC_0("enduser_setup_connected_callback");

  lua_State *VAR_3 = FUNC_2();
  if (VAR_2 != ((void*)0) && VAR_2->lua_connected_cb_ref != VAR_0)
  {
    FUNC_3(VAR_3, VAR_1, VAR_2->lua_connected_cb_ref);
    FUNC_1(VAR_3, 0, 0);
  }
}
