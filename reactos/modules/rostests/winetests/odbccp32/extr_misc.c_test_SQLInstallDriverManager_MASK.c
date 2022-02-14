
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef scalar_t__ RETCODE ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,int*) ;
 scalar_t__ FUNC_1 (int,scalar_t__*,int *,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_5;
    RETCODE VAR_6;
    DWORD VAR_7;
    CHAR VAR_8[VAR_0];
    WORD VAR_9;


    VAR_5 = FUNC_0(((void*)0), 0, ((void*)0));
    VAR_6 = FUNC_1(1, &VAR_7, ((void*)0), 0, ((void*)0));
    FUNC_2(!VAR_5, "SQLInstallDriverManager unexpectedly succeeded\n");
    FUNC_2(VAR_6 == VAR_4 && VAR_7 == VAR_1,
        "Expected SQLInstallDriverManager to fail with ODBC_ERROR_INVALID_BUFF_LEN\n");


    VAR_5 = FUNC_0(VAR_8, VAR_0 / 2, ((void*)0));
    VAR_6 = FUNC_1(1, &VAR_7, ((void*)0), 0, ((void*)0));
    FUNC_2(!VAR_5, "SQLInstallDriverManager unexpectedly succeeded\n");
    FUNC_2(VAR_6 == VAR_4 && VAR_7 == VAR_1,
        "Expected SQLInstallDriverManager to fail with ODBC_ERROR_INVALID_BUFF_LEN\n");

    VAR_9 = 0xcafe;
    VAR_5 = FUNC_0(VAR_8, VAR_0 / 2, &VAR_9);
    VAR_6 = FUNC_1(1, &VAR_7, ((void*)0), 0, ((void*)0));
    FUNC_2(!VAR_5, "SQLInstallDriverManager unexpectedly succeeded\n");
    FUNC_2(VAR_6 == VAR_4 && VAR_7 == VAR_1,
        "Expected SQLInstallDriverManager to fail with ODBC_ERROR_INVALID_BUFF_LEN\n");
    FUNC_2(VAR_9 == 0xcafe, "Expected path_out to not have changed\n");


    VAR_5 = FUNC_0(VAR_8, VAR_0, ((void*)0));
    VAR_6 = FUNC_1(1, &VAR_7, ((void*)0), 0, ((void*)0));
    if(!VAR_5 && VAR_7 == VAR_2)
    {
         FUNC_3("not enough privileges\n");
         return;
    }
    FUNC_2(VAR_5, "SQLInstallDriverManager unexpectedly failed: %d\n",
        VAR_7);
    if (VAR_5)
        FUNC_2(VAR_6 == VAR_3, "Expected SQL_NO_DATA, got %d\n", VAR_6);
    else
        FUNC_2(VAR_6 == VAR_4,
            "Expected SQL_SUCCESS_WITH_INFO, got %d\n", VAR_6);

    VAR_9 = 0xcafe;
    VAR_5 = FUNC_0(VAR_8, VAR_0, &VAR_9);
    VAR_6 = FUNC_1(1, &VAR_7, ((void*)0), 0, ((void*)0));
    FUNC_2(VAR_5, "SQLInstallDriverManager unexpectedly failed: %d\n",
        VAR_7);
    if (VAR_5)
        FUNC_2(VAR_6 == VAR_3, "Expected SQL_NO_DATA, got %d\n", VAR_6);
    else
        FUNC_2(VAR_6 == VAR_4,
            "Expected SQL_SUCCESS_WITH_INFO, got %d\n", VAR_6);

    FUNC_2(VAR_9 != 0xcafe, "Expected path_out to show the correct amount of bytes\n");
}
