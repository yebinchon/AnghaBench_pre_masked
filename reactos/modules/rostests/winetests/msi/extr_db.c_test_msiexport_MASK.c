
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,char*,char*,char const*) ;
 scalar_t__ FUNC_7 (int ,char const*,int *) ;
 scalar_t__ FUNC_8 (int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int VAR_5 ;
 int FUNC_11 (scalar_t__,char*,int,scalar_t__*,int *) ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*,char const*) ;
 int FUNC_14 (char*,int ,int) ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (int,char*,...) ;
 scalar_t__ FUNC_16 (char const*) ;

__attribute__((used)) static void FUNC_17(void)
{
    MSIHANDLE VAR_8 = 0, VAR_9 = 0;
    UINT VAR_10;
    const char *VAR_11;
    char VAR_12[VAR_3];
    const char VAR_13[] = "phone.txt";
    HANDLE VAR_14;
    char VAR_15[0x100];
    DWORD VAR_16;
    const char VAR_17[] =
        "id\tname\tnumber\r\n"
        "I2\tS32\tS32\r\n"
        "phone\tid\r\n"
        "1\tAbe\t8675309\r\n";

    FUNC_3(VAR_7);


    VAR_10 = FUNC_8(VAR_7, VAR_4, &VAR_8);
    FUNC_15(VAR_10 == VAR_0, "MsiOpenDatabase failed\n");


    VAR_11 = "CREATE TABLE `phone` ( "
            "`id` INT, `name` CHAR(32), `number` CHAR(32) "
            "PRIMARY KEY `id`)";
    VAR_10 = FUNC_7(VAR_8, VAR_11, &VAR_9);
    FUNC_15(VAR_10 == VAR_0, "MsiDatabaseOpenView failed\n");
    VAR_10 = FUNC_10(VAR_9, 0);
    FUNC_15(VAR_10 == VAR_0, "MsiViewExecute failed\n");
    VAR_10 = FUNC_9(VAR_9);
    FUNC_15(VAR_10 == VAR_0, "MsiViewClose failed\n");
    VAR_10 = FUNC_5(VAR_9);
    FUNC_15(VAR_10 == VAR_0, "MsiCloseHandle failed\n");


    VAR_11 = "INSERT INTO `phone` ( `id`, `name`, `number` )"
        "VALUES('1', 'Abe', '8675309')";
    VAR_10 = FUNC_7(VAR_8, VAR_11, &VAR_9);
    FUNC_15(VAR_10 == VAR_0, "MsiDatabaseOpenView failed\n");
    VAR_10 = FUNC_10(VAR_9, 0);
    FUNC_15(VAR_10 == VAR_0, "MsiViewExecute failed\n");
    VAR_10 = FUNC_9(VAR_9);
    FUNC_15(VAR_10 == VAR_0, "MsiViewClose failed\n");
    VAR_10 = FUNC_5(VAR_9);
    FUNC_15(VAR_10 == VAR_0, "MsiCloseHandle failed\n");

    FUNC_4(VAR_3, VAR_12);

    VAR_10 = FUNC_6(VAR_8, "phone", VAR_12, VAR_13);
    FUNC_15(VAR_10 == VAR_0, "MsiDatabaseExport failed\n");

    FUNC_5(VAR_8);

    FUNC_12(VAR_12, "\\");
    FUNC_12(VAR_12, VAR_13);


    VAR_16 = 0;
    FUNC_14(VAR_15, 0, sizeof VAR_15);
    VAR_14 = FUNC_1(VAR_12, VAR_1, 0, ((void*)0), VAR_5, 0, ((void*)0));
    if (VAR_14 != VAR_2)
    {
        FUNC_11(VAR_14, VAR_15, sizeof VAR_15, &VAR_16, ((void*)0));
        FUNC_0(VAR_14);
        FUNC_2(VAR_12);
    }
    else
        FUNC_15(0, "failed to open file %s\n", VAR_12);

    FUNC_15( VAR_16 == FUNC_16(VAR_17), "length of data wrong\n");
    FUNC_15( !FUNC_13(VAR_15, VAR_17), "data doesn't match\n");
    FUNC_2(VAR_6);
}
