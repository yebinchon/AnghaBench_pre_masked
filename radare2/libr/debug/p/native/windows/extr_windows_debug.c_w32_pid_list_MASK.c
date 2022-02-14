
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pe ;
struct TYPE_11__ {int dwSize; int th32ProcessID; int th32ParentProcessID; int szExeFile; } ;
struct TYPE_10__ {TYPE_2__* user; } ;
struct TYPE_8__ {int * hProcess; } ;
struct TYPE_9__ {TYPE_1__ pi; } ;
typedef int RList ;
typedef TYPE_2__ RIOW32Dbg ;
typedef int RDebugPid ;
typedef TYPE_3__ RDebug ;
typedef TYPE_4__ PROCESSENTRY32 ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_4__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_4__*) ;
 int VAR_1 ;
 int * FUNC_3 (int,int *,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int) ;

RList *FUNC_8(RDebug *VAR_2, int VAR_3, RList *VAR_4) {
 HANDLE VAR_5 = FUNC_7 (VAR_1, VAR_3);
 if (VAR_5 == VAR_0) {
  FUNC_6 ("w32_pid_list/CreateToolhelp32Snapshot");
  return VAR_4;
 }
 PROCESSENTRY32 VAR_6;
 VAR_6.dwSize = sizeof (VAR_6);
 if (FUNC_1 (VAR_5, &VAR_6)) {
  RIOW32Dbg *VAR_7 = VAR_2->user;
  bool VAR_8 = VAR_3 == 0, VAR_9 = 0;
  do {
   if (VAR_8 || VAR_6.th32ProcessID == VAR_3 || (VAR_9 = VAR_6.th32ParentProcessID == VAR_3)) {

    RDebugPid *VAR_10 = FUNC_3 (VAR_6.th32ProcessID, VAR_9 ? VAR_7->pi.hProcess : ((void*)0), VAR_6.szExeFile);
    if (VAR_10) {
     FUNC_5 (VAR_4, VAR_10);
    }





   }
  } while (FUNC_2 (VAR_5, &VAR_6));
 } else {
  FUNC_6 ("w32_pid_list/Process32First");
 }
 FUNC_0 (VAR_5);
 return VAR_4;
}
