
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pid; int trace_forks; } ;
struct TYPE_7__ {int i_value; } ;
struct TYPE_6__ {TYPE_4__* dbg; TYPE_1__* io; } ;
struct TYPE_5__ {scalar_t__ debug; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConfigNode ;


 int FUNC_0 (TYPE_4__*,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode*) VAR_1;
 VAR_2->dbg->trace_forks = VAR_3->i_value;
 if (VAR_2->io->debug) {
  FUNC_0 (VAR_2->dbg, VAR_2->dbg->pid);
 }
 return 1;
}
