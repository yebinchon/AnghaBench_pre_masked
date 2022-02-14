
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* params; } ;
struct TYPE_10__ {int pid; TYPE_3__* user; } ;
struct TYPE_8__ {int * hProcess; } ;
struct TYPE_9__ {TYPE_2__ pi; TYPE_5__* inst; } ;
struct TYPE_7__ {int pid; int ret; int type; } ;
typedef TYPE_3__ RIOW32Dbg ;
typedef TYPE_4__ RDebug ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;

int FUNC_2(RDebug *VAR_1, int VAR_2) {
 if (VAR_2 == -1 || VAR_1->pid != VAR_2) {
  return 0;
 }
 RIOW32Dbg *VAR_3 = VAR_1->user;
 bool VAR_4 = 0;
 if (VAR_3->pi.hProcess) {
  VAR_3->inst->params->type = VAR_0;
  VAR_3->inst->params->pid = VAR_2;
  FUNC_1 (VAR_3->inst);
  VAR_4 = VAR_3->inst->params->ret;
 }
 if (VAR_3->pi.hProcess) {
  FUNC_0 (VAR_3->pi.hProcess);
  VAR_3->pi.hProcess = ((void*)0);
 }
 return VAR_4;
}
