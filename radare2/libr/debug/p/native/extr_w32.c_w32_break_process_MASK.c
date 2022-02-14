
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pid; } ;
typedef TYPE_1__ RDebug ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

void FUNC_4(void *VAR_2) {
 RDebug *VAR_3 = (RDebug *)VAR_2;
 HANDLE VAR_4 = FUNC_3 (VAR_1, VAR_0, VAR_3->pid);
 if (!VAR_4) {
  FUNC_1 ("w32_break_process/w32_OpenProcess");
  goto err_w32_break_process;
 }
 if (!FUNC_2 (VAR_4)) {
  FUNC_1 ("w32_break_process/w32_DebugBreakProcess");
  goto err_w32_break_process;
 }
err_w32_break_process:
 if (VAR_4) {
  FUNC_0 (VAR_4);
 }
}
