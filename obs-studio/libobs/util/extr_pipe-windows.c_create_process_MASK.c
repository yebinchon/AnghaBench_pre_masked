
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int si ;
struct TYPE_6__ {int hThread; void* hProcess; int member_0; } ;
struct TYPE_5__ {int cb; int dwFlags; void* hStdError; void* hStdOutput; void* hStdInput; int member_0; } ;
typedef TYPE_1__ STARTUPINFOW ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef void* HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int *,int,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int ,int **) ;

__attribute__((used)) static inline bool FUNC_4(const char *VAR_3, HANDLE VAR_4,
      HANDLE VAR_5, HANDLE VAR_6,
      HANDLE *VAR_7)
{
 PROCESS_INFORMATION VAR_8 = {0};
 wchar_t *VAR_9 = ((void*)0);
 STARTUPINFOW VAR_10 = {0};
 bool VAR_11 = 0;

 VAR_10.cb = sizeof(VAR_10);
 VAR_10.dwFlags = VAR_2 | VAR_1;
 VAR_10.hStdInput = VAR_4;
 VAR_10.hStdOutput = VAR_5;
 VAR_10.hStdError = VAR_6;

 FUNC_3(VAR_3, 0, &VAR_9);
 if (VAR_9) {
  VAR_11 = !!FUNC_1(((void*)0), VAR_9, ((void*)0), ((void*)0), 1,
        VAR_0, ((void*)0), ((void*)0), &VAR_10,
        &VAR_8);

  if (VAR_11) {
   *VAR_7 = VAR_8.hProcess;
   FUNC_0(VAR_8.hThread);
  }

  FUNC_2(VAR_9);
 }

 return VAR_11;
}
