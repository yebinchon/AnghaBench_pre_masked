
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char const*,int*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int,char*,int*) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int,int) ;
 int FUNC_11 (int,int,char*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int,int*) ;
 int VAR_6 ;
 int FUNC_15 (int,char const*,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (int,char*,...) ;
 int FUNC_17 (char*,char*) ;

__attribute__((used)) static void FUNC_18(void)
{
    MSIHANDLE VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
    UINT VAR_13;
    const char *VAR_14;
    char VAR_15[80];
    DWORD VAR_16;

    FUNC_0(VAR_7);


    VAR_13 = FUNC_5(VAR_8, VAR_5, &VAR_9);
    FUNC_16(VAR_13 == VAR_3, "MsiOpenDatabase failed\n");


    VAR_14 = "CREATE TABLE `phone` ( "
            "`id` INT, `name` CHAR(32), `number` CHAR(32) "
            "PRIMARY KEY `id`)";
    VAR_13 = FUNC_4(VAR_9, VAR_14, &VAR_10);
    FUNC_16(VAR_13 == VAR_3, "MsiDatabaseOpenView failed\n");
    VAR_13 = FUNC_13(VAR_10, 0);
    FUNC_16(VAR_13 == VAR_3, "MsiViewExecute failed\n");
    VAR_13 = FUNC_12(VAR_10);
    FUNC_16(VAR_13 == VAR_3, "MsiViewClose failed\n");
    VAR_13 = FUNC_1(VAR_10);
    FUNC_16(VAR_13 == VAR_3, "MsiCloseHandle failed\n");

    VAR_14 = "SELECT * FROM phone WHERE number = '8675309'";
    VAR_13 = FUNC_4(VAR_9, VAR_14, &VAR_11);
    FUNC_16(VAR_13 == VAR_3, "MsiDatabaseOpenView failed\n");
    VAR_13 = FUNC_13(VAR_11, 0);
    FUNC_16(VAR_13 == VAR_3, "MsiViewExecute failed\n");
    VAR_13 = FUNC_14(VAR_11, &VAR_12);
    FUNC_16(VAR_13 == VAR_2, "MsiViewFetch produced items\n");


    VAR_14 = "INSERT INTO `phone` ( `id`, `name`, `number` )"
        "VALUES('1', 'Abe', '8675309')";
    VAR_13 = FUNC_4(VAR_9, VAR_14, &VAR_10);
    FUNC_16(VAR_13 == VAR_3, "MsiDatabaseOpenView failed\n");
    VAR_13 = FUNC_13(VAR_10, 0);
    FUNC_16(VAR_13 == VAR_3, "MsiViewExecute failed\n");
    VAR_13 = FUNC_12(VAR_10);
    FUNC_16(VAR_13 == VAR_3, "MsiViewClose failed\n");
    VAR_13 = FUNC_1(VAR_10);
    FUNC_16(VAR_13 == VAR_3, "MsiCloseHandle failed\n");

    VAR_13 = FUNC_14(VAR_11, &VAR_12);
    FUNC_16(VAR_13 == VAR_2, "MsiViewFetch produced items\n");
    VAR_13 = FUNC_13(VAR_11, 0);
    FUNC_16(VAR_13 == VAR_3, "MsiViewExecute failed\n");
    VAR_13 = FUNC_14(VAR_11, &VAR_12);
    FUNC_16(VAR_13 == VAR_3, "MsiViewFetch failed: %u\n", VAR_13);

    VAR_13 = FUNC_1(VAR_12);
    FUNC_16(VAR_13 == VAR_3, "MsiCloseHandle failed\n");
    VAR_13 = FUNC_12(VAR_11);
    FUNC_16(VAR_13 == VAR_3, "MsiViewClose failed\n");
    VAR_13 = FUNC_1(VAR_11);
    FUNC_16(VAR_13 == VAR_3, "MsiCloseHandle failed\n");

    VAR_14 = "SELECT * FROM `phone` WHERE `id` = 1";
    VAR_13 = FUNC_15(VAR_9, VAR_14, &VAR_12);
    FUNC_16(VAR_13 == VAR_3, "MsiViewFetch failed\n");


    VAR_13 = FUNC_6(VAR_12);
    FUNC_16(VAR_13 == 3, "record count wrong\n");

    VAR_13 = FUNC_9(VAR_12, 0);
    FUNC_16(VAR_13 == VAR_4, "field 0 not null\n");

    VAR_13 = FUNC_7(VAR_12, 1);
    FUNC_16(VAR_13 == 1, "field 1 contents wrong\n");
    VAR_16 = sizeof VAR_15;
    VAR_13 = FUNC_8(VAR_12, 2, VAR_15, &VAR_16);
    FUNC_16(VAR_13 == VAR_3, "field 2 content fetch failed\n");
    FUNC_16(!FUNC_17(VAR_15,"Abe"), "field 2 content incorrect\n");
    VAR_16 = sizeof VAR_15;
    VAR_13 = FUNC_8(VAR_12, 3, VAR_15, &VAR_16);
    FUNC_16(VAR_13 == VAR_3, "field 3 content fetch failed\n");
    FUNC_16(!FUNC_17(VAR_15,"8675309"), "field 3 content incorrect\n");

    VAR_13 = FUNC_1(VAR_12);
    FUNC_16(VAR_13 == VAR_3, "MsiCloseHandle failed\n");


    VAR_12 = 100;
    VAR_14 = "SELECT * FROM `phone` WHERE `id` >= 10";
    VAR_13 = FUNC_15(VAR_9, VAR_14, &VAR_12);
    FUNC_16(VAR_13 == VAR_2, "MsiViewFetch failed\n");
    FUNC_16(VAR_12 == 0, "hrec should be null\n");

    VAR_13 = FUNC_1(VAR_12);
    FUNC_16(VAR_13 == VAR_3, "MsiCloseHandle failed\n");

    VAR_14 = "SELECT * FROM `phone` WHERE `id` < 0";
    VAR_13 = FUNC_15(VAR_9, VAR_14, &VAR_12);
    FUNC_16(VAR_13 == VAR_2, "MsiViewFetch failed\n");

    VAR_14 = "SELECT * FROM `phone` WHERE `id` <= 0";
    VAR_13 = FUNC_15(VAR_9, VAR_14, &VAR_12);
    FUNC_16(VAR_13 == VAR_2, "MsiViewFetch failed\n");

    VAR_14 = "SELECT * FROM `phone` WHERE `id` <> 1";
    VAR_13 = FUNC_15(VAR_9, VAR_14, &VAR_12);
    FUNC_16(VAR_13 == VAR_2, "MsiViewFetch failed\n");

    VAR_14 = "SELECT * FROM `phone` WHERE `id` > 10";
    VAR_13 = FUNC_15(VAR_9, VAR_14, &VAR_12);
    FUNC_16(VAR_13 == VAR_2, "MsiViewFetch failed\n");


    VAR_14 = "INSERT INTO `phone` ( `id`, `name`, `number` )"
        "VALUES(?, ?)";
    VAR_13 = FUNC_4(VAR_9, VAR_14, &VAR_10);
    FUNC_16(VAR_13 == VAR_0, "MsiDatabaseOpenView failed\n");


    VAR_12 = FUNC_2(4);
    VAR_13 = FUNC_10(VAR_12, 1, 2);
    FUNC_16(VAR_13 == VAR_3, "MsiRecordSetInteger failed\n");
    VAR_13 = FUNC_11(VAR_12, 2, "Adam");
    FUNC_16(VAR_13 == VAR_3, "MsiRecordSetString failed\n");
    VAR_13 = FUNC_11(VAR_12, 3, "96905305");
    FUNC_16(VAR_13 == VAR_3, "MsiRecordSetString failed\n");


    VAR_14 = "INSERT INTO `phone` ( `id`, `name`, `number` )"
        "VALUES(?, ?, ?)";
    VAR_13 = FUNC_4(VAR_9, VAR_14, &VAR_10);
    FUNC_16(VAR_13 == VAR_3, "MsiDatabaseOpenView failed\n");

    if (VAR_13 == VAR_3)
    {
        VAR_13 = FUNC_13(VAR_10, VAR_12);
        FUNC_16(VAR_13 == VAR_3, "MsiViewExecute failed\n");
        VAR_13 = FUNC_12(VAR_10);
        FUNC_16(VAR_13 == VAR_3, "MsiViewClose failed\n");
        VAR_13 = FUNC_1(VAR_10);
        FUNC_16(VAR_13 == VAR_3, "MsiCloseHandle failed\n");
    }
    VAR_13 = FUNC_1(VAR_12);
    FUNC_16(VAR_13 == VAR_3, "MsiCloseHandle failed\n");

    VAR_13 = FUNC_14(0, ((void*)0));
    FUNC_16(VAR_13 == VAR_1, "MsiViewFetch failed\n");

    VAR_13 = FUNC_3(VAR_9);
    FUNC_16(VAR_13 == VAR_3, "MsiDatabaseCommit failed\n");

    VAR_13 = FUNC_1(VAR_9);
    FUNC_16(VAR_13 == VAR_3, "MsiCloseHandle failed\n");

    VAR_13 = FUNC_0(VAR_7);
    FUNC_16(VAR_13 == VAR_6, "file didn't exist after commit\n");
}
