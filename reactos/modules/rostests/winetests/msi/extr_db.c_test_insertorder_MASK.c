
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef char* LPCSTR ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__** VAR_5 ;
 scalar_t__ FUNC_9 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    MSIHANDLE VAR_6, VAR_7, VAR_8;
    LPCSTR VAR_9;
    UINT VAR_10;
    int VAR_11;

    VAR_6 = FUNC_7();
    FUNC_8(VAR_6, "failed to create db\n");

    VAR_9 = "CREATE TABLE `T` ( `A` SHORT, `B` SHORT, `C` SHORT PRIMARY KEY `A`)";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_9 = "INSERT INTO `T` ( `A`, `B`, `C` ) VALUES ( 1, 2, 3 )";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_9 = "INSERT INTO `T` ( `B`, `C`, `A` ) VALUES ( 4, 5, 6 )";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_9 = "INSERT INTO `T` ( `C`, `A`, `B` ) VALUES ( 7, 8, 9 )";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_9 = "INSERT INTO `T` ( `A`, `B` ) VALUES ( 10, 11 )";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_9 = "INSERT INTO `T` ( `B`, `C` ) VALUES ( 12, 13 )";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);




    VAR_9 = "INSERT INTO `T` ( `C` ) VALUES ( 14 )";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_1,
       "Expected ERROR_FUNCTION_FAILED, got %d\n", VAR_10);


    VAR_9 = "INSERT INTO `T` ( `A`, `C` ) VALUES ( 1, 14 )";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_1,
       "Expected ERROR_FUNCTION_FAILED, got %d\n", VAR_10);

    VAR_9 = "INSERT INTO `T` ( `A`, `C` ) VALUES ( 14, 15 )";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_9 = "INSERT INTO `T` VALUES ( 16 )";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_0,
       "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_10);

    VAR_9 = "INSERT INTO `T` VALUES ( 17, 18 )";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_0,
       "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_10);

    VAR_9 = "INSERT INTO `T` VALUES ( 19, 20, 21 )";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_0,
       "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_10);

    VAR_9 = "SELECT * FROM `T`";
    VAR_10 = FUNC_2(VAR_6, VAR_9, &VAR_7);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);
    VAR_10 = FUNC_5(VAR_7, 0);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    for (VAR_11 = 0; VAR_11 < 6; VAR_11++)
    {
        VAR_10 = FUNC_6(VAR_7, &VAR_8);
        FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

        VAR_10 = FUNC_3(VAR_8, 1);
        FUNC_8(VAR_10 == VAR_5[VAR_11][0], "Expected %d, got %d\n", VAR_5[VAR_11][0], VAR_10);

        VAR_10 = FUNC_3(VAR_8, 2);
        FUNC_8(VAR_10 == VAR_5[VAR_11][1], "Expected %d, got %d\n", VAR_5[VAR_11][1], VAR_10);

        VAR_10 = FUNC_3(VAR_8, 3);
        FUNC_8(VAR_10 == VAR_5[VAR_11][2], "Expected %d, got %d\n", VAR_5[VAR_11][2], VAR_10);

        FUNC_1(VAR_8);
    }

    VAR_10 = FUNC_6(VAR_7, &VAR_8);
    FUNC_8(VAR_10 == VAR_2, "Expected ERROR_NO_MORE_ITEMS, got %d\n", VAR_10);

    FUNC_4(VAR_7);
    FUNC_1(VAR_7);

    VAR_9 = "DELETE FROM `T` WHERE `A` IS NULL";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_9 = "INSERT INTO `T` ( `B`, `C` ) VALUES ( 12, 13 ) TEMPORARY";
    VAR_10 = FUNC_9(VAR_6, 0, VAR_9);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    VAR_9 = "SELECT * FROM `T`";
    VAR_10 = FUNC_2(VAR_6, VAR_9, &VAR_7);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);
    VAR_10 = FUNC_5(VAR_7, 0);
    FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

    for (VAR_11 = 0; VAR_11 < 6; VAR_11++)
    {
        VAR_10 = FUNC_6(VAR_7, &VAR_8);
        FUNC_8(VAR_10 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_10);

        VAR_10 = FUNC_3(VAR_8, 1);
        FUNC_8(VAR_10 == VAR_5[VAR_11][0], "Expected %d, got %d\n", VAR_5[VAR_11][0], VAR_10);

        VAR_10 = FUNC_3(VAR_8, 2);
        FUNC_8(VAR_10 == VAR_5[VAR_11][1], "Expected %d, got %d\n", VAR_5[VAR_11][1], VAR_10);

        VAR_10 = FUNC_3(VAR_8, 3);
        FUNC_8(VAR_10 == VAR_5[VAR_11][2], "Expected %d, got %d\n", VAR_5[VAR_11][2], VAR_10);

        FUNC_1(VAR_8);
    }

    VAR_10 = FUNC_6(VAR_7, &VAR_8);
    FUNC_8(VAR_10 == VAR_2, "Expected ERROR_NO_MORE_ITEMS, got %d\n", VAR_10);

    FUNC_4(VAR_7);
    FUNC_1(VAR_7);
    FUNC_1(VAR_6);
    FUNC_0(VAR_4);
}
