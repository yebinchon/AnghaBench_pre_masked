
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szBuffer ;
typedef int WIN32_FIND_DATAW ;
typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ dwCurrentState; } ;
typedef TYPE_1__ SERVICE_STATUS ;
typedef int * SC_HANDLE ;
typedef int PWSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int,int,int,int,int,int *) ;
 int * FUNC_4 (int *,char*,int *,int ,int ,int ,int ,int *,int *,int *,int *,int *,int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_5 (int,int *,int,int *,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_11 (int *,int *,int ) ;
 int * FUNC_12 (int *,char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_14 (scalar_t__,char*,int,scalar_t__*,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 char* VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_15 (int *,int ,int *) ;
 scalar_t__ VAR_24 ;
 int FUNC_16 (scalar_t__,char const*,scalar_t__,scalar_t__*,int *) ;
 int FUNC_17 (char*,int,scalar_t__,int ) ;
 int FUNC_18 (char*,...) ;
 int VAR_25 ;
 scalar_t__ FUNC_19 (char const*) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (int *,int) ;

__attribute__((used)) static void
FUNC_22(const char* VAR_26)
{
    BOOL VAR_27 = VAR_3;
    char VAR_28[1024];
    DWORD VAR_29;
    DWORD VAR_30;
    HANDLE VAR_31 = VAR_4;
    HANDLE VAR_32 = VAR_4;
    HANDLE VAR_33 = VAR_4;
    PWSTR VAR_34;
    SC_HANDLE VAR_35 = ((void*)0);
    SC_HANDLE VAR_36 = ((void*)0);
    SERVICE_STATUS VAR_37;
    WCHAR VAR_38[VAR_5 + 20];
    WIN32_FIND_DATAW VAR_39;



    FUNC_5(VAR_14 | VAR_15, ((void*)0), 1, ((void*)0), 0, &VAR_29, &VAR_30);


    if (!FUNC_10(((void*)0), VAR_38, VAR_5))
    {
        FUNC_18("GetModuleFileNameW failed with error %lu!\n", FUNC_9());
        goto Cleanup;
    }


    VAR_34 = FUNC_21(VAR_38, L'.');
    if (!VAR_34)
    {
        FUNC_18("File path has no file extension: %S\n", VAR_38);
        goto Cleanup;
    }

    FUNC_20(VAR_34, L".dll");


    VAR_32 = FUNC_8(VAR_38, &VAR_39);
    if (VAR_32 == VAR_4)
    {
        FUNC_18("My DLL file \"%S\" does not exist!\n", VAR_38);
        goto Cleanup;
    }


    FUNC_20(VAR_34, L".exe service dummy");


    VAR_35 = FUNC_11(((void*)0), ((void*)0), VAR_16);
    if (!VAR_35)
    {
        FUNC_18("OpenSCManagerW failed with error %lu!\n", FUNC_9());
        goto Cleanup;
    }


    VAR_36 = FUNC_12(VAR_35, L"spooler", VAR_21);
    if (!VAR_36)
    {
        FUNC_18("OpenServiceW failed for the spooler service with error %lu!\n", FUNC_9());
        goto Cleanup;
    }

    if (!FUNC_13(VAR_36, &VAR_37))
    {
        FUNC_18("QueryServiceStatus failed for the spooler service with error %lu!\n", FUNC_9());
        goto Cleanup;
    }

    if (VAR_37.dwCurrentState != VAR_22)
    {
        FUNC_18("Spooler Service is not running!\n");
        goto Cleanup;
    }

    FUNC_1(VAR_36);


    VAR_36 = FUNC_12(VAR_35, VAR_20, VAR_17);
    if (!VAR_36)
    {
        if (FUNC_9() == VAR_2)
        {

            VAR_36 = FUNC_4(VAR_35, VAR_20, ((void*)0), VAR_17, VAR_23, VAR_18, VAR_19, VAR_38, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
            if (!VAR_36)
            {
                FUNC_18("CreateServiceW failed with error %lu!\n", FUNC_9());
                goto Cleanup;
            }
        }
        else
        {
            FUNC_18("OpenServiceW failed with error %lu!\n", FUNC_9());
            goto Cleanup;
        }
    }


    VAR_31 = FUNC_3(VAR_0, VAR_8, VAR_12 | VAR_10 | VAR_13, 1, 1024, 1024, 10000, ((void*)0));
    if (VAR_31 == VAR_4)
    {
        FUNC_18("CreateNamedPipeW failed for the command pipe with error %lu!\n", FUNC_9());
        goto Cleanup;
    }

    VAR_33 = FUNC_3(VAR_6, VAR_7, VAR_11 | VAR_9 | VAR_13, 1, 1024, 1024, 10000, ((void*)0));
    if (VAR_33 == VAR_4)
    {
        FUNC_18("CreateNamedPipeW failed for the output pipe with error %lu!\n", FUNC_9());
        goto Cleanup;
    }


    if (!FUNC_15(VAR_36, 0, ((void*)0)))
    {
        FUNC_18("StartServiceW failed with error %lu!\n", FUNC_9());
        goto Cleanup;
    }


    if (!FUNC_2(VAR_31, ((void*)0)) && FUNC_9() != VAR_1)
    {
        FUNC_18("ConnectNamedPipe failed for the command pipe with error %lu!\n", FUNC_9());
        goto Cleanup;
    }


    if (!FUNC_16(VAR_31, VAR_26, FUNC_19(VAR_26) + sizeof(char), &VAR_30, ((void*)0)))
    {
        FUNC_18("WriteFile failed with error %lu!\n", FUNC_9());
        goto Cleanup;
    }


    if (!FUNC_2(VAR_33, ((void*)0)))
    {
        FUNC_18("ConnectNamedPipe failed for the output pipe with error %lu!\n", FUNC_9());
        goto Cleanup;
    }


    while (FUNC_14(VAR_33, VAR_28, sizeof(VAR_28), &VAR_29, ((void*)0)) && VAR_29)
        FUNC_17(VAR_28, sizeof(char), VAR_29, VAR_25);

    VAR_27 = VAR_24;

Cleanup:
    if (VAR_31 != VAR_4)
        FUNC_0(VAR_31);

    if (VAR_33 != VAR_4)
        FUNC_0(VAR_33);

    if (VAR_32 != VAR_4)
        FUNC_7(VAR_32);

    if (VAR_36)
        FUNC_1(VAR_36);

    if (VAR_35)
        FUNC_1(VAR_35);



    if (VAR_27)
        FUNC_6(0);
}
