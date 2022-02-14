
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIHANDLE ;
typedef char* LPCSTR ;
typedef int DWORD ;
typedef int CHAR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int *,int*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int *) ;
 int VAR_3 ;
 int FUNC_11 () ;
 int FUNC_12 (int *,char*) ;
 int VAR_4 ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    MSIHANDLE VAR_5 = 0, VAR_6, VAR_7, VAR_8;
    LPCSTR VAR_9;
    UINT VAR_10;
    DWORD VAR_11;
    CHAR VAR_12[VAR_2];

    VAR_5 = FUNC_11();
    FUNC_13( VAR_5, "failed to create db\n");

    VAR_10 = FUNC_14(VAR_5, 0,
            "CREATE TABLE `Table` (`One` CHAR(72), `Two` CHAR(72), `Three` SHORT PRIMARY KEY `One`, `Two`, `Three`)");
    FUNC_13(VAR_10 == VAR_3, "cannot create table: %d\n", VAR_10);

    VAR_10 = FUNC_14(VAR_5, 0, "INSERT INTO `Table` "
            "( `One`, `Two`, `Three` ) VALUES ( 'apple', 'one', 1 )");
    FUNC_13(VAR_10 == VAR_3, "cannot add file to the Media table: %d\n", VAR_10);

    VAR_10 = FUNC_14(VAR_5, 0, "INSERT INTO `Table` "
            "( `One`, `Two`, `Three` ) VALUES ( 'apple', 'two', 1 )");
    FUNC_13(VAR_10 == VAR_3, "cannot add file to the Media table: %d\n", VAR_10);

    VAR_10 = FUNC_14(VAR_5, 0, "INSERT INTO `Table` "
            "( `One`, `Two`, `Three` ) VALUES ( 'apple', 'two', 2 )");
    FUNC_13(VAR_10 == VAR_3, "cannot add file to the Media table: %d\n", VAR_10);

    VAR_10 = FUNC_14(VAR_5, 0, "INSERT INTO `Table` "
            "( `One`, `Two`, `Three` ) VALUES ( 'banana', 'three', 3 )");
    FUNC_13(VAR_10 == VAR_3, "cannot add file to the Media table: %d\n", VAR_10);

    VAR_6 = FUNC_2(2);
    FUNC_7(VAR_6, 1, "apple");
    FUNC_7(VAR_6, 2, "two");

    VAR_9 = "SELECT * FROM `Table` WHERE `One`=? AND `Two`=? ORDER BY `Three`";
    VAR_10 = FUNC_3(VAR_5, VAR_9, &VAR_7);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_10 = FUNC_9(VAR_7, VAR_6);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_10 = FUNC_10(VAR_7, &VAR_8);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_11 = VAR_2;
    VAR_10 = FUNC_5(VAR_8, 1, VAR_12, &VAR_11);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);
    FUNC_13(!FUNC_12(VAR_12, "apple"), "Expected apple, got %s\n", VAR_12);

    VAR_11 = VAR_2;
    VAR_10 = FUNC_5(VAR_8, 2, VAR_12, &VAR_11);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);
    FUNC_13(!FUNC_12(VAR_12, "two"), "Expected two, got %s\n", VAR_12);

    VAR_10 = FUNC_4(VAR_8, 3);
    FUNC_13(VAR_10 == 1, "Expected 1, got %d\n", VAR_10);

    FUNC_1(VAR_8);

    VAR_10 = FUNC_10(VAR_7, &VAR_8);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_11 = VAR_2;
    VAR_10 = FUNC_5(VAR_8, 1, VAR_12, &VAR_11);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);
    FUNC_13(!FUNC_12(VAR_12, "apple"), "Expected apple, got %s\n", VAR_12);

    VAR_11 = VAR_2;
    VAR_10 = FUNC_5(VAR_8, 2, VAR_12, &VAR_11);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);
    FUNC_13(!FUNC_12(VAR_12, "two"), "Expected two, got %s\n", VAR_12);

    VAR_10 = FUNC_4(VAR_8, 3);
    FUNC_13(VAR_10 == 2, "Expected 2, got %d\n", VAR_10);

    FUNC_1(VAR_8);

    VAR_10 = FUNC_10(VAR_7, &VAR_8);
    FUNC_13(VAR_10 == VAR_0, "Expected ERROR_NO_MORE_ITEMS, got %d\n", VAR_10);

    FUNC_1(VAR_6);
    FUNC_8(VAR_7);
    FUNC_1(VAR_7);

    VAR_6 = FUNC_2(2);
    FUNC_7(VAR_6, 1, "one");
    FUNC_6(VAR_6, 2, 1);

    VAR_9 = "SELECT * FROM `Table` WHERE `Two`<>? AND `Three`>? ORDER BY `Three`";
    VAR_10 = FUNC_3(VAR_5, VAR_9, &VAR_7);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);
    VAR_10 = FUNC_9(VAR_7, VAR_6);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_10 = FUNC_10(VAR_7, &VAR_8);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_11 = VAR_2;
    VAR_10 = FUNC_5(VAR_8, 1, VAR_12, &VAR_11);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);
    FUNC_13(!FUNC_12(VAR_12, "apple"), "Expected apple, got %s\n", VAR_12);

    VAR_11 = VAR_2;
    VAR_10 = FUNC_5(VAR_8, 2, VAR_12, &VAR_11);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);
    FUNC_13(!FUNC_12(VAR_12, "two"), "Expected two, got %s\n", VAR_12);

    VAR_10 = FUNC_4(VAR_8, 3);
    FUNC_13(VAR_10 == 2, "Expected 2, got %d\n", VAR_10);

    FUNC_1(VAR_8);

    VAR_10 = FUNC_10(VAR_7, &VAR_8);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_11 = VAR_2;
    VAR_10 = FUNC_5(VAR_8, 1, VAR_12, &VAR_11);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);
    FUNC_13(!FUNC_12(VAR_12, "banana"), "Expected banana, got %s\n", VAR_12);

    VAR_11 = VAR_2;
    VAR_10 = FUNC_5(VAR_8, 2, VAR_12, &VAR_11);
    FUNC_13(VAR_10 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_10);
    FUNC_13(!FUNC_12(VAR_12, "three"), "Expected three, got %s\n", VAR_12);

    VAR_10 = FUNC_4(VAR_8, 3);
    FUNC_13(VAR_10 == 3, "Expected 3, got %d\n", VAR_10);

    FUNC_1(VAR_8);

    VAR_10 = FUNC_10(VAR_7, &VAR_8);
    FUNC_13(VAR_10 == VAR_0, "Expected ERROR_NO_MORE_ITEMS, got %d\n", VAR_10);

    FUNC_1(VAR_6);
    FUNC_8(VAR_7);
    FUNC_1(VAR_7);
    FUNC_1(VAR_5);
    FUNC_0(VAR_4);
}
