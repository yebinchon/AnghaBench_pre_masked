
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HINTERNET ;
typedef int DWORD ;
typedef char CHAR ;
typedef scalar_t__ BOOL ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,char*,int*) ;
 char* FUNC_1 () ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ,char*,int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(HINTERNET VAR_9, HINTERNET VAR_10)
{
    BOOL VAR_11;
    DWORD VAR_12 = VAR_7;
    CHAR VAR_13[VAR_7];

    if (!&FUNC_4)
    {
        FUNC_7("FtpCommandA() is not available. Skipping the Ftp get_current_dir tests\n");
        return;
    }


    VAR_11 = FUNC_4(VAR_9, VAR_5, VAR_6, "CWD pub/", 0, ((void*)0));
    if(VAR_11 == VAR_5)
    {
        FUNC_5("Failed to change directories in test_get_current_dir(HINTERNET hFtp).\n");
        return;
    }


    FUNC_2(0xdeadbeef);
    VAR_11 = FUNC_0( ((void*)0), ((void*)0), 0 );
    FUNC_3 ( VAR_11 == VAR_5, "Expected FtpGetCurrentDirectoryA to fail\n" );
    FUNC_3 ( FUNC_1() == VAR_2, "Expected ERROR_INVALID_HANDLE, got: %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_11 = FUNC_0( VAR_9, ((void*)0), 0 );
    FUNC_3 ( VAR_11 == VAR_5, "Expected FtpGetCurrentDirectoryA to fail\n" );
    FUNC_3 ( FUNC_1() == VAR_3, "Expected ERROR_INVALID_PARAMETER, got: %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_11 = FUNC_0( ((void*)0), VAR_13, &VAR_12 );
    FUNC_3 ( VAR_11 == VAR_5, "Expected FtpGetCurrentDirectoryA to fail\n" );
    FUNC_3 ( FUNC_1() == VAR_2, "Expected ERROR_INVALID_HANDLE, got: %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_11 = FUNC_0( VAR_9, VAR_13, 0 );
    FUNC_3 ( VAR_11 == VAR_5, "Expected FtpGetCurrentDirectoryA to fail\n" );
    FUNC_3 ( FUNC_1() == VAR_3, "Expected ERROR_INVALID_PARAMETER, got: %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_11 = FUNC_0( VAR_9, ((void*)0), &VAR_12 );
    FUNC_3 ( VAR_11 == VAR_5, "Expected FtpGetCurrentDirectoryA to fail\n" );
    FUNC_3 ( FUNC_1() == VAR_0, "Expected ERROR_INSUFFICIENT_BUFFER, got: %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_11 = FUNC_0( VAR_10, VAR_13, &VAR_12 );
    FUNC_3 ( VAR_11 == VAR_5, "Expected FtpGetCurrentDirectoryA to fail\n" );
    FUNC_3 ( FUNC_1() == VAR_1,
    "Expected ERROR_INTERNET_INCORRECT_HANDLE_TYPE, got: %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_11 = FUNC_0( VAR_9, VAR_13, &VAR_12 );
    FUNC_3 ( VAR_11 == VAR_8, "Expected FtpGetCurrentDirectoryA to pass\n" );
    FUNC_3 ( !FUNC_6(VAR_13, "/pub"), "Expected returned value \"%s\" to match \"/pub\"\n", VAR_13);
    FUNC_3 ( FUNC_1() == VAR_4, "Expected ERROR_SUCCESS, got: %d\n", FUNC_1());



    FUNC_2(0xdeadbeef);
    VAR_12 = 4;
    VAR_13[4] = 'a';
    VAR_11 = FUNC_0( VAR_9, VAR_13, &VAR_12 );
    FUNC_3 ( VAR_11 == VAR_5, "Expected FtpGetCurrentDirectoryA to fail\n");
    FUNC_3 ( FUNC_6(VAR_13, "/pub"), "Expected returned value \"%s\" to not match \"/pub\"\n", VAR_13);
    FUNC_3 ( FUNC_1() == VAR_0, "Expected ERROR_INSUFFICIENT_BUFFER, got: %d\n", FUNC_1());



    FUNC_2(0xdeadbeef);
    VAR_12 = 5;
    VAR_11 = FUNC_0( VAR_9, VAR_13, &VAR_12 );
    FUNC_3 ( VAR_11 == VAR_8, "Expected FtpGetCurrentDirectoryA to pass\n");
    FUNC_3 ( !FUNC_6(VAR_13, "/pub"), "Expected returned value \"%s\" to match \"/pub\"\n", VAR_13);
    FUNC_3 ( FUNC_1() == VAR_4, "Expected ERROR_SUCCESS, got: %d\n", FUNC_1());
}
