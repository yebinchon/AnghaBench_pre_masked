
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwSize; int th32ProcessID; int th32ParentProcessID; } ;
typedef int RList ;
typedef int RDebugPid ;
typedef TYPE_1__ PROCESSENTRY32 ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 int VAR_1 ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;

RList *FUNC_7(int VAR_2, RList *VAR_3) {
 HANDLE VAR_4;
 PROCESSENTRY32 VAR_5;
 VAR_5.dwSize = sizeof (PROCESSENTRY32);
 bool VAR_6 = VAR_2 == 0;

 VAR_4 = FUNC_1 (VAR_1, VAR_2);
 if (VAR_4 == VAR_0) {
  FUNC_6 ("w32_pids/CreateToolhelp32Snapshot");
  return VAR_3;
 }
 if (!FUNC_2 (VAR_4, &VAR_5)) {
  FUNC_6 ("w32_pids/Process32First");
  FUNC_0 (VAR_4);
  return VAR_3;
 }
 do {
  if (VAR_6 ||
   VAR_5.th32ProcessID == VAR_2 ||
   VAR_5.th32ParentProcessID == VAR_2) {

   RDebugPid *VAR_7 = FUNC_4 (&VAR_5);
   if (VAR_7) {
    FUNC_5 (VAR_3, VAR_7);
   }
  }
 } while (FUNC_3 (VAR_4, &VAR_5));

 FUNC_0 (VAR_4);
 return VAR_3;
}
