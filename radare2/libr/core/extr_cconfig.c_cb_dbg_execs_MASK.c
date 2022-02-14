
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pid; scalar_t__ trace_execs; } ;
struct TYPE_7__ {scalar_t__ i_value; } ;
struct TYPE_6__ {TYPE_4__* dbg; TYPE_1__* io; } ;
struct TYPE_5__ {scalar_t__ debug; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConfigNode ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, void *VAR_1) {
 RConfigNode *VAR_2 = (RConfigNode*) VAR_1;

 RCore *VAR_3 = (RCore*) VAR_0;
 VAR_3->dbg->trace_execs = VAR_2->i_value;
 if (VAR_3->io->debug) {
  FUNC_1 (VAR_3->dbg, VAR_3->dbg->pid);
 }





 return 1;
}
