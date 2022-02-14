
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wcnt; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;
typedef int dbgcmd_state ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

dbgcmd_state
FUNC_2(mrb_state *VAR_1, mrdb_state *VAR_2)
{
  if (VAR_2->wcnt == 2) {
    FUNC_0(VAR_1, VAR_2);
  }
  else {
    FUNC_1(VAR_1, VAR_2);
  }

  return VAR_0;
}
