
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int DWORD ;
typedef int CHAR ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int *,int*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int ,char*,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,char*) ;
 int VAR_4 ;
 int FUNC_14 (int,char*,...) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void FUNC_17(void)
{
    MSIHANDLE VAR_5, VAR_6;
    CHAR VAR_7[VAR_3];
    DWORD VAR_8 = VAR_3;
    UINT VAR_9;

    VAR_5 = FUNC_10();
    FUNC_14(VAR_5, "failed to create package database\n");

    FUNC_8(VAR_5);
    FUNC_5(VAR_5, "'CCP_random'");
    FUNC_5(VAR_5, "'RMCCP_random'");

    FUNC_11(VAR_5);
    FUNC_7(VAR_5, "CCP_random", 0, "htmlfile\\shell\\open\\nonexistent", "", 1);

    FUNC_9(VAR_5);
    FUNC_6(VAR_5, "'RMCCP_random', '', 'C:\\', '0'");

    FUNC_12(VAR_5);

    VAR_9 = FUNC_15(VAR_5, &VAR_6);
    if (VAR_9 == VAR_0)
    {
        FUNC_16("Not enough rights to perform tests\n");
        FUNC_0(VAR_4);
        return;
    }
    FUNC_14(VAR_9 == VAR_1, "failed to create package %u\n", VAR_9);

    FUNC_1(VAR_5);

    FUNC_4(VAR_2, ((void*)0));

    VAR_9 = FUNC_2(VAR_6, "CCPSearch");
    FUNC_14(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_9 = FUNC_3(VAR_6, "CCP_Success", VAR_7, &VAR_8);
    FUNC_14(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    FUNC_14(!FUNC_13(VAR_7, "1"), "Expected 1, got %s\n", VAR_7);

    FUNC_1(VAR_6);
    FUNC_0(VAR_4);
}
