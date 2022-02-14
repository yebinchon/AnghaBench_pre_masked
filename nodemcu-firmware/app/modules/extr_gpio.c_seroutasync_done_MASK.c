
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int task_param_t ;
typedef int lua_State ;
struct TYPE_2__ {scalar_t__ lua_done_ref; int * delay_table; int tablelen; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (int *,int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7 (task_param_t VAR_4)
{
  lua_State *VAR_5 = FUNC_3();
  if (VAR_2.delay_table) {
    FUNC_2(VAR_5, VAR_2.delay_table, VAR_2.tablelen, VAR_3);
    VAR_2.delay_table = ((void*)0);
  }
  if (VAR_2.lua_done_ref != VAR_0) {
    FUNC_5 (VAR_5, VAR_1, VAR_2.lua_done_ref);
    FUNC_1 (VAR_5, VAR_1, VAR_2.lua_done_ref);
    VAR_2.lua_done_ref = VAR_0;
    if (FUNC_4(VAR_5, 0, 0, 0)) {

      FUNC_0(VAR_5, "error: %s", FUNC_6(VAR_5, -1));
    }
  }
}
