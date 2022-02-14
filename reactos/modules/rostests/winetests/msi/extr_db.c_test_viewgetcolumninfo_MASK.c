
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (int,int ,char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    MSIHANDLE VAR_3 = 0, VAR_4;
    UINT VAR_5;

    VAR_3 = FUNC_2();
    FUNC_5( VAR_3, "failed to create db\n");

    VAR_5 = FUNC_6( VAR_3, 0,
            "CREATE TABLE `Properties` "
            "( `Property` CHAR(255), "
            "  `Value` CHAR(1), "
            "  `Intvalue` INT, "
            "  `Integervalue` INTEGER, "
            "  `Shortvalue` SHORT, "
            "  `Longvalue` LONG, "
            "  `Longcharvalue` LONGCHAR, "
            "  `Charvalue` CHAR, "
            "  `Localizablevalue` CHAR LOCALIZABLE "
            "  PRIMARY KEY `Property`)" );
    FUNC_5( VAR_5 == VAR_0 , "Failed to create table\n" );


    VAR_4 = FUNC_3( VAR_3, "select * from `Properties`", VAR_2 );
    FUNC_5( VAR_4, "failed to get column info record\n" );

    FUNC_5( FUNC_1( VAR_4, 1, "S255"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 2, "S1"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 3, "I2"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 4, "I2"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 5, "I2"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 6, "I4"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 7, "S0"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 8, "S0"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 9, "L0"), "wrong record type\n");

    FUNC_0( VAR_4 );


    FUNC_5( 0x3dff == FUNC_4(VAR_3, "Properties", 1 ), "_columns table wrong\n");
    FUNC_5( 0x1d01 == FUNC_4(VAR_3, "Properties", 2 ), "_columns table wrong\n");
    FUNC_5( 0x1502 == FUNC_4(VAR_3, "Properties", 3 ), "_columns table wrong\n");
    FUNC_5( 0x1502 == FUNC_4(VAR_3, "Properties", 4 ), "_columns table wrong\n");
    FUNC_5( 0x1502 == FUNC_4(VAR_3, "Properties", 5 ), "_columns table wrong\n");
    FUNC_5( 0x1104 == FUNC_4(VAR_3, "Properties", 6 ), "_columns table wrong\n");
    FUNC_5( 0x1d00 == FUNC_4(VAR_3, "Properties", 7 ), "_columns table wrong\n");
    FUNC_5( 0x1d00 == FUNC_4(VAR_3, "Properties", 8 ), "_columns table wrong\n");
    FUNC_5( 0x1f00 == FUNC_4(VAR_3, "Properties", 9 ), "_columns table wrong\n");


    VAR_4 = FUNC_3( VAR_3, "select * from `Properties`", VAR_1 );
    FUNC_5( VAR_4, "failed to get column info record\n" );

    FUNC_5( FUNC_1( VAR_4, 1, "Property"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 2, "Value"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 3, "Intvalue"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 4, "Integervalue"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 5, "Shortvalue"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 6, "Longvalue"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 7, "Longcharvalue"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 8, "Charvalue"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 9, "Localizablevalue"), "wrong record type\n");

    FUNC_0( VAR_4 );

    VAR_5 = FUNC_6( VAR_3, 0,
            "CREATE TABLE `Binary` "
            "( `Name` CHAR(255), `Data` OBJECT  PRIMARY KEY `Name`)" );
    FUNC_5( VAR_5 == VAR_0 , "Failed to create table\n" );


    VAR_4 = FUNC_3( VAR_3, "select * from `Binary`", VAR_2 );
    FUNC_5( VAR_4, "failed to get column info record\n" );

    FUNC_5( FUNC_1( VAR_4, 1, "S255"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 2, "V0"), "wrong record type\n");

    FUNC_0( VAR_4 );


    FUNC_5( 0x3dff == FUNC_4(VAR_3, "Binary", 1 ), "_columns table wrong\n");
    FUNC_5( 0x1900 == FUNC_4(VAR_3, "Binary", 2 ), "_columns table wrong\n");


    VAR_4 = FUNC_3( VAR_3, "select * from `Binary`", VAR_1 );
    FUNC_5( VAR_4, "failed to get column info record\n" );

    FUNC_5( FUNC_1( VAR_4, 1, "Name"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 2, "Data"), "wrong record type\n");
    FUNC_0( VAR_4 );

    VAR_5 = FUNC_6( VAR_3, 0,
            "CREATE TABLE `UIText` "
            "( `Key` CHAR(72) NOT NULL, `Text` CHAR(255) LOCALIZABLE PRIMARY KEY `Key`)" );
    FUNC_5( VAR_5 == VAR_0 , "Failed to create table\n" );

    FUNC_5( 0x2d48 == FUNC_4(VAR_3, "UIText", 1 ), "_columns table wrong\n");
    FUNC_5( 0x1fff == FUNC_4(VAR_3, "UIText", 2 ), "_columns table wrong\n");

    VAR_4 = FUNC_3( VAR_3, "select * from `UIText`", VAR_1 );
    FUNC_5( VAR_4, "failed to get column info record\n" );
    FUNC_5( FUNC_1( VAR_4, 1, "Key"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 2, "Text"), "wrong record type\n");
    FUNC_0( VAR_4 );

    VAR_4 = FUNC_3( VAR_3, "select * from `UIText`", VAR_2 );
    FUNC_5( VAR_4, "failed to get column info record\n" );
    FUNC_5( FUNC_1( VAR_4, 1, "s72"), "wrong record type\n");
    FUNC_5( FUNC_1( VAR_4, 2, "L255"), "wrong record type\n");
    FUNC_0( VAR_4 );

    FUNC_0( VAR_3 );
}
