
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef scalar_t__ MSICONDITION ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int ,int ,char const*) ;

__attribute__((used)) static void FUNC_6(void)
{
    MSICONDITION VAR_4;
    MSIHANDLE VAR_5 = 0;
    const char *VAR_6;
    UINT VAR_7;

    VAR_5 = FUNC_3();
    FUNC_4( VAR_5, "failed to create db\n");

    VAR_6 = "CREATE TABLE `T` ( `B` SHORT NOT NULL TEMPORARY, `C` CHAR(255) TEMPORARY PRIMARY KEY `C`) HOLD";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "failed to add table\n");

    VAR_4 = FUNC_2(VAR_5, "T");
    FUNC_4( VAR_4 == VAR_2, "wrong return condition\n");

    VAR_6 = "ALTER TABLE `T` HOLD";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "failed to hold table %d\n", VAR_7);

    VAR_6 = "ALTER TABLE `T` FREE";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "failed to free table\n");

    VAR_6 = "ALTER TABLE `T` FREE";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "failed to free table\n");

    VAR_6 = "ALTER TABLE `T` FREE";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "failed to free table\n");

    VAR_6 = "ALTER TABLE `T` HOLD";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "failed to hold table %d\n", VAR_7);


    VAR_6 = "SELECT * FROM `T`";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_7);


    VAR_6 = "CREATE TABLE `U` ( `A` INTEGER, `B` INTEGER PRIMARY KEY `B`)";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);


    VAR_6 = "ALTER TABLE `U` HOLD";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "failed to free table\n");


    VAR_6 = "ALTER TABLE `U` ADD `C`";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_7);

    VAR_6 = "ALTER TABLE `U` ADD `C` INTEGER";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);


    VAR_6 = "ALTER TABLE `U` ADD `C` INTEGER";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_7);

    VAR_6 = "ALTER TABLE `U` ADD `D` INTEGER TEMPORARY";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "INSERT INTO `U` ( `A`, `B`, `C`, `D` ) VALUES ( 1, 2, 3, 4 )";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "ALTER TABLE `U` ADD `D` INTEGER TEMPORARY HOLD";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_7);

    VAR_6 = "INSERT INTO `U` ( `A`, `B`, `C`, `D` ) VALUES ( 5, 6, 7, 8 )";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "SELECT * FROM `U` WHERE `D` = 8";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "ALTER TABLE `U` ADD `D` INTEGER TEMPORARY FREE";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_7);

    VAR_6 = "ALTER COLUMN `D` FREE";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_7);


    VAR_6 = "ALTER TABLE `U` FREE";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);


    VAR_6 = "SELECT * FROM `U`";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);


    VAR_6 = "SELECT * FROM `U` WHERE `D` = 8";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_7);

    VAR_6 = "INSERT INTO `U` ( `A`, `B`, `C`, `D` ) VALUES ( 9, 10, 11, 12 )";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_7);


    VAR_6 = "ALTER TABLE `U` ADD `E` INTEGER TEMPORARY HOLD";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);


    VAR_6 = "ALTER TABLE `U` HOLD";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "INSERT INTO `U` ( `A`, `B`, `C`, `E` ) VALUES ( 13, 14, 15, 16 )";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "SELECT * FROM `U` WHERE `E` = 16";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);


    VAR_6 = "ALTER TABLE `U` FREE";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "INSERT INTO `U` ( `A`, `B`, `C`, `E` ) VALUES ( 17, 18, 19, 20 )";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "SELECT * FROM `U` WHERE `E` = 20";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);


    VAR_6 = "ALTER TABLE `U` FREE";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);


    VAR_6 = "SELECT * FROM `U`";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);


    VAR_6 = "SELECT * FROM `U` WHERE `E` = 20";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_7);

    VAR_6 = "INSERT INTO `U` ( `A`, `B`, `C`, `E` ) VALUES ( 20, 21, 22, 23 )";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_0, "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_7);


    VAR_6 = "ALTER TABLE `U` FREE";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);


    VAR_6 = "SELECT * FROM `U`";
    VAR_7 = FUNC_5(VAR_5, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    FUNC_1( VAR_5 );
    FUNC_0(VAR_3);
}
