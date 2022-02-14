
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int wcnt; int * words; TYPE_2__* dbg; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;
struct TYPE_5__ {scalar_t__ xphase; int xm; int ccnt; } ;
typedef TYPE_2__ mrb_debug_context ;
typedef int dbgcmd_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int*) ;

dbgcmd_state
FUNC_2(mrb_state *VAR_4, mrdb_state *VAR_5)
{
  mrb_debug_context *VAR_6 = VAR_5->dbg;
  int VAR_7 = 1;

  if (VAR_5->wcnt > 1){
    FUNC_1(VAR_5->words[1], "%d", &VAR_7);
  }
  VAR_6->ccnt = (uint16_t)(VAR_7 > 0 ? VAR_7 : 1);

  if (VAR_6->xphase == VAR_1){
    FUNC_0("The program is not running.");
    VAR_6->xm = VAR_2;
  }
  else {
    VAR_6->xm = VAR_3;
  }
  return VAR_0;
}
