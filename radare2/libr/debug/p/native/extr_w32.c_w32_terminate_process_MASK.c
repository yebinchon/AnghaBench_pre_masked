
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RDebug ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int ,int) ;

bool FUNC_7(RDebug *VAR_5, int VAR_6) {
 HANDLE VAR_7 = FUNC_6(VAR_1 | VAR_2 , VAR_0, VAR_6);
 bool VAR_8 = 0;
 if (!VAR_7) {
  FUNC_4 ("w32_terminate_process/OpenProcess");
  goto err_w32_terminate_process;
 }

 if (&FUNC_5) {
  FUNC_5 (VAR_6);
 }
 if (FUNC_1 (VAR_7, 1) == 0) {
  FUNC_4 ("e32_terminate_process/TerminateProcess");
  goto err_w32_terminate_process;

 }

 DWORD VAR_9 = FUNC_2 (VAR_7, 1000);
 if (VAR_9 == VAR_3) {
  FUNC_4 ("w32_terminate_process/WaitForSingleObject");
  goto err_w32_terminate_process;
 }
 if (VAR_9 == VAR_4) {
  FUNC_3 ("(%d) Waiting for process to terminate timed out.\n", VAR_6);
  goto err_w32_terminate_process;
 }
 VAR_8 = 1;
err_w32_terminate_process:
 if (VAR_7) {
  FUNC_0 (VAR_7);
 }
 return VAR_8;
}
