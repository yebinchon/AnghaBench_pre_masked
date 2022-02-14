
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef scalar_t__ MSICONDITION ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int,char const*,int*) ;
 scalar_t__ FUNC_4 (int,int,char*,int*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int ,int*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int,char*,int*) ;
 int VAR_9 ;
 int FUNC_9 (int,char*,...) ;
 scalar_t__ FUNC_10 (int,int ,char const*) ;
 scalar_t__ FUNC_11 (char*,char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    MSICONDITION VAR_10;
    MSIHANDLE VAR_11 = 0, VAR_12 = 0, VAR_13;
    const char *VAR_14;
    UINT VAR_15;
    char VAR_16[0x10];
    DWORD VAR_17;

    VAR_10 = FUNC_2(0, ((void*)0));
    FUNC_9( VAR_10 == VAR_5, "wrong return condition\n");

    VAR_11 = FUNC_7();
    FUNC_9( VAR_11, "failed to create db\n");

    VAR_10 = FUNC_2(VAR_11, ((void*)0));
    FUNC_9( VAR_10 == VAR_5, "wrong return condition\n");

    VAR_10 = FUNC_2(VAR_11, "_Tables");
    FUNC_9( VAR_10 == VAR_7, "wrong return condition\n");

    VAR_10 = FUNC_2(VAR_11, "_Columns");
    FUNC_9( VAR_10 == VAR_7, "wrong return condition\n");

    VAR_10 = FUNC_2(VAR_11, "_Storages");
    FUNC_9( VAR_10 == VAR_7, "wrong return condition\n");

    VAR_10 = FUNC_2(VAR_11, "_Streams");
    FUNC_9( VAR_10 == VAR_7, "wrong return condition\n");

    VAR_14 = "CREATE TABLE `P` ( `B` SHORT NOT NULL, `C` CHAR(255) PRIMARY KEY `C`)";
    VAR_15 = FUNC_10(VAR_11, 0, VAR_14);
    FUNC_9(VAR_15 == VAR_3, "failed to add table\n");

    VAR_10 = FUNC_2(VAR_11, "P");
    FUNC_9( VAR_10 == VAR_8, "wrong return condition\n");

    VAR_14 = "CREATE TABLE `P2` ( `B` SHORT NOT NULL, `C` CHAR(255) PRIMARY KEY `C`) HOLD";
    VAR_15 = FUNC_10(VAR_11, 0, VAR_14);
    FUNC_9(VAR_15 == VAR_3, "failed to add table\n");

    VAR_10 = FUNC_2(VAR_11, "P2");
    FUNC_9( VAR_10 == VAR_8, "wrong return condition\n");

    VAR_14 = "CREATE TABLE `T` ( `B` SHORT NOT NULL TEMPORARY, `C` CHAR(255) TEMPORARY PRIMARY KEY `C`) HOLD";
    VAR_15 = FUNC_10(VAR_11, 0, VAR_14);
    FUNC_9(VAR_15 == VAR_3, "failed to add table\n");

    VAR_10 = FUNC_2(VAR_11, "T");
    FUNC_9( VAR_10 == VAR_6, "wrong return condition\n");

    VAR_14 = "CREATE TABLE `T2` ( `B` SHORT NOT NULL TEMPORARY, `C` CHAR(255) TEMPORARY PRIMARY KEY `C`)";
    VAR_15 = FUNC_10(VAR_11, 0, VAR_14);
    FUNC_9(VAR_15 == VAR_3, "failed to add table\n");

    VAR_14 = "SELECT * FROM `T2`";
    VAR_15 = FUNC_3(VAR_11, VAR_14, &VAR_12);
    FUNC_9(VAR_15 == VAR_0,
       "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_15);

    VAR_10 = FUNC_2(VAR_11, "T2");
    FUNC_9( VAR_10 == VAR_7, "wrong return condition\n");

    VAR_14 = "CREATE TABLE `T3` ( `B` SHORT NOT NULL TEMPORARY, `C` CHAR(255) PRIMARY KEY `C`)";
    VAR_15 = FUNC_10(VAR_11, 0, VAR_14);
    FUNC_9(VAR_15 == VAR_3, "failed to add table\n");

    VAR_10 = FUNC_2(VAR_11, "T3");
    FUNC_9( VAR_10 == VAR_8, "wrong return condition\n");

    VAR_14 = "CREATE TABLE `T4` ( `B` SHORT NOT NULL, `C` CHAR(255) TEMPORARY PRIMARY KEY `C`)";
    VAR_15 = FUNC_10(VAR_11, 0, VAR_14);
    FUNC_9(VAR_15 == VAR_1, "failed to add table\n");

    VAR_10 = FUNC_2(VAR_11, "T4");
    FUNC_9( VAR_10 == VAR_7, "wrong return condition\n");

    VAR_14 = "CREATE TABLE `T5` ( `B` SHORT NOT NULL TEMP, `C` CHAR(255) TEMP PRIMARY KEY `C`) HOLD";
    VAR_15 = FUNC_10(VAR_11, 0, VAR_14);
    FUNC_9(VAR_15 == VAR_0, "failed to add table\n");

    VAR_14 = "select * from `T`";
    VAR_15 = FUNC_3(VAR_11, VAR_14, &VAR_12);
    FUNC_9(VAR_15 == VAR_3, "failed to query table\n");
    VAR_15 = FUNC_6(VAR_12, VAR_4, &VAR_13);
    FUNC_9(VAR_15 == VAR_3, "failed to get column info\n");

    VAR_17 = sizeof VAR_16;
    VAR_15 = FUNC_4(VAR_13, 1, VAR_16, &VAR_17);
    FUNC_9(VAR_15 == VAR_3, "failed to get string\n");
    FUNC_9( 0 == FUNC_11("G255", VAR_16), "wrong column type\n");

    VAR_17 = sizeof VAR_16;
    VAR_15 = FUNC_4(VAR_13, 2, VAR_16, &VAR_17);
    FUNC_9(VAR_15 == VAR_3, "failed to get string\n");
    FUNC_9( 0 == FUNC_11("j2", VAR_16), "wrong column type\n");

    FUNC_1( VAR_13 );
    FUNC_5( VAR_12 );
    FUNC_1( VAR_12 );


    VAR_13 = 0;
    VAR_15 = FUNC_8(VAR_11, "select * from `_Tables` where `Name` = 'T'", &VAR_13);
    FUNC_9( VAR_15 == VAR_3, "temporary table exists in _Tables\n");
    FUNC_1( VAR_13 );


    VAR_13 = 0;
    VAR_15 = FUNC_8(VAR_11, "select * from `_Columns` where `Table` = 'T' AND `Name` = 'B'", &VAR_13);
    FUNC_9( VAR_15 == VAR_2, "temporary table exists in _Columns\n");
    if (VAR_13) FUNC_1( VAR_13 );

    VAR_15 = FUNC_8(VAR_11, "select * from `_Columns` where `Table` = 'T' AND `Name` = 'C'", &VAR_13);
    FUNC_9( VAR_15 == VAR_2, "temporary table exists in _Columns\n");
    if (VAR_13) FUNC_1( VAR_13 );

    FUNC_1( VAR_11 );
    FUNC_0(VAR_9);
}
