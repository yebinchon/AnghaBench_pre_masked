
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIHANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (int ,int ,char const*) ;

__attribute__((used)) static void FUNC_13(void)
{
    MSIHANDLE VAR_7, VAR_8, VAR_9;
    const char *VAR_10;
    UINT VAR_11;

    FUNC_0(VAR_5);

    VAR_11 = FUNC_4(VAR_6, VAR_1, &VAR_7);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_10 = "CREATE TABLE `Table` ( `A` INT, `B` INT PRIMARY KEY `A` )";
    VAR_11 = FUNC_12(VAR_7, 0, VAR_10);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_10 = "INSERT INTO `Table` ( `A`, `B` ) VALUES ( 1, 2 )";
    VAR_11 = FUNC_12(VAR_7, 0, VAR_10);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_10 = "INSERT INTO `Table` ( `A`, `B` ) VALUES ( 3, 4 )";
    VAR_11 = FUNC_12(VAR_7, 0, VAR_10);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_10 = "INSERT INTO `Table` ( `A`, `B` ) VALUES ( 5, 6 )";
    VAR_11 = FUNC_12(VAR_7, 0, VAR_10);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);


    VAR_10 = "SELECT * FROM `Table` WHERE `B` = 3";
    VAR_11 = FUNC_3(VAR_7, VAR_10, &VAR_8);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_9 = FUNC_2(2);
    FUNC_6(VAR_9, 1, 7);
    FUNC_6(VAR_9, 2, 8);

    VAR_11 = FUNC_10(VAR_8, VAR_2, VAR_9);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    FUNC_1(VAR_9);
    FUNC_7(VAR_8);
    FUNC_1(VAR_8);

    VAR_10 = "SELECT * FROM `Table` WHERE `A` = 7";
    VAR_11 = FUNC_3(VAR_7, VAR_10, &VAR_8);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_8(VAR_8, 0);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_11 = FUNC_9(VAR_8, &VAR_9);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_11 = FUNC_5(VAR_9, 1);
    FUNC_11(VAR_11 == 7, "Expected 7, got %d\n", VAR_11);

    VAR_11 = FUNC_5(VAR_9, 2);
    FUNC_11(VAR_11 == 8, "Expected 8, got %d\n", VAR_11);

    FUNC_6(VAR_9, 2, 9);

    VAR_11 = FUNC_10(VAR_8, VAR_4, VAR_9);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    FUNC_1(VAR_9);
    FUNC_7(VAR_8);
    FUNC_1(VAR_8);

    VAR_10 = "SELECT * FROM `Table` WHERE `A` = 7";
    VAR_11 = FUNC_3(VAR_7, VAR_10, &VAR_8);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_8(VAR_8, 0);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_11 = FUNC_9(VAR_8, &VAR_9);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_11 = FUNC_5(VAR_9, 1);
    FUNC_11(VAR_11 == 7, "Expected 7, got %d\n", VAR_11);

    VAR_11 = FUNC_5(VAR_9, 2);
    FUNC_11(VAR_11 == 9, "Expected 9, got %d\n", VAR_11);

    VAR_10 = "UPDATE `Table` SET `B` = 10 WHERE `A` = 7";
    VAR_11 = FUNC_12(VAR_7, 0, VAR_10);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_11 = FUNC_10(VAR_8, VAR_3, VAR_9);
    FUNC_11(VAR_11 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_11 = FUNC_5(VAR_9, 1);
    FUNC_11(VAR_11 == 7, "Expected 7, got %d\n", VAR_11);

    VAR_11 = FUNC_5(VAR_9, 2);
    FUNC_11(VAR_11 == 10, "Expected 10, got %d\n", VAR_11);

    FUNC_1(VAR_9);
    FUNC_7(VAR_8);
    FUNC_1(VAR_8);
    FUNC_1(VAR_7);
}
