
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SC_HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*,int *,int ,int ,int ,int ,char*,char*,scalar_t__*,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,char*,int **,scalar_t__*) ;
 int * FUNC_5 (int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char*,scalar_t__,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    SC_HANDLE VAR_8 = ((void*)0);
    SC_HANDLE VAR_9 = ((void*)0), VAR_10 = ((void*)0);
    SC_HANDLE VAR_11 = ((void*)0);
    DWORD VAR_12 = 0, VAR_13 = 0;
    DWORD VAR_14 = 785;

    FUNC_6(VAR_1);
    VAR_8 = FUNC_5(((void*)0), ((void*)0), VAR_4);
    FUNC_7(VAR_8 != ((void*)0), "Failed to open service manager, error=0x%08lx\n", FUNC_3());
    if (!VAR_8)
    {
        FUNC_9("No service control manager; cannot proceed with CreateService test\n");
        goto cleanup;
    }

    FUNC_8(VAR_3);

    if (FUNC_4(VAR_8, L"advapi32_apitest_CreateService_Test_Service1", &VAR_9, &VAR_12))
        goto cleanup;

    if (FUNC_4(VAR_8, L"advapi32_apitest_CreateService_Test_Service2", &VAR_10, &VAR_13))
        goto cleanup;

    FUNC_7(VAR_12 != VAR_13, "tag1=%lu, tag2=%lu\n", VAR_12, VAR_13);


    VAR_11 = FUNC_1(
                    VAR_8,
                    L"advapi32_apitest_CreateService_Test_Service2",
                    ((void*)0),
                    VAR_0,
                    VAR_7,
                    VAR_5,
                    VAR_6,
                    L"%systemroot%\\drivers\\win32k.sys",
                    ((void*)0),
                    &VAR_14,
                    ((void*)0),
                    ((void*)0),
                    ((void*)0));
    FUNC_7(VAR_11 == ((void*)0), "hService3=%p\n", VAR_11);
    FUNC_7(FUNC_3() == VAR_2, "error=%lu\n", FUNC_3());
    FUNC_7(VAR_14 == 785, "tag3=%lu\n", VAR_14);
    FUNC_2(VAR_11);

    VAR_11 = FUNC_1(
                    VAR_8,
                    L"advapi32_apitest_CreateService_Test_Service2",
                    ((void*)0),
                    VAR_0,
                    VAR_7,
                    VAR_5,
                    VAR_6,
                    L"%systemroot%\\drivers\\win32k.sys",
                    L"",
                    &VAR_14,
                    ((void*)0),
                    ((void*)0),
                    ((void*)0));
    FUNC_7(VAR_11 == ((void*)0), "hService3=%p\n", VAR_11);
    FUNC_7(FUNC_3() == VAR_2, "error=%lu\n", FUNC_3());
    FUNC_7(VAR_14 == 785, "tag3=%lu\n", VAR_14);
    FUNC_2(VAR_11);

cleanup:

    FUNC_2(VAR_10);
    FUNC_2(VAR_9);

    if (VAR_8)
        FUNC_0(VAR_8);
}
