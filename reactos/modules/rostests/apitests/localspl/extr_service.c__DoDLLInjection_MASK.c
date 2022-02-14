
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pe ;
typedef int WCHAR ;
struct TYPE_4__ {int dwSize; int th32ProcessID; int szExeFile; } ;
typedef int PWSTR ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__ PROCESSENTRY32W ;
typedef int LPTHREAD_START_ROUTINE ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int *) ;
 int VAR_0 ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_10 (scalar_t__,TYPE_1__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (scalar_t__,int *,int,int,int ) ;
 int FUNC_12 (scalar_t__,scalar_t__,int *,int,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*) ;
 scalar_t__ FUNC_15 (int ,char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int) ;

__attribute__((used)) static void
FUNC_18()
{
    DWORD VAR_8;
    HANDLE VAR_9;
    HANDLE VAR_10;
    HANDLE VAR_11;
    PROCESSENTRY32W VAR_12;
    PVOID VAR_13;
    PVOID VAR_14;
    PWSTR VAR_15;
    WCHAR VAR_16[VAR_2];


    if (!FUNC_5(((void*)0), VAR_16, FUNC_13(VAR_16)))
    {
        FUNC_3("GetModuleFileNameW failed with error %lu!\n", FUNC_4());
        return;
    }


    VAR_15 = FUNC_17(VAR_16, L'.');
    if (!VAR_15)
    {
        FUNC_3("File path has no file extension: %S\n", VAR_16);
        return;
    }

    FUNC_14(VAR_15, L".dll");
    VAR_8 = (FUNC_16(VAR_16) + 1) * sizeof(WCHAR);


    VAR_10 = FUNC_2(VAR_7, 0);
    if (VAR_10 == VAR_1)
    {
        FUNC_3("CreateToolhelp32Snapshot failed with error %lu!\n", FUNC_4());
        return;
    }


    VAR_12.dwSize = sizeof(VAR_12);
    if (!FUNC_9(VAR_10, &VAR_12))
    {
        FUNC_3("Process32FirstW failed with error %lu!\n", FUNC_4());
        return;
    }

    do
    {

        if (FUNC_15(VAR_12.szExeFile, L"spoolsv.exe") != 0)
            continue;


        VAR_9 = FUNC_8(VAR_6, VAR_0, VAR_12.th32ProcessID);
        if (!VAR_9)
        {
            FUNC_3("OpenProcess failed with error %lu!\n", FUNC_4());
            return;
        }


        VAR_13 = (PVOID)FUNC_7(FUNC_6(L"kernel32.dll"), "LoadLibraryW");
        if (!VAR_13)
        {
            FUNC_3("GetProcAddress failed with error %lu!\n", FUNC_4());
            return;
        }


        VAR_14 = FUNC_11(VAR_9, ((void*)0), VAR_8, VAR_3 | VAR_4, VAR_5);
        if (!VAR_14)
        {
            FUNC_3("VirtualAllocEx failed with error %lu!\n", FUNC_4());
            return;
        }


        if (!FUNC_12(VAR_9, VAR_14, VAR_16, VAR_8, ((void*)0)))
        {
            FUNC_3("WriteProcessMemory failed with error %lu!\n", FUNC_4());
            return;
        }



        VAR_11 = FUNC_1(VAR_9, ((void*)0), 0, (LPTHREAD_START_ROUTINE)VAR_13, VAR_14, 0, ((void*)0));
        if (!VAR_11)
        {
            FUNC_3("CreateRemoteThread failed with error %lu!\n", FUNC_4());
            return;
        }

        FUNC_0(VAR_11);
        break;
    }
    while (FUNC_10(VAR_10, &VAR_12));
}
