
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
typedef int Value ;
struct TYPE_10__ {char* Data1; int * Data4; int Data3; int Data2; } ;
typedef TYPE_1__ UUID ;
struct TYPE_11__ {int cb; scalar_t__ hProcess; scalar_t__ hThread; } ;
typedef int StartupInfo ;
typedef int ShowWizard ;
typedef TYPE_2__ STARTUPINFOW ;
typedef int ProcessInfo ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int* PCWSTR ;
typedef int * PBYTE ;
typedef int * LPVOID ;
typedef int InstallEventName ;
typedef int HKEY ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int **,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int *,int,int,int*) ;
 scalar_t__ FUNC_5 (int*,int ,int ,int,int,int,int ,int *) ;
 int FUNC_6 (scalar_t__,int *,int*,int *,int *,int,int ,int *,int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (int *,int*,int *,int *,int,int ,int *,int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (char*,int*,...) ;
 int FUNC_9 (char*,int*,...) ;
 int FUNC_10 (int *) ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int* FUNC_11 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int*,int ,int ,int *) ;
 scalar_t__ FUNC_14 (int ,char*,int *,int *,int *,int*) ;
 int VAR_10 ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,int*,int,int*,int *) ;
 int FUNC_18 (TYPE_2__*,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_19 (int*,char*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_20 (int*,int*) ;
 int FUNC_21 (int*,char*) ;
 int FUNC_22 (int*) ;

__attribute__((used)) static BOOL
FUNC_23(PCWSTR VAR_14, BOOL VAR_15)
{
    BOOL VAR_16 = VAR_4;
    DWORD VAR_17;
    DWORD VAR_18;
    HANDLE VAR_19;
    HANDLE VAR_20 = VAR_6;
    LPVOID VAR_21 = ((void*)0);
    PROCESS_INFORMATION VAR_22;
    STARTUPINFOW VAR_23;
    UUID VAR_24;
    HKEY VAR_25;


    WCHAR VAR_26[116];
    WCHAR VAR_27[73];
    WCHAR VAR_28[74];
    WCHAR VAR_29[39];

    FUNC_8("InstallDevice(%S, %d)\n", VAR_14, VAR_15);

    FUNC_18(&VAR_22, sizeof(VAR_22));

    if (FUNC_13(VAR_12,
                      VAR_14,
                      0,
                      VAR_7,
                      &VAR_25) == VAR_3)
    {
        if (FUNC_14(VAR_25,
                             L"Class",
                             ((void*)0),
                             ((void*)0),
                             ((void*)0),
                             ((void*)0)) == VAR_3)
        {
            FUNC_8("No need to install: %S\n", VAR_14);
            FUNC_12(VAR_25);
            return VAR_10;
        }

        VAR_17 = sizeof(DWORD);
        if (FUNC_14(VAR_25,
                             L"ConfigFlags",
                             ((void*)0),
                             ((void*)0),
                             (PBYTE)&VAR_18,
                             &VAR_17) == VAR_3)
        {
            if (VAR_18 & VAR_0)
            {
                FUNC_8("No need to install: %S\n", VAR_14);
                FUNC_12(VAR_25);
                return VAR_10;
            }
        }

        FUNC_12(VAR_25);
    }

    FUNC_9("Installing: %S\n", VAR_14);


    FUNC_15(&VAR_24);
    FUNC_19(VAR_29, L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
        VAR_24.Data1, VAR_24.Data2, VAR_24.Data3,
        VAR_24.Data4[0], VAR_24.Data4[1], VAR_24.Data4[2],
        VAR_24.Data4[3], VAR_24.Data4[4], VAR_24.Data4[5],
        VAR_24.Data4[6], VAR_24.Data4[7]);


    FUNC_21(VAR_27, L"Global\\PNP_Device_Install_Event_0.");
    FUNC_20(VAR_27, VAR_29);
    VAR_19 = FUNC_4(((void*)0), VAR_10, VAR_4, VAR_27);
    if (!VAR_19)
    {
        FUNC_9("CreateEventW('%ls') failed with error %lu\n", VAR_27, FUNC_11());
        goto cleanup;
    }


    FUNC_21(VAR_28, L"\\\\.\\pipe\\PNP_Device_Install_Pipe_0.");
    FUNC_20(VAR_28, VAR_29);
    VAR_20 = FUNC_5(VAR_28, VAR_8, VAR_9, 1, 512, 512, 0, ((void*)0));
    if (VAR_20 == VAR_6)
    {
        FUNC_9("CreateNamedPipeW failed with error %u\n", FUNC_11());
        goto cleanup;
    }


    FUNC_21(VAR_26, L"rundll32.exe newdev.dll,ClientSideInstall ");
    FUNC_20(VAR_26, VAR_28);

    FUNC_18(&VAR_23, sizeof(VAR_23));
    VAR_23.cb = sizeof(VAR_23);

    if (VAR_13)
    {

        if (!FUNC_3(&VAR_21, VAR_13, VAR_4))
        {
            FUNC_9("CreateEnvironmentBlock failed with error %d\n", FUNC_11());
            goto cleanup;
        }

        if (!FUNC_6(VAR_13, ((void*)0), VAR_26, ((void*)0), ((void*)0), VAR_4, VAR_1, VAR_21, ((void*)0), &VAR_23, &VAR_22))
        {
            FUNC_9("CreateProcessAsUserW failed with error %u\n", FUNC_11());
            goto cleanup;
        }
    }
    else
    {




        FUNC_0(!VAR_15);

        if (!FUNC_7(((void*)0), VAR_26, ((void*)0), ((void*)0), VAR_4, 0, ((void*)0), ((void*)0), &VAR_23, &VAR_22))
        {
            FUNC_9("CreateProcessW failed with error %u\n", FUNC_11());
            goto cleanup;
        }
    }


    if (!FUNC_2(VAR_20, ((void*)0)))
    {
        if (FUNC_11() != VAR_2)
        {
            FUNC_9("ConnectNamedPipe failed with error %u\n", FUNC_11());
            goto cleanup;
        }
    }


    VAR_18 = sizeof(VAR_27);
    FUNC_17(VAR_20, &VAR_18, sizeof(VAR_18), &VAR_17, ((void*)0));
    FUNC_17(VAR_20, VAR_27, VAR_18, &VAR_17, ((void*)0));



    FUNC_17(VAR_20, &VAR_15, sizeof(VAR_15), &VAR_17, ((void*)0));

    VAR_18 = (FUNC_22(VAR_14) + 1) * sizeof(WCHAR);
    FUNC_17(VAR_20, &VAR_18, sizeof(VAR_18), &VAR_17, ((void*)0));
    FUNC_17(VAR_20, VAR_14, VAR_18, &VAR_17, ((void*)0));


    FUNC_16(VAR_22.hProcess, VAR_5);


    VAR_16 = FUNC_16(VAR_19, 0) == VAR_11;

cleanup:
    if (VAR_19)
        FUNC_1(VAR_19);

    if (VAR_20 != VAR_6)
        FUNC_1(VAR_20);

    if (VAR_21)
        FUNC_10(VAR_21);

    if (VAR_22.hProcess)
        FUNC_1(VAR_22.hProcess);

    if (VAR_22.hThread)
        FUNC_1(VAR_22.hThread);

    if (!VAR_16)
    {
        FUNC_9("InstallDevice failed for DeviceInstance '%ws'\n", VAR_14);
    }

    return VAR_16;
}
