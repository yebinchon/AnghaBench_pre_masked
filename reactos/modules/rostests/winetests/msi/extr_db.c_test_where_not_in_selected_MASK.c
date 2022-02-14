
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef char* LPCSTR ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__ FUNC_9 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    MSIHANDLE VAR_3 = 0, VAR_4, VAR_5;
    LPCSTR VAR_6;
    UINT VAR_7;

    VAR_3 = FUNC_7();
    FUNC_8( VAR_3, "failed to create db\n");

    VAR_7 = FUNC_9(VAR_3, 0,
            "CREATE TABLE `IESTable` ("
            "`Action` CHAR(64), "
            "`Condition` CHAR(64), "
            "`Sequence` LONG PRIMARY KEY `Sequence`)");
    FUNC_8( VAR_7 == VAR_1, "Cannot create IESTable table: %d\n", VAR_7);

    VAR_7 = FUNC_9(VAR_3, 0,
            "CREATE TABLE `CATable` ("
            "`Action` CHAR(64), "
            "`Type` LONG PRIMARY KEY `Type`)");
    FUNC_8( VAR_7 == VAR_1, "Cannot create CATable table: %d\n", VAR_7);

    VAR_7 = FUNC_9(VAR_3, 0, "INSERT INTO `IESTable` "
            "( `Action`, `Condition`, `Sequence`) "
            "VALUES ( 'clean', 'cond4', 4)");
    FUNC_8( VAR_7 == VAR_1, "cannot add entry to IESTable table:%d\n", VAR_7 );

    VAR_7 = FUNC_9(VAR_3, 0, "INSERT INTO `IESTable` "
            "( `Action`, `Condition`, `Sequence`) "
            "VALUES ( 'depends', 'cond1', 1)");
    FUNC_8( VAR_7 == VAR_1, "cannot add entry to IESTable table:%d\n", VAR_7 );

    VAR_7 = FUNC_9(VAR_3, 0, "INSERT INTO `IESTable` "
            "( `Action`, `Condition`, `Sequence`) "
            "VALUES ( 'build', 'cond2', 2)");
    FUNC_8( VAR_7 == VAR_1, "cannot add entry to IESTable table:%d\n", VAR_7 );

    VAR_7 = FUNC_9(VAR_3, 0, "INSERT INTO `IESTable` "
            "( `Action`, `Condition`, `Sequence`) "
            "VALUES ( 'build2', 'cond6', 6)");
    FUNC_8( VAR_7 == VAR_1, "cannot add entry to IESTable table:%d\n", VAR_7 );

    VAR_7 = FUNC_9(VAR_3, 0, "INSERT INTO `IESTable` "
            "( `Action`, `Condition`, `Sequence`) "
            "VALUES ( 'build', 'cond3', 3)");
    FUNC_8(VAR_7 == VAR_1, "cannot add entry to IESTable table:%d\n", VAR_7 );

    VAR_7 = FUNC_9(VAR_3, 0, "INSERT INTO `CATable` "
            "( `Action`, `Type` ) "
            "VALUES ( 'build', 32)");
    FUNC_8(VAR_7 == VAR_1, "cannot add entry to CATable table:%d\n", VAR_7 );

    VAR_7 = FUNC_9(VAR_3, 0, "INSERT INTO `CATable` "
            "( `Action`, `Type` ) "
            "VALUES ( 'depends', 64)");
    FUNC_8(VAR_7 == VAR_1, "cannot add entry to CATable table:%d\n", VAR_7 );

    VAR_7 = FUNC_9(VAR_3, 0, "INSERT INTO `CATable` "
            "( `Action`, `Type` ) "
            "VALUES ( 'clean', 63)");
    FUNC_8(VAR_7 == VAR_1, "cannot add entry to CATable table:%d\n", VAR_7 );

    VAR_7 = FUNC_9(VAR_3, 0, "INSERT INTO `CATable` "
            "( `Action`, `Type` ) "
            "VALUES ( 'build2', 34)");
    FUNC_8(VAR_7 == VAR_1, "cannot add entry to CATable table:%d\n", VAR_7 );
    VAR_6 = "Select IESTable.Condition from CATable, IESTable where "
            "CATable.Action = IESTable.Action and CATable.Type = 32";
    VAR_7 = FUNC_2(VAR_3, VAR_6, &VAR_5);
    FUNC_8( VAR_7 == VAR_0, "failed to open view: %d\n", VAR_7 );

    VAR_7 = FUNC_4(VAR_5, 0);
    FUNC_8( VAR_7 == VAR_0, "failed to execute view: %d\n", VAR_7 );

    VAR_7 = FUNC_5(VAR_5, &VAR_4);
    FUNC_8( VAR_7 == VAR_0, "failed to fetch view: %d\n", VAR_7 );

    FUNC_8( FUNC_6( VAR_4, 1, "cond2"), "wrong condition\n");

    FUNC_1( VAR_4 );
    VAR_7 = FUNC_5(VAR_5, &VAR_4);
    FUNC_8( VAR_7 == VAR_0, "failed to fetch view: %d\n", VAR_7 );

    FUNC_8( FUNC_6( VAR_4, 1, "cond3"), "wrong condition\n");

    FUNC_1( VAR_4 );
    FUNC_3(VAR_5);
    FUNC_1(VAR_5);

    FUNC_1( VAR_3 );
    FUNC_0(VAR_2);
}
