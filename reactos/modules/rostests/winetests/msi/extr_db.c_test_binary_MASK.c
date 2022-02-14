
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
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (scalar_t__,int,char*,int*) ;
 int FUNC_6 (scalar_t__,int,char*,int*) ;
 int FUNC_7 (scalar_t__,int,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__,char*,scalar_t__*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int ,int) ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (scalar_t__,scalar_t__,char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    MSIHANDLE VAR_7 = 0, VAR_8;
    char VAR_9[VAR_2];
    char VAR_10[VAR_2];
    DWORD VAR_11;
    LPCSTR VAR_12;
    UINT VAR_13;


    VAR_13 = FUNC_4(VAR_6, VAR_3, &VAR_7 );
    FUNC_12( VAR_13 == VAR_1 , "Failed to open database\n" );

    VAR_12 = "CREATE TABLE `Binary` ( `Name` CHAR(72) NOT NULL, `ID` INT NOT NULL, `Data` OBJECT  PRIMARY KEY `Name`, `ID`)";
    VAR_13 = FUNC_13( VAR_7, 0, VAR_12 );
    FUNC_12( VAR_13 == VAR_1, "Cannot create Binary table: %d\n", VAR_13 );

    FUNC_8( "test.txt" );
    VAR_8 = FUNC_2( 1 );
    VAR_13 = FUNC_7( VAR_8, 1, "test.txt" );
    FUNC_12( VAR_13 == VAR_1, "Failed to add stream data to the record: %d\n", VAR_13);
    FUNC_0( "test.txt" );


    VAR_12 = "INSERT INTO `Binary` ( `Name`, `ID`, `Data` ) VALUES ( 'encryption.dll.CB4E6205_F99A_4C51_ADD4_184506EFAB87', 10000, ? )";
    VAR_13 = FUNC_13( VAR_7, VAR_8, VAR_12 );
    FUNC_12( VAR_13 == VAR_1, "Insert into Binary table failed: %d\n", VAR_13 );

    VAR_13 = FUNC_1( VAR_8 );
    FUNC_12( VAR_13 == VAR_1 , "Failed to close record handle\n" );

    VAR_13 = FUNC_3( VAR_7 );
    FUNC_12( VAR_13 == VAR_0 , "got %u\n", VAR_13 );

    VAR_13 = FUNC_1( VAR_7 );
    FUNC_12( VAR_13 == VAR_1 , "Failed to close database\n" );

    VAR_13 = FUNC_4(VAR_6, VAR_3, &VAR_7 );
    FUNC_12( VAR_13 == VAR_1 , "Failed to open database\n" );

    VAR_12 = "CREATE TABLE `Binary` ( `Name` CHAR(72) NOT NULL, `ID` INT NOT NULL, `Data` OBJECT  PRIMARY KEY `Name`, `ID`)";
    VAR_13 = FUNC_13( VAR_7, 0, VAR_12 );
    FUNC_12( VAR_13 == VAR_1, "Cannot create Binary table: %d\n", VAR_13 );

    FUNC_8( "test.txt" );
    VAR_8 = FUNC_2( 1 );
    VAR_13 = FUNC_7( VAR_8, 1, "test.txt" );
    FUNC_12( VAR_13 == VAR_1, "Failed to add stream data to the record: %d\n", VAR_13 );
    FUNC_0( "test.txt" );

    VAR_12 = "INSERT INTO `Binary` ( `Name`, `ID`, `Data` ) VALUES ( 'filename1', 1, ? )";
    VAR_13 = FUNC_13( VAR_7, VAR_8, VAR_12 );
    FUNC_12( VAR_13 == VAR_1, "Insert into Binary table failed: %d\n", VAR_13 );

    VAR_12 = "INSERT INTO `Binary` ( `Name`, `ID`, `Data` ) VALUES ( 'filename1', 1, ? )";
    VAR_13 = FUNC_13( VAR_7, VAR_8, VAR_12 );
    FUNC_12( VAR_13 == VAR_0, "got %u\n", VAR_13 );

    VAR_13 = FUNC_1( VAR_8 );
    FUNC_12( VAR_13 == VAR_1 , "Failed to close record handle\n" );

    VAR_13 = FUNC_3( VAR_7 );
    FUNC_12( VAR_13 == VAR_1 , "Failed to commit database\n" );

    VAR_13 = FUNC_1( VAR_7 );
    FUNC_12( VAR_13 == VAR_1 , "Failed to close database\n" );


    VAR_13 = FUNC_4( VAR_6, VAR_4, &VAR_7 );
    FUNC_12( VAR_13 == VAR_1 , "Failed to open database\n" );

    VAR_12 = "SELECT * FROM `_Streams`";
    VAR_13 = FUNC_9( VAR_7, VAR_12, &VAR_8 );
    FUNC_12( VAR_13 == VAR_1, "SELECT query failed: %d\n", VAR_13 );

    VAR_11 = VAR_2;
    VAR_13 = FUNC_5( VAR_8, 1, VAR_9, &VAR_11 );
    FUNC_12( VAR_13 == VAR_1, "Failed to get string: %d\n", VAR_13 );
    FUNC_12( !FUNC_10(VAR_9, "Binary.filename1.1"), "Expected 'Binary.filename1.1', got %s\n", VAR_9 );

    VAR_11 = VAR_2;
    FUNC_11( VAR_10, 0, VAR_2 );
    VAR_13 = FUNC_6( VAR_8, 2, VAR_10, &VAR_11 );
    FUNC_12( VAR_13 == VAR_1, "Failed to get stream: %d\n", VAR_13 );
    FUNC_12( !FUNC_10(VAR_10, "test.txt\n"), "Expected 'test.txt\\n', got %s\n", VAR_10 );

    VAR_13 = FUNC_1( VAR_8 );
    FUNC_12( VAR_13 == VAR_1 , "Failed to close record handle\n" );


    VAR_12 = "SELECT * FROM `Binary`";
    VAR_13 = FUNC_9( VAR_7, VAR_12, &VAR_8 );
    FUNC_12( VAR_13 == VAR_1, "SELECT query failed: %d\n", VAR_13 );

    VAR_11 = VAR_2;
    VAR_13 = FUNC_5( VAR_8, 1, VAR_9, &VAR_11 );
    FUNC_12( VAR_13 == VAR_1, "Failed to get string: %d\n", VAR_13 );
    FUNC_12( !FUNC_10(VAR_9, "filename1"), "Expected 'filename1', got %s\n", VAR_9 );

    VAR_11 = VAR_2;
    FUNC_11( VAR_10, 0, VAR_2 );
    VAR_13 = FUNC_6( VAR_8, 3, VAR_10, &VAR_11 );
    FUNC_12( VAR_13 == VAR_1, "Failed to get stream: %d\n", VAR_13 );
    FUNC_12( !FUNC_10(VAR_10, "test.txt\n"), "Expected 'test.txt\\n', got %s\n", VAR_10 );

    VAR_13 = FUNC_1( VAR_8 );
    FUNC_12( VAR_13 == VAR_1 , "Failed to close record handle\n" );

    VAR_13 = FUNC_1( VAR_7 );
    FUNC_12( VAR_13 == VAR_1 , "Failed to close database\n" );

    FUNC_0( VAR_5 );
}
