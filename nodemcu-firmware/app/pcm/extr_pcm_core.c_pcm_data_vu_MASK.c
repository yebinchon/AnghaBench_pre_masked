
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ task_param_t ;
typedef int lua_State ;
struct TYPE_2__ {scalar_t__ cb_vu_ref; scalar_t__ self_ref; scalar_t__ vu_peak; } ;
typedef TYPE_1__ cfg_t ;
typedef int LUA_NUMBER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

void FUNC_4( task_param_t VAR_2, uint8 VAR_3 )
{
  cfg_t *VAR_4 = (cfg_t *)VAR_2;
  lua_State *VAR_5 = FUNC_1();

  if (VAR_4->cb_vu_ref != VAR_0) {
    FUNC_3( VAR_5, VAR_1, VAR_4->cb_vu_ref );
    FUNC_3( VAR_5, VAR_1, VAR_4->self_ref );
    FUNC_2( VAR_5, (LUA_NUMBER)(VAR_4->vu_peak) );
    FUNC_0( VAR_5, 2, 0 );
  }
}
