
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int core; scalar_t__ (* cfggeti ) (int ,char*) ;} ;
struct TYPE_10__ {TYPE_1__ corebind; TYPE_3__* user; } ;
struct TYPE_8__ {int hProcess; int dwProcessId; } ;
struct TYPE_9__ {TYPE_2__ pi; } ;
typedef TYPE_3__ RIOW32Dbg ;
typedef TYPE_4__ RDebug ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;

void FUNC_5(RDebug *VAR_1) {
 RIOW32Dbg *VAR_2 = VAR_1->user;
 if (VAR_1->corebind.cfggeti (VAR_1->corebind.core, "dbg.threads")) {
  FUNC_4 (VAR_1, VAR_2->pi.dwProcessId, 0);
 } else {
  if (!FUNC_3 (VAR_2->pi.hProcess)) {
   FUNC_1 ("w32_break_process/DebugBreakProcess");
   FUNC_0("Could not interrupt program, attempt to press Ctrl-C in the program's console.\n");
  }
 }

 VAR_0 = 1;
}
