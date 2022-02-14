
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int RDebugPid ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int*) ;
 char* FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,int,int,char,int ) ;
 char* FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int,int ,int) ;

__attribute__((used)) static RDebugPid *FUNC_7(int VAR_3, HANDLE VAR_4, const TCHAR* VAR_5) {
 char *VAR_6 = ((void*)0);
 int VAR_7 = -1;
 if (!VAR_4) {
  VAR_4 = FUNC_6 (VAR_1 | VAR_2, VAR_0, VAR_3);
  if (VAR_4) {
   VAR_6 = FUNC_2 (VAR_4, ((void*)0));
   DWORD VAR_8;
   if (FUNC_1 (VAR_3, &VAR_8)) {
    VAR_7 = VAR_8;
   }
   FUNC_0 (VAR_4);
  } else {
   return ((void*)0);
  }
 } else {
  VAR_6 = FUNC_2 (VAR_4, ((void*)0));
  DWORD VAR_9;
  if (FUNC_1 (VAR_3, &VAR_9)) {
   VAR_7 = VAR_9;
  }
 }
 if (!VAR_6) {
  VAR_6 = FUNC_5 (VAR_5);
 }

 RDebugPid *VAR_10 = FUNC_4 (VAR_6, VAR_3, VAR_7, 's', 0);
 FUNC_3 (VAR_6);
 return VAR_10;
}
