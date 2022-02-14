
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ MSIHANDLE ;
typedef char* LPCSTR ;
typedef int DWORD ;
typedef int CHAR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,char*,scalar_t__*) ;
 int FUNC_4 (scalar_t__,char*,scalar_t__*) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int,int *,int*) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,int,int) ;
 int FUNC_10 (scalar_t__,int,char*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (scalar_t__,scalar_t__*) ;
 int VAR_6 ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (int,char*,...) ;

__attribute__((used)) static void FUNC_17(void)
{
    MSIHANDLE VAR_9, VAR_10, VAR_11;
    CHAR VAR_12[VAR_3];
    LPCSTR VAR_13;
    DWORD VAR_14;
    UINT VAR_15;

    VAR_11 = FUNC_2(1);
    FUNC_16(VAR_11 != 0, "Expected a valid handle\n");

    VAR_15 = FUNC_6(VAR_11, 0);
    FUNC_16(VAR_15 == VAR_5, "Expected MSI_NULL_INTEGER, got %d\n", VAR_15);

    VAR_14 = VAR_3;
    FUNC_15(VAR_12, "apple");
    VAR_15 = FUNC_7(VAR_11, 0, VAR_12, &VAR_14);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_16(!FUNC_14(VAR_12, ""), "Expected \"\", got \"%s\"\n", VAR_12);
    FUNC_16(VAR_14 == 0, "Expected 0, got %d\n", VAR_14);

    VAR_15 = FUNC_8(VAR_11, 0);
    FUNC_16(VAR_15 == VAR_6, "Expected TRUE, got %d\n", VAR_15);

    VAR_15 = FUNC_6(VAR_11, 1);
    FUNC_16(VAR_15 == VAR_5, "Expected MSI_NULL_INTEGER, got %d\n", VAR_15);

    VAR_15 = FUNC_9(VAR_11, 1, 42);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);

    VAR_15 = FUNC_6(VAR_11, 0);
    FUNC_16(VAR_15 == VAR_5, "Expected MSI_NULL_INTEGER, got %d\n", VAR_15);

    VAR_14 = VAR_3;
    FUNC_15(VAR_12, "apple");
    VAR_15 = FUNC_7(VAR_11, 0, VAR_12, &VAR_14);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_16(!FUNC_14(VAR_12, ""), "Expected \"\", got \"%s\"\n", VAR_12);
    FUNC_16(VAR_14 == 0, "Expected 0, got %d\n", VAR_14);

    VAR_15 = FUNC_8(VAR_11, 0);
    FUNC_16(VAR_15 == VAR_6, "Expected TRUE, got %d\n", VAR_15);

    VAR_15 = FUNC_6(VAR_11, 1);
    FUNC_16(VAR_15 == 42, "Expected 42, got %d\n", VAR_15);

    VAR_15 = FUNC_10(VAR_11, 1, "bologna");
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);

    VAR_15 = FUNC_6(VAR_11, 0);
    FUNC_16(VAR_15 == VAR_5, "Expected MSI_NULL_INTEGER, got %d\n", VAR_15);

    VAR_14 = VAR_3;
    FUNC_15(VAR_12, "apple");
    VAR_15 = FUNC_7(VAR_11, 0, VAR_12, &VAR_14);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_16(!FUNC_14(VAR_12, ""), "Expected \"\", got \"%s\"\n", VAR_12);
    FUNC_16(VAR_14 == 0, "Expected 0, got %d\n", VAR_14);

    VAR_15 = FUNC_8(VAR_11, 0);
    FUNC_16(VAR_15 == VAR_6, "Expected TRUE, got %d\n", VAR_15);

    VAR_14 = VAR_3;
    FUNC_15(VAR_12, "apple");
    VAR_15 = FUNC_7(VAR_11, 1, VAR_12, &VAR_14);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_16(!FUNC_14(VAR_12, "bologna"), "Expected \"bologna\", got \"%s\"\n", VAR_12);
    FUNC_16(VAR_14 == 7, "Expected 7, got %d\n", VAR_14);

    FUNC_1(VAR_11);

    VAR_15 = FUNC_5(VAR_8, VAR_4, &VAR_9);
    FUNC_16(VAR_15 == VAR_1, "MsiOpenDatabase failed\n");

    VAR_13 = "CREATE TABLE `drone` ( "
           "`id` INT, `name` CHAR(32), `number` CHAR(32) "
           "PRIMARY KEY `id`)";
    VAR_15 = FUNC_4(VAR_9, VAR_13, &VAR_10);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    VAR_15 = FUNC_12(VAR_10, 0);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    VAR_15 = FUNC_11(VAR_10);
    FUNC_16(VAR_15 == VAR_1, "MsiViewClose failed\n");
    VAR_15 = FUNC_1(VAR_10);
    FUNC_16(VAR_15 == VAR_1, "MsiCloseHandle failed\n");

    VAR_13 = "INSERT INTO `drone` ( `id`, `name`, `number` )"
           "VALUES('1', 'Abe', '8675309')";
    VAR_15 = FUNC_4(VAR_9, VAR_13, &VAR_10);
    FUNC_16(VAR_15 == VAR_1, "MsiDatabaseOpenView failed\n");
    VAR_15 = FUNC_12(VAR_10, 0);
    FUNC_16(VAR_15 == VAR_1, "MsiViewExecute failed\n");
    VAR_15 = FUNC_11(VAR_10);
    FUNC_16(VAR_15 == VAR_1, "MsiViewClose failed\n");
    VAR_15 = FUNC_1(VAR_10);
    FUNC_16(VAR_15 == VAR_1, "MsiCloseHandle failed\n");

    VAR_15 = FUNC_3(VAR_9, "drone", &VAR_11);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);

    VAR_15 = FUNC_6(VAR_11, 0);
    FUNC_16(VAR_15 == VAR_5, "Expected MSI_NULL_INTEGER, got %d\n", VAR_15);

    VAR_14 = VAR_3;
    FUNC_15(VAR_12, "apple");
    VAR_15 = FUNC_7(VAR_11, 0, VAR_12, &VAR_14);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_16(!FUNC_14(VAR_12, "drone"), "Expected \"drone\", got \"%s\"\n", VAR_12);
    FUNC_16(VAR_14 == 5, "Expected 5, got %d\n", VAR_14);

    VAR_15 = FUNC_8(VAR_11, 0);
    FUNC_16(VAR_15 == VAR_2, "Expected FALSE, got %d\n", VAR_15);

    FUNC_1(VAR_11);

    VAR_15 = FUNC_3(VAR_9, "nosuchtable", &VAR_11);
    FUNC_16(VAR_15 == VAR_0, "Expected ERROR_INVALID_TABLE, got %d\n", VAR_15);

    VAR_13 = "SELECT * FROM `drone` WHERE `id` = 1";
    VAR_15 = FUNC_4(VAR_9, VAR_13, &VAR_10);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    VAR_15 = FUNC_12(VAR_10, 0);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    VAR_15 = FUNC_13(VAR_10, &VAR_11);
    FUNC_16(VAR_15 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_15);

    VAR_15 = FUNC_6(VAR_11, 0);
    FUNC_16(VAR_15 != VAR_5 && VAR_15 != 0, "Expected non-NULL value, got %d\n", VAR_15);

    VAR_15 = FUNC_8(VAR_11, 0);
    FUNC_16(VAR_15 == VAR_2, "Expected FALSE, got %d\n", VAR_15);

    VAR_15 = FUNC_1(VAR_10);
    FUNC_16(VAR_15 == VAR_1, "MsiCloseHandle failed\n");
    FUNC_1(VAR_11);
    FUNC_1(VAR_9);
    FUNC_0(VAR_7);
}
