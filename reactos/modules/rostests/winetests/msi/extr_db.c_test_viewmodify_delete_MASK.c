
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int UINT ;
typedef int MSIHANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,char*,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int ,int ,char const*) ;

__attribute__((used)) static void FUNC_13(void)
{
    MSIHANDLE VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
    UINT VAR_9;
    const char *VAR_10;
    char VAR_11[0x100];
    DWORD VAR_12;

    FUNC_0(VAR_4);


    VAR_9 = FUNC_3(VAR_5, VAR_2, &VAR_6);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_10 = "CREATE TABLE `phone` ( "
            "`id` INT, `name` CHAR(32), `number` CHAR(32) "
            "PRIMARY KEY `id`)";
    VAR_9 = FUNC_12(VAR_6, 0, VAR_10);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_10 = "INSERT INTO `phone` ( `id`, `name`, `number` )"
        "VALUES('1', 'Alan', '5030581')";
    VAR_9 = FUNC_12(VAR_6, 0, VAR_10);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_10 = "INSERT INTO `phone` ( `id`, `name`, `number` )"
        "VALUES('2', 'Barry', '928440')";
    VAR_9 = FUNC_12(VAR_6, 0, VAR_10);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_10 = "INSERT INTO `phone` ( `id`, `name`, `number` )"
        "VALUES('3', 'Cindy', '2937550')";
    VAR_9 = FUNC_12(VAR_6, 0, VAR_10);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_10 = "SELECT * FROM `phone` WHERE `id` <= 2";
    VAR_9 = FUNC_2(VAR_6, VAR_10, &VAR_7);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    VAR_9 = FUNC_7(VAR_7, 0);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    VAR_9 = FUNC_8(VAR_7, &VAR_8);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);


    VAR_9 = FUNC_9(VAR_7, VAR_3, VAR_8);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_9 = FUNC_1(VAR_8);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    VAR_9 = FUNC_8(VAR_7, &VAR_8);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);


    VAR_9 = FUNC_9(VAR_7, VAR_3, VAR_8);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_9 = FUNC_1(VAR_8);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    VAR_9 = FUNC_6(VAR_7);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    VAR_9 = FUNC_1(VAR_7);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_10 = "SELECT * FROM `phone`";
    VAR_9 = FUNC_2(VAR_6, VAR_10, &VAR_7);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    VAR_9 = FUNC_7(VAR_7, 0);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    VAR_9 = FUNC_8(VAR_7, &VAR_8);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_9 = FUNC_4(VAR_8, 1);
    FUNC_11(VAR_9 == 3, "Expected 3, got %d\n", VAR_9);

    VAR_12 = sizeof(VAR_11);
    VAR_9 = FUNC_5(VAR_8, 2, VAR_11, &VAR_12);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    FUNC_11(!FUNC_10(VAR_11, "Cindy"), "Expected Cindy, got %s\n", VAR_11);

    VAR_12 = sizeof(VAR_11);
    VAR_9 = FUNC_5(VAR_8, 3, VAR_11, &VAR_12);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    FUNC_11(!FUNC_10(VAR_11, "2937550"), "Expected 2937550, got %s\n", VAR_11);

    VAR_9 = FUNC_1(VAR_8);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_9 = FUNC_8(VAR_7, &VAR_8);
    FUNC_11(VAR_9 == VAR_0, "Expected ERROR_NO_MORE_ITEMS, got %d\n", VAR_9);

    VAR_9 = FUNC_6(VAR_7);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    VAR_9 = FUNC_1(VAR_7);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    VAR_9 = FUNC_1(VAR_6);
    FUNC_11(VAR_9 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
}
