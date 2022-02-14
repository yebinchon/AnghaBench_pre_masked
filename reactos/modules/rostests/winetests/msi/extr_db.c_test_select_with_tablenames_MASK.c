
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIHANDLE ;
typedef char* LPCSTR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    MSIHANDLE VAR_3, VAR_4, VAR_5;
    LPCSTR VAR_6;
    UINT VAR_7;
    int VAR_8;

    int VAR_9[4][2] = {
        {1,12},
        {4,12},
        {1,15},
        {4,15}};

    VAR_3 = FUNC_7();
    FUNC_8(VAR_3, "failed to create db\n");


    VAR_6 = "CREATE TABLE `T1` ( `A` SHORT, `B` SHORT PRIMARY KEY `A`)";
    VAR_7 = FUNC_9(VAR_3, 0, VAR_6);
    FUNC_8(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "INSERT INTO `T1` ( `A`, `B` ) VALUES ( 1, 2 )";
    VAR_7 = FUNC_9(VAR_3, 0, VAR_6);
    FUNC_8(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "INSERT INTO `T1` ( `A`, `B` ) VALUES ( 4, 5 )";
    VAR_7 = FUNC_9(VAR_3, 0, VAR_6);
    FUNC_8(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "CREATE TABLE `T2` ( `A` SHORT, `B` SHORT PRIMARY KEY `A`)";
    VAR_7 = FUNC_9(VAR_3, 0, VAR_6);
    FUNC_8(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "INSERT INTO `T2` ( `A`, `B` ) VALUES ( 11, 12 )";
    VAR_7 = FUNC_9(VAR_3, 0, VAR_6);
    FUNC_8(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    VAR_6 = "INSERT INTO `T2` ( `A`, `B` ) VALUES ( 14, 15 )";
    VAR_7 = FUNC_9(VAR_3, 0, VAR_6);
    FUNC_8(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);





    VAR_6 = "SELECT T1.A, T2.B FROM T1,T2";
    VAR_7 = FUNC_2(VAR_3, VAR_6, &VAR_4);
    FUNC_8(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);
    VAR_7 = FUNC_5(VAR_4, 0);
    FUNC_8(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

    for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
    {
        VAR_7 = FUNC_6(VAR_4, &VAR_5);
        FUNC_8(VAR_7 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_7);

        VAR_7 = FUNC_3(VAR_5, 1);
        FUNC_8(VAR_7 == VAR_9[VAR_8][0], "Expected %d, got %d\n", VAR_9[VAR_8][0], VAR_7);

        VAR_7 = FUNC_3(VAR_5, 2);
        FUNC_8(VAR_7 == VAR_9[VAR_8][1], "Expected %d, got %d\n", VAR_9[VAR_8][1], VAR_7);

        FUNC_1(VAR_5);
    }

    VAR_7 = FUNC_6(VAR_4, &VAR_5);
    FUNC_8(VAR_7 == VAR_0, "Expected ERROR_NO_MORE_ITEMS, got %d\n", VAR_7);

    FUNC_4(VAR_4);
    FUNC_1(VAR_4);
    FUNC_1(VAR_3);
    FUNC_0(VAR_2);
}
