
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int si ;
typedef int pi ;
typedef int our_si ;
struct TYPE_7__ {int cb; int hThread; int hProcess; int cbReserved2; int lpReserved2; int dwFlags; void* hStdError; void* hStdOutput; void* hStdInput; } ;
typedef TYPE_1__ STARTUPINFOW ;
typedef TYPE_1__ PROCESS_INFORMATION ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(wchar_t *VAR_6, wchar_t *VAR_7)
{
    STARTUPINFOW VAR_8;
    STARTUPINFOW VAR_9;
    PROCESS_INFORMATION VAR_10;
    DWORD VAR_11 = 1;

    FUNC_6(&VAR_8, sizeof(VAR_8));
    VAR_8.cb = sizeof(VAR_8);
    VAR_8.hStdInput = FUNC_4(VAR_3);
    VAR_8.hStdOutput = FUNC_4(VAR_4);
    VAR_8.hStdError = FUNC_4(VAR_2);
    VAR_8.dwFlags |= VAR_1;


    VAR_9.cb = sizeof(VAR_9);
    FUNC_3(&VAR_9);
    VAR_8.lpReserved2 = VAR_9.lpReserved2;
    VAR_8.cbReserved2 = VAR_9.cbReserved2;

    FUNC_6(&VAR_10, sizeof(VAR_10));

    if (!FUNC_1(VAR_6, VAR_7, ((void*)0), ((void*)0), VAR_5, 0,
                        ((void*)0), ((void*)0), &VAR_8, &VAR_10)) {

        FUNC_7(L"CreateProcess");
    } else {
        FUNC_5(VAR_10.hProcess, VAR_0);
        FUNC_2(VAR_10.hProcess, &VAR_11);
        FUNC_0(VAR_10.hProcess);
        FUNC_0(VAR_10.hThread);
    }

    return (int)VAR_11;
}
