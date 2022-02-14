
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ MSIHANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,char const*,scalar_t__*) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__*) ;
 int FUNC_10 (scalar_t__,int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (scalar_t__,int ,char const*) ;

__attribute__((used)) static void FUNC_13(void)
{
    MSIHANDLE VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
    const char *VAR_9;
    UINT VAR_10;


    FUNC_0(VAR_4);

    VAR_10 = FUNC_4(VAR_5, VAR_2, &VAR_6);
    FUNC_11(VAR_10 == VAR_1, "MsiOpenDatabase failed\n");

    VAR_9 = "CREATE TABLE `table` (`A` INT, `B` INT PRIMARY KEY `A`)";
    VAR_10 = FUNC_12( VAR_6, 0, VAR_9 );
    FUNC_11(VAR_10 == VAR_1, "query failed\n");


    VAR_9 = "SELECT * FROM `table`";
    VAR_10 = FUNC_3(VAR_6, VAR_9, &VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiDatabaseOpenView failed\n");
    VAR_10 = FUNC_8(VAR_7, 0);
    FUNC_11(VAR_10 == VAR_1, "MsiViewExecute failed\n");

    VAR_8 = FUNC_2(2);
    FUNC_11(VAR_8 != 0, "MsiCreateRecord failed\n");

    VAR_10 = FUNC_6(VAR_8, 1, 1);
    FUNC_11(VAR_10 == VAR_1, "failed to set integer\n");
    VAR_10 = FUNC_6(VAR_8, 2, 2);
    FUNC_11(VAR_10 == VAR_1, "failed to set integer\n");

    VAR_10 = FUNC_10(VAR_7, VAR_3, VAR_8);
    FUNC_11(VAR_10 == VAR_1, "MsiViewModify failed: %d\n", VAR_10);

    VAR_10 = FUNC_1(VAR_8);
    FUNC_11(VAR_10 == VAR_1, "failed to close record\n");

    VAR_10 = FUNC_7(VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiViewClose failed\n");
    VAR_10 = FUNC_1(VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiCloseHandle failed\n");

    VAR_9 = "SELECT * FROM `table`";
    VAR_10 = FUNC_3(VAR_6, VAR_9, &VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiDatabaseOpenView failed\n");
    VAR_10 = FUNC_8(VAR_7, 0);
    FUNC_11(VAR_10 == VAR_1, "MsiViewExecute failed\n");
    VAR_10 = FUNC_9(VAR_7, &VAR_8);
    FUNC_11(VAR_10 == VAR_1, "MsiViewFetch failed\n");

    VAR_10 = FUNC_5(VAR_8, 1);
    FUNC_11(VAR_10 == 1, "Expected 1, got %d\n", VAR_10);
    VAR_10 = FUNC_5(VAR_8, 2);
    FUNC_11(VAR_10 == 2, "Expected 2, got %d\n", VAR_10);

    VAR_10 = FUNC_1(VAR_8);
    FUNC_11(VAR_10 == VAR_1, "failed to close record\n");

    VAR_10 = FUNC_9(VAR_7, &VAR_8);
    FUNC_11(VAR_10 == VAR_0, "Expected ERROR_NO_MORE_ITEMS, got %d\n", VAR_10);

    VAR_10 = FUNC_7(VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiViewClose failed\n");
    VAR_10 = FUNC_1(VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiCloseHandle failed\n");


    VAR_9 = "SELECT * FROM `table`";
    VAR_10 = FUNC_3(VAR_6, VAR_9, &VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiDatabaseOpenView failed\n");
    VAR_10 = FUNC_8(VAR_7, 0);
    FUNC_11(VAR_10 == VAR_1, "MsiViewExecute failed\n");

    VAR_8 = FUNC_2(2);
    FUNC_11(VAR_8 != 0, "MsiCreateRecord failed\n");

    VAR_10 = FUNC_6(VAR_8, 1, 1);
    FUNC_11(VAR_10 == VAR_1, "failed to set integer\n");
    VAR_10 = FUNC_6(VAR_8, 2, 4);
    FUNC_11(VAR_10 == VAR_1, "failed to set integer\n");

    VAR_10 = FUNC_10(VAR_7, VAR_3, VAR_8);
    FUNC_11(VAR_10 == VAR_1, "MsiViewModify failed: %d\n", VAR_10);

    VAR_10 = FUNC_1(VAR_8);
    FUNC_11(VAR_10 == VAR_1, "failed to close record\n");

    VAR_10 = FUNC_7(VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiViewClose failed\n");
    VAR_10 = FUNC_1(VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiCloseHandle failed\n");

    VAR_9 = "SELECT * FROM `table`";
    VAR_10 = FUNC_3(VAR_6, VAR_9, &VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiDatabaseOpenView failed\n");
    VAR_10 = FUNC_8(VAR_7, 0);
    FUNC_11(VAR_10 == VAR_1, "MsiViewExecute failed\n");
    VAR_10 = FUNC_9(VAR_7, &VAR_8);
    FUNC_11(VAR_10 == VAR_1, "MsiViewFetch failed\n");

    VAR_10 = FUNC_5(VAR_8, 1);
    FUNC_11(VAR_10 == 1, "Expected 1, got %d\n", VAR_10);
    VAR_10 = FUNC_5(VAR_8, 2);
    FUNC_11(VAR_10 == 4, "Expected 4, got %d\n", VAR_10);

    VAR_10 = FUNC_1(VAR_8);
    FUNC_11(VAR_10 == VAR_1, "failed to close record\n");

    VAR_10 = FUNC_9(VAR_7, &VAR_8);
    FUNC_11(VAR_10 == VAR_0, "Expected ERROR_NO_MORE_ITEMS, got %d\n", VAR_10);

    VAR_10 = FUNC_7(VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiViewClose failed\n");
    VAR_10 = FUNC_1(VAR_7);
    FUNC_11(VAR_10 == VAR_1, "MsiCloseHandle failed\n");


    VAR_10 = FUNC_1( VAR_6 );
    FUNC_11(VAR_10 == VAR_1, "MsiOpenDatabase close failed\n");
}
