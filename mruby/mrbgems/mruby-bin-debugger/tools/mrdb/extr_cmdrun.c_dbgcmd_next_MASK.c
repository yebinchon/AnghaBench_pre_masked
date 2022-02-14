
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* dbg; } ;
typedef TYPE_3__ mrdb_state ;
struct TYPE_10__ {TYPE_2__* c; } ;
typedef TYPE_4__ mrb_state ;
typedef int dbgcmd_state ;
struct TYPE_8__ {int ci; } ;
struct TYPE_7__ {int prvci; int xm; } ;


 int VAR_0 ;
 int VAR_1 ;

dbgcmd_state
FUNC_0(mrb_state *VAR_2, mrdb_state *VAR_3)
{
  VAR_3->dbg->xm = VAR_1;
  VAR_3->dbg->prvci = VAR_2->c->ci;
  return VAR_0;
}
