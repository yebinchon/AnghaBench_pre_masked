
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* params; } ;
typedef TYPE_4__ w32dbg_wrap_instance ;
struct TYPE_12__ {int io; } ;
struct TYPE_17__ {int tid; TYPE_1__ iob; TYPE_5__* user; } ;
struct TYPE_13__ {int dwThreadId; int dwProcessId; } ;
struct TYPE_16__ {TYPE_2__ pi; TYPE_4__* inst; } ;
struct TYPE_14__ {int continue_status; int tid; int pid; int type; } ;
typedef TYPE_5__ RIOW32Dbg ;
typedef TYPE_6__ RDebug ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_6__*,int,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;

int FUNC_7(RDebug *VAR_4, int VAR_5, int VAR_6, int VAR_7) {

 RIOW32Dbg *VAR_8 = VAR_4->user;
 DWORD VAR_9 = (VAR_7 == VAR_1)
  ? VAR_1 : VAR_0;
 VAR_4->tid = FUNC_3 (VAR_4, VAR_5, VAR_6);
 FUNC_0 (VAR_4->iob.io, FUNC_2 ("pid %d", VAR_4->tid));


 if (VAR_4->tid != VAR_6) {
  return -1;
 }

 if (VAR_3) {
  VAR_3 = 0;
  return -1;
 }
 w32dbg_wrap_instance *VAR_10 = VAR_8->inst;
 VAR_10->params->type = VAR_2;
 VAR_10->params->pid = VAR_8->pi.dwProcessId;
 VAR_10->params->tid = VAR_8->pi.dwThreadId;
 VAR_10->params->continue_status = VAR_9;
 FUNC_4 (VAR_10);
 if (!FUNC_6 (VAR_10)) {
  FUNC_5 (VAR_10);
  FUNC_1 ("w32_continue/ContinueDebugEvent");
  return -1;
 }

 return VAR_6;
}
