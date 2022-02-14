
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pid; } ;
struct TYPE_5__ {int exe; } ;
typedef TYPE_1__ RDebugInfo ;
typedef TYPE_2__ RDebug ;
typedef char* LPTSTR ;
typedef scalar_t__ HANDLE ;
typedef size_t DWORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,char*,size_t*) ;

__attribute__((used)) static void FUNC_8(RDebug *VAR_3, RDebugInfo *VAR_4) {
 LPTSTR VAR_5 = ((void*)0);
 HANDLE VAR_6;
 DWORD VAR_7;

 if (!&FUNC_7) {
  return;
 }
 VAR_6 = FUNC_1 (VAR_2, VAR_0, VAR_3->pid);
 if (!VAR_6) {
  FUNC_6 ("w32_info_exe/OpenProcess");
  goto err_w32_info_exe;
 }
 VAR_5 = (LPTSTR)FUNC_3 (VAR_1 + 1);
 if (!VAR_5) {
  FUNC_4 ("w32_info_exe/malloc path");
  goto err_w32_info_exe;
 }
 VAR_7 = VAR_1;
 if (FUNC_7 (VAR_6, 0, VAR_5, &VAR_7)) {
  VAR_5[VAR_7] = '\0';
  VAR_4->exe = FUNC_5 (VAR_5);
 } else {
  FUNC_6 ("w32_info_exe/QueryFullProcessImageName");
 }
err_w32_info_exe:
 if (VAR_6) {
  FUNC_0 (VAR_6);
 }
 FUNC_2 (VAR_5);
}
