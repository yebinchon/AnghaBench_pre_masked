
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIHANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int VAR_7 ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (int ,char const*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int,char*,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    MSIHANDLE VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
    DWORD VAR_13, VAR_14;
    const char *VAR_15;
    UINT VAR_16;


    VAR_16 = FUNC_4(VAR_9, VAR_5, &VAR_10);
    FUNC_12(VAR_16 == VAR_2, "MsiOpenDatabase failed\n");


    VAR_15 = "CREATE TABLE `integers` ( "
            "`one` SHORT, `two` INT, `three` INTEGER, `four` LONG, "
            "`five` SHORT NOT NULL, `six` INT NOT NULL, "
            "`seven` INTEGER NOT NULL, `eight` LONG NOT NULL "
            "PRIMARY KEY `one`)";
    VAR_16 = FUNC_3(VAR_10, VAR_15, &VAR_11);
    FUNC_12(VAR_16 == VAR_2, "MsiDatabaseOpenView failed\n");
    VAR_16 = FUNC_8(VAR_11, 0);
    FUNC_12(VAR_16 == VAR_2, "MsiViewExecute failed\n");
    VAR_16 = FUNC_7(VAR_11);
    FUNC_12(VAR_16 == VAR_2, "MsiViewClose failed\n");
    VAR_16 = FUNC_1(VAR_11);
    FUNC_12(VAR_16 == VAR_2, "MsiCloseHandle failed\n");

    VAR_15 = "SELECT * FROM `integers`";
    VAR_16 = FUNC_3(VAR_10, VAR_15, &VAR_11);
    FUNC_12(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);

    VAR_16 = FUNC_9(VAR_11, VAR_3, &VAR_12);
    FUNC_12(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    VAR_13 = FUNC_5(VAR_12);
    FUNC_12(VAR_13 == 8, "Expected 8, got %d\n", VAR_13);
    FUNC_12(FUNC_10(VAR_12, 1, "one"), "Expected one\n");
    FUNC_12(FUNC_10(VAR_12, 2, "two"), "Expected two\n");
    FUNC_12(FUNC_10(VAR_12, 3, "three"), "Expected three\n");
    FUNC_12(FUNC_10(VAR_12, 4, "four"), "Expected four\n");
    FUNC_12(FUNC_10(VAR_12, 5, "five"), "Expected five\n");
    FUNC_12(FUNC_10(VAR_12, 6, "six"), "Expected six\n");
    FUNC_12(FUNC_10(VAR_12, 7, "seven"), "Expected seven\n");
    FUNC_12(FUNC_10(VAR_12, 8, "eight"), "Expected eight\n");
    FUNC_1(VAR_12);

    VAR_16 = FUNC_9(VAR_11, VAR_4, &VAR_12);
    FUNC_12(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    VAR_13 = FUNC_5(VAR_12);
    FUNC_12(VAR_13 == 8, "Expected 8, got %d\n", VAR_13);
    FUNC_12(FUNC_10(VAR_12, 1, "I2"), "Expected I2\n");
    FUNC_12(FUNC_10(VAR_12, 2, "I2"), "Expected I2\n");
    FUNC_12(FUNC_10(VAR_12, 3, "I2"), "Expected I2\n");
    FUNC_12(FUNC_10(VAR_12, 4, "I4"), "Expected I4\n");
    FUNC_12(FUNC_10(VAR_12, 5, "i2"), "Expected i2\n");
    FUNC_12(FUNC_10(VAR_12, 6, "i2"), "Expected i2\n");
    FUNC_12(FUNC_10(VAR_12, 7, "i2"), "Expected i2\n");
    FUNC_12(FUNC_10(VAR_12, 8, "i4"), "Expected i4\n");
    FUNC_1(VAR_12);

    FUNC_7(VAR_11);
    FUNC_1(VAR_11);


    VAR_15 = "INSERT INTO `integers` ( `one`, `two`, `three`, `four`, `five`, `six`, `seven`, `eight` )"
        "VALUES('', '', '', '', '', '', '', '')";
    VAR_16 = FUNC_3(VAR_10, VAR_15, &VAR_11);
    FUNC_12(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    VAR_16 = FUNC_8(VAR_11, 0);
    FUNC_12(VAR_16 == VAR_0, "Expected ERROR_FUNCTION_FAILED, got %d\n", VAR_16);

    FUNC_7(VAR_11);
    FUNC_1(VAR_11);

    VAR_15 = "SELECT * FROM `integers`";
    VAR_16 = FUNC_11(VAR_10, VAR_15, &VAR_12);
    FUNC_12(VAR_16 == VAR_1, "Expected ERROR_NO_MORE_ITEMS, got %d\n", VAR_16);

    VAR_16 = FUNC_5(VAR_12);
    FUNC_12(VAR_16 == -1, "record count wrong: %d\n", VAR_16);

    FUNC_1(VAR_12);


    VAR_15 = "INSERT INTO `integers` ( `one`, `two`, `three`, `four`, `five`, `six`, `seven`, `eight` )"
        "VALUES('', '2', '', '4', '5', '6', '7', '8')";
    VAR_16 = FUNC_3(VAR_10, VAR_15, &VAR_11);
    FUNC_12(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    VAR_16 = FUNC_8(VAR_11, 0);
    FUNC_12(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);

    VAR_15 = "SELECT * FROM `integers`";
    VAR_16 = FUNC_11(VAR_10, VAR_15, &VAR_12);
    FUNC_12(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);

    VAR_16 = FUNC_5(VAR_12);
    FUNC_12(VAR_16 == 8, "record count wrong: %d\n", VAR_16);

    VAR_14 = FUNC_6(VAR_12, 1);
    FUNC_12(VAR_14 == VAR_6, "Expected MSI_NULL_INTEGER, got %d\n", VAR_14);
    VAR_14 = FUNC_6(VAR_12, 3);
    FUNC_12(VAR_14 == VAR_6, "Expected MSI_NULL_INTEGER, got %d\n", VAR_14);
    VAR_14 = FUNC_6(VAR_12, 2);
    FUNC_12(VAR_14 == 2, "Expected 2, got %d\n", VAR_14);
    VAR_14 = FUNC_6(VAR_12, 4);
    FUNC_12(VAR_14 == 4, "Expected 4, got %d\n", VAR_14);
    VAR_14 = FUNC_6(VAR_12, 5);
    FUNC_12(VAR_14 == 5, "Expected 5, got %d\n", VAR_14);
    VAR_14 = FUNC_6(VAR_12, 6);
    FUNC_12(VAR_14 == 6, "Expected 6, got %d\n", VAR_14);
    VAR_14 = FUNC_6(VAR_12, 7);
    FUNC_12(VAR_14 == 7, "Expected 7, got %d\n", VAR_14);
    VAR_14 = FUNC_6(VAR_12, 8);
    FUNC_12(VAR_14 == 8, "Expected 8, got %d\n", VAR_14);

    FUNC_1(VAR_12);
    FUNC_7(VAR_11);
    FUNC_1(VAR_11);

    VAR_16 = FUNC_2(VAR_10);
    FUNC_12(VAR_16 == VAR_2, "MsiDatabaseCommit failed\n");

    VAR_16 = FUNC_1(VAR_10);
    FUNC_12(VAR_16 == VAR_2, "MsiCloseHandle failed\n");

    VAR_16 = FUNC_0(VAR_8);
    FUNC_12(VAR_16 == VAR_7, "file didn't exist after commit\n");
}
