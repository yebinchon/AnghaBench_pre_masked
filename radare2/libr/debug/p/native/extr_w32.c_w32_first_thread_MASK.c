
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwSize; int th32OwnerProcessID; int th32ThreadID; } ;
typedef TYPE_1__ THREADENTRY32 ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;

int FUNC_7(int VAR_3) {
 HANDLE VAR_4;
 HANDLE VAR_5;
 THREADENTRY32 VAR_6;
 VAR_6 = sizeof (THREADENTRY32);

 if (!&FUNC_6) {
  FUNC_4("w32_thread_list: no w32_OpenThread?\n");
  return -1;
 }
 VAR_4 = FUNC_1 (VAR_1, VAR_3);
 if (VAR_4 == VAR_0) {
  FUNC_4 ("w32_thread_list: invalid handle\n");
  return -1;
 }
 if (!FUNC_2 (VAR_4, &VAR_6)) {
  FUNC_0 (VAR_4);
  FUNC_4 ("w32_thread_list: no thread first\n");
  return -1;
 }
 do {

  if (VAR_6 == VAR_3) {
   VAR_5 = FUNC_6 (VAR_2, 0, VAR_6);
   if (!VAR_5) {
    FUNC_5 ("w32_first_thread/OpenThread");
    goto err_load_th;
   }
   FUNC_0 (VAR_4);
   return VAR_6;
  }
 } while (FUNC_3 (VAR_4, &VAR_6));
err_load_th:
 FUNC_4 ("Could not find an active thread for pid %d\n", VAR_3);
 FUNC_0 (VAR_4);
 return VAR_3;
}
