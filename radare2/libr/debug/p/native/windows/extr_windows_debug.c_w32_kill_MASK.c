
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
struct TYPE_10__ {int threads; TYPE_3__* user; } ;
struct TYPE_8__ {int * hProcess; } ;
struct TYPE_9__ {TYPE_2__ pi; TYPE_5__* inst; } ;
struct TYPE_7__ {int pid; int type; } ;
typedef TYPE_3__ RIOW32Dbg ;
typedef TYPE_4__ RDebug ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_2 ;

int FUNC_7(RDebug *VAR_3, int VAR_4, int VAR_5, int VAR_6) {
 RIOW32Dbg *VAR_7 = VAR_3->user;

 if (VAR_6 == 0) {
  if (!FUNC_3 (VAR_7->pi.hProcess)) {
   FUNC_4 (VAR_3->threads);
   return 0;
  }
  return 1;
 }

 VAR_7->inst->params->type = VAR_0;
 VAR_7->inst->params->pid = VAR_4;
 FUNC_6 (VAR_7->inst);

 bool VAR_8 = 0;
 if (FUNC_1 (VAR_7->pi.hProcess, 1)) {
  if (FUNC_2 (VAR_7->pi.hProcess, VAR_2) != VAR_1) {
   FUNC_5 ("w32_kill/WaitForSingleObject");
  } else {
   VAR_8 = 1;
  }
 }
 FUNC_4 (VAR_3->threads);
 FUNC_0 (VAR_7->pi.hProcess);
 VAR_7->pi.hProcess = ((void*)0);
 return VAR_8;
}
