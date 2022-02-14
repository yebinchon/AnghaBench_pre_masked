
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_24__ {TYPE_1__* params; } ;
struct TYPE_23__ {TYPE_5__* user; } ;
struct TYPE_22__ {int pid; } ;
struct TYPE_19__ {int dwThreadId; scalar_t__ hProcess; } ;
struct TYPE_21__ {TYPE_3__ pi; TYPE_8__* inst; } ;
struct TYPE_20__ {scalar_t__ length; TYPE_2__* head; } ;
struct TYPE_18__ {scalar_t__ data; } ;
struct TYPE_17__ {int pid; int ret; int type; } ;
typedef TYPE_4__ RList ;
typedef TYPE_5__ RIOW32Dbg ;
typedef TYPE_6__ RDebugPid ;
typedef TYPE_7__ RDebug ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_7__*,int) ;
 TYPE_4__* FUNC_6 (TYPE_7__*,int,TYPE_4__*) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_8__*) ;

int FUNC_9(RDebug *VAR_3, int VAR_4) {
 RIOW32Dbg *VAR_5 = VAR_3->user;
 if (VAR_5->pi.hProcess) {
  return VAR_5->pi.dwThreadId;
 }
 HANDLE VAR_6 = FUNC_4 (VAR_2, VAR_0, VAR_4);
 if (!VAR_6) {
  return -1;
 }
 VAR_5->inst->params->type = VAR_1;
 VAR_5->inst->params->pid = VAR_4;
 FUNC_7 (VAR_5->inst);
 if (!VAR_5->inst->params->ret) {
  FUNC_8 (VAR_5->inst);
  FUNC_3 ("DebugActiveProcess");
  FUNC_0 (VAR_6);
  return -1;
 }
 RList *VAR_7 = FUNC_2 ();
 if (!VAR_7) {
  FUNC_0 (VAR_6);
  return -1;
 }
 VAR_7 = FUNC_6 (VAR_3, VAR_4, VAR_7);
 if (VAR_7->length == 0) {
  FUNC_1 (VAR_7);
  FUNC_0 (VAR_6);
  return -1;
 }
 int VAR_8 = ((RDebugPid *)VAR_7->head->data)->pid;
 FUNC_1 (VAR_7);
 VAR_5->pi.hProcess = VAR_6;
 FUNC_5 (VAR_3, VAR_4);

 return VAR_8;
}
