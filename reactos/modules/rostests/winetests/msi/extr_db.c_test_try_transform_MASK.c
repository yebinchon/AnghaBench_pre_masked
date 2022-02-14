
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ MSIHANDLE ;
typedef char* LPCSTR ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,char*,scalar_t__*) ;
 int FUNC_6 (scalar_t__,char*,char*,int*) ;
 int FUNC_7 (int ,int ,scalar_t__*) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int,char*,int*) ;
 int FUNC_10 (scalar_t__,int,char*,int*) ;
 int FUNC_11 (scalar_t__,int,int) ;
 int FUNC_12 (scalar_t__,int,char*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__,char*,scalar_t__*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (char*,char*,int) ;
 char* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_22 (int,char*,...) ;
 int FUNC_23 (scalar_t__,scalar_t__*) ;
 int FUNC_24 (scalar_t__,scalar_t__,char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,char*,int) ;

__attribute__((used)) static void FUNC_27(void)
{
    MSIHANDLE VAR_8, VAR_9, VAR_10, VAR_11 = 0;
    LPCSTR VAR_12;
    UINT VAR_13;
    DWORD VAR_14;
    char VAR_15[VAR_3];

    FUNC_0(VAR_5);
    FUNC_0(VAR_7);


    VAR_8 = FUNC_16(VAR_6);
    FUNC_22(VAR_8, "Failed to create package db\n");

    VAR_12 = "CREATE TABLE `MOO` ( `NOO` SHORT NOT NULL, `OOO` CHAR(255) PRIMARY KEY `NOO`)";
    VAR_13 = FUNC_24(VAR_8, 0, VAR_12);
    FUNC_22(VAR_13 == VAR_2, "failed to add table\n");

    VAR_12 = "INSERT INTO `MOO` ( `NOO`, `OOO` ) VALUES ( 1, 'a' )";
    VAR_13 = FUNC_24(VAR_8, 0, VAR_12);
    FUNC_22(VAR_13 == VAR_2, "failed to add row\n");

    VAR_12 = "INSERT INTO `MOO` ( `NOO`, `OOO` ) VALUES ( 2, 'b' )";
    VAR_13 = FUNC_24(VAR_8, 0, VAR_12);
    FUNC_22(VAR_13 == VAR_2, "failed to add row\n");

    VAR_12 = "INSERT INTO `MOO` ( `NOO`, `OOO` ) VALUES ( 3, 'c' )";
    VAR_13 = FUNC_24(VAR_8, 0, VAR_12);
    FUNC_22(VAR_13 == VAR_2, "failed to add row\n");

    VAR_12 = "CREATE TABLE `BINARY` ( `ID` SHORT NOT NULL, `BLOB` OBJECT PRIMARY KEY `ID`)";
    VAR_13 = FUNC_24(VAR_8, 0, VAR_12);
    FUNC_22(VAR_13 == VAR_2, "failed to add table\n");

    VAR_10 = FUNC_2(2);
    VAR_13 = FUNC_11(VAR_10, 1, 2);
    FUNC_22(VAR_13 == VAR_2, "failed to set integer\n");

    FUNC_26("testdata.bin", "lamyon", 6);
    VAR_13 = FUNC_12(VAR_10, 2, "testdata.bin");
    FUNC_22(VAR_13 == VAR_2, "failed to set stream\n");

    VAR_12 = "INSERT INTO `BINARY` ( `ID`, `BLOB` ) VALUES ( ?, ? )";
    VAR_13 = FUNC_24(VAR_8, VAR_10, VAR_12);
    FUNC_22(VAR_13 == VAR_2, "failed to add row with blob\n");

    FUNC_1(VAR_10);

    VAR_13 = FUNC_4( VAR_8 );
    FUNC_22( VAR_13 == VAR_2 , "Failed to commit database\n" );

    FUNC_1( VAR_8 );
    FUNC_0("testdata.bin");






    if (0)
        FUNC_18();
    else
        FUNC_19();

    VAR_13 = FUNC_7(VAR_6, VAR_4, &VAR_8 );
    FUNC_22( VAR_13 == VAR_2 , "Failed to create database\n" );

    VAR_13 = FUNC_3( VAR_8, VAR_7, 0 );
    FUNC_22( VAR_13 == VAR_2, "return code %d, should be ERROR_SUCCESS\n", VAR_13 );

    VAR_13 = FUNC_4( VAR_8 );
    FUNC_22( VAR_13 == VAR_2 , "Failed to commit database\n" );


    VAR_10 = 0;
    VAR_12 = "select `BAR`,`CAR` from `AAR` where `BAR` = 1 AND `CAR` = 'vw'";
    VAR_13 = FUNC_17(VAR_8, VAR_12, &VAR_10);
    FUNC_22(VAR_13 == VAR_2, "select query failed\n");
    FUNC_1(VAR_10);

    VAR_12 = "select `BAR`,`CAR` from `AAR` where `BAR` = 2 AND `CAR` = 'bmw'";
    VAR_10 = 0;
    VAR_13 = FUNC_17(VAR_8, VAR_12, &VAR_10);
    FUNC_22(VAR_13 == VAR_2, "select query failed\n");
    FUNC_1(VAR_10);


    VAR_10 = 0;
    VAR_12 = "select `NOO`,`OOO` from `MOO` where `NOO` = 1 AND `OOO` = 'c'";
    VAR_13 = FUNC_17(VAR_8, VAR_12, &VAR_10);
    FUNC_22(VAR_13 == VAR_2, "select query failed\n");
    FUNC_1(VAR_10);


    VAR_10 = 0;
    VAR_12 = "select `NOO`,`OOO` from `MOO` where `NOO` = 2 AND `OOO` = 'b'";
    VAR_13 = FUNC_17(VAR_8, VAR_12, &VAR_10);
    FUNC_22(VAR_13 == VAR_2, "select query failed\n");
    FUNC_1(VAR_10);


    VAR_10 = 0;
    VAR_12 = "select * from `MOO` where `NOO` = 3";
    VAR_13 = FUNC_17(VAR_8, VAR_12, &VAR_10);
    FUNC_22(VAR_13 == VAR_1, "select query failed\n");
    if (VAR_10) FUNC_1(VAR_10);


    VAR_10 = 0;
    VAR_12 = "select `BLOB` from `BINARY` where `ID` = 1";
    VAR_13 = FUNC_17(VAR_8, VAR_12, &VAR_10);
    FUNC_22(VAR_13 == VAR_2, "select query failed\n");


    VAR_14 = sizeof VAR_15;
    VAR_13 = FUNC_10( VAR_10, 1, VAR_15, &VAR_14 );
    FUNC_22(VAR_13 == VAR_2, "read stream failed\n");
    FUNC_22(!FUNC_21(VAR_15, "naengmyon", 9), "stream data was wrong\n");
    FUNC_22(VAR_14 == 9, "stream data was wrong size\n");
    if (VAR_10) FUNC_1(VAR_10);


    VAR_10 = 0;
    VAR_12 = "select * from `MOO`";
    VAR_13 = FUNC_5(VAR_8, VAR_12, &VAR_9);
    FUNC_22(VAR_13 == VAR_2, "open view failed\n");

    VAR_13 = FUNC_14(VAR_9, 0);
    FUNC_22(VAR_13 == VAR_2, "view execute failed\n");

    VAR_13 = FUNC_15(VAR_9, &VAR_10);
    FUNC_22(VAR_13 == VAR_2, "view fetch failed\n");

    VAR_13 = FUNC_8(VAR_10, 1);
    FUNC_22(VAR_13 == 1, "Expected 1, got %d\n", VAR_13);

    VAR_14 = sizeof VAR_15;
    VAR_13 = FUNC_9(VAR_10, 2, VAR_15, &VAR_14);
    FUNC_22(VAR_13 == VAR_2, "record get string failed\n");
    FUNC_22(!FUNC_20(VAR_15, "c"), "Expected c, got %s\n", VAR_15);

    VAR_13 = FUNC_8(VAR_10, 3);
    FUNC_22(VAR_13 == 0x80000000, "Expected 0x80000000, got %d\n", VAR_13);

    VAR_13 = FUNC_8(VAR_10, 4);
    FUNC_22(VAR_13 == 5, "Expected 5, got %d\n", VAR_13);

    FUNC_1(VAR_10);

    VAR_13 = FUNC_15(VAR_9, &VAR_10);
    FUNC_22(VAR_13 == VAR_2, "view fetch failed\n");

    VAR_13 = FUNC_8(VAR_10, 1);
    FUNC_22(VAR_13 == 2, "Expected 2, got %d\n", VAR_13);

    VAR_14 = sizeof VAR_15;
    VAR_13 = FUNC_9(VAR_10, 2, VAR_15, &VAR_14);
    FUNC_22(VAR_13 == VAR_2, "record get string failed\n");
    FUNC_22(!FUNC_20(VAR_15, "b"), "Expected b, got %s\n", VAR_15);

    VAR_13 = FUNC_8(VAR_10, 3);
    FUNC_22(VAR_13 == 0x80000000, "Expected 0x80000000, got %d\n", VAR_13);

    VAR_13 = FUNC_8(VAR_10, 4);
    FUNC_22(VAR_13 == 0x80000000, "Expected 0x80000000, got %d\n", VAR_13);

    FUNC_1(VAR_10);

    VAR_13 = FUNC_15(VAR_9, &VAR_10);
    FUNC_22(VAR_13 == VAR_1, "view fetch succeeded\n");

    FUNC_1(VAR_10);
    FUNC_13(VAR_9);
    FUNC_1(VAR_9);


    VAR_13 = FUNC_23(VAR_8, &VAR_11);
    if (VAR_13 == VAR_0)
    {
        FUNC_25("Not enough rights to perform tests\n");
        goto error;
    }
    FUNC_22(VAR_13 == VAR_2, "Expected ERROR_SUCCESS, got %u\n", VAR_13);

    VAR_14 = VAR_3;
    VAR_13 = FUNC_6(VAR_11, "prop", VAR_15, &VAR_14);
    FUNC_22(VAR_13 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_13);
    FUNC_22(!FUNC_20(VAR_15, "val"), "Expected val, got %s\n", VAR_15);

    FUNC_1(VAR_11);

error:
    FUNC_1(VAR_8);
    FUNC_0(VAR_5);
    FUNC_0(VAR_7);
}
