
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int request; } ;
typedef TYPE_1__ test_request_t ;
typedef int file_name ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int ,int ,char*,int*) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (TYPE_1__*,char*,int ,int *,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    char VAR_6[VAR_5];
    test_request_t VAR_7;
    HANDLE VAR_8, VAR_9;
    DWORD VAR_10;
    BOOL VAR_11;

    FUNC_8(&VAR_7, "test.winehq.org", VAR_3, ((void*)0), "/tests/hello.html");

    VAR_10 = sizeof(VAR_6);
    VAR_11 = FUNC_5(VAR_7.request, VAR_4, VAR_6, &VAR_10);
    FUNC_7(!VAR_11, "InternetQueryOptionA(INTERNET_OPTION_DATAFILE_NAME) succeeded\n");
    FUNC_7(FUNC_1() == VAR_1, "GetLastError()=%u\n", FUNC_1());
    FUNC_7(!VAR_10, "size = %d\n", VAR_10);

    VAR_8 = ((void*)0);
    VAR_11 = FUNC_4(VAR_7.request, &VAR_8);
    FUNC_7(!VAR_11 && FUNC_1() == VAR_0, "InternetLockRequestFile returned: %x(%u)\n", VAR_11, FUNC_1());

    VAR_11 = FUNC_2(VAR_7.request, ((void*)0), 0, ((void*)0), 0);
    FUNC_7(VAR_11, "HttpSendRequest failed: %u\n", FUNC_1());

    VAR_10 = sizeof(VAR_6);
    VAR_11 = FUNC_5(VAR_7.request, VAR_4, VAR_6, &VAR_10);
    FUNC_7(VAR_11, "InternetQueryOptionA(INTERNET_OPTION_DATAFILE_NAME) failed: %u\n", FUNC_1());

    VAR_11 = FUNC_4(VAR_7.request, &VAR_8);
    FUNC_7(VAR_11, "InternetLockRequestFile returned: %x(%u)\n", VAR_11, FUNC_1());
    FUNC_7(VAR_8 != ((void*)0), "lock == NULL\n");

    VAR_11 = FUNC_4(VAR_7.request, &VAR_9);
    FUNC_7(VAR_11, "InternetLockRequestFile returned: %x(%u)\n", VAR_11, FUNC_1());
    FUNC_7(VAR_8 == VAR_9, "lock != lock2\n");

    VAR_11 = FUNC_6(VAR_9);
    FUNC_7(VAR_11, "InternetUnlockRequestFile failed: %u\n", FUNC_1());

    VAR_11 = FUNC_0(VAR_6);
    FUNC_7(!VAR_11 && FUNC_1() == VAR_2, "Deleting file returned %x(%u)\n", VAR_11, FUNC_1());

    FUNC_7(FUNC_3(VAR_7.request), "Close request handle failed\n");

    VAR_11 = FUNC_0(VAR_6);
    FUNC_7(!VAR_11 && FUNC_1() == VAR_2, "Deleting file returned %x(%u)\n", VAR_11, FUNC_1());

    VAR_11 = FUNC_6(VAR_8);
    FUNC_7(VAR_11, "InternetUnlockRequestFile failed: %u\n", FUNC_1());

    VAR_11 = FUNC_0(VAR_6);
    FUNC_7(VAR_11, "Deleting file returned %x(%u)\n", VAR_11, FUNC_1());
}
