
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* szExeFile; int th32ProcessID; } ;
typedef char TCHAR ;
typedef int RDebugPid ;
typedef TYPE_1__ PROCESSENTRY32 ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int ,int ,char,int ) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (scalar_t__,int ,char*,int *) ;

__attribute__((used)) static RDebugPid *FUNC_6(PROCESSENTRY32 *VAR_2) {
 TCHAR VAR_3[VAR_1 + 1];
 DWORD VAR_4 = VAR_1;
 RDebugPid *VAR_5;
 char *VAR_6;
 HANDLE VAR_7 = FUNC_4 (0x1000,
  VAR_0, VAR_2->th32ProcessID);

 *VAR_3 = '\0';
 if (VAR_7) {
  if (&FUNC_5) {
   FUNC_5 (VAR_7, 0, VAR_3, &VAR_4);
  }
  FUNC_0(VAR_7);
 }
 if (*VAR_3) {
  VAR_6 = FUNC_3 (VAR_3);
 } else {
  VAR_6 = FUNC_3 (VAR_2->szExeFile);
 }
 VAR_5 = FUNC_2 (VAR_6, VAR_2->th32ProcessID, 0, 's', 0);
 FUNC_1 (VAR_6);
 return VAR_5;
}
