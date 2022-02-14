
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef int error ;
typedef int WORD ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int *,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_4 (int *,int ,char*,char*,char*,int,int *) ;
 int FUNC_5 (char*,char*,char*,int,int *,int ,int *) ;
 int FUNC_6 (int,scalar_t__*,int *,int ,int *) ;
 int FUNC_7 (char*,int ,scalar_t__*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    char VAR_14[VAR_5];
    char VAR_15[VAR_5];
    WORD VAR_16 = 0;
    BOOL VAR_17, VAR_18;
    DWORD VAR_19, VAR_20 = 0;
    HKEY VAR_21;
    LONG VAR_22;
    char VAR_23[1000];

    FUNC_0(VAR_15, VAR_5);

    VAR_17 = FUNC_4(((void*)0), VAR_6, "WINE ODBC Driver", "CPTimeout=59", VAR_23, sizeof(VAR_23), ((void*)0));
    FUNC_9(!VAR_17, "SQLConfigDriver returned %d\n", VAR_17);
    VAR_18 = FUNC_6(1, &VAR_20, ((void*)0), 0, ((void*)0));
    FUNC_9(VAR_18 && VAR_20 == VAR_7, "SQLConfigDriver returned %d, %u\n", VAR_18, VAR_20);

    VAR_17 = FUNC_5("WINE ODBC Driver\0Driver=sample.dll\0Setup=sample.dll\0\0", ((void*)0),
                             VAR_14, VAR_5, &VAR_16, VAR_10, ((void*)0));
    FUNC_9(VAR_17, "SQLInstallDriverEx failed\n");
    VAR_18 = FUNC_6(1, &VAR_20, ((void*)0), 0, ((void*)0));
    if (VAR_18 && VAR_20 == VAR_9)
    {
         FUNC_14("not enough privileges\n");
         return;
    }
    FUNC_9(VAR_18 == VAR_12 || (VAR_18 && VAR_20 == VAR_13), "SQLInstallDriverEx failed %d, %u\n", VAR_18, VAR_20);
    FUNC_9(!FUNC_11(VAR_14, VAR_15), "invalid path %s\n", VAR_14);

if (0)
{
    VAR_18 = 0;
    VAR_17 = FUNC_4(((void*)0), VAR_6, "WINE ODBC Driver", ((void*)0), VAR_23, sizeof(VAR_23), ((void*)0));
    FUNC_9(!VAR_17, "SQLConfigDriver failed '%s'\n",VAR_23);
}

    VAR_17 = FUNC_4(((void*)0), VAR_6, "WINE ODBC Driver", "CPTimeout=59\0NoWrite=60\0", VAR_23, sizeof(VAR_23), ((void*)0));
    FUNC_9(VAR_17, "SQLConfigDriver failed\n");
    VAR_18 = FUNC_6(1, &VAR_20, ((void*)0), 0, ((void*)0));
    FUNC_9(VAR_18 == VAR_12 || (VAR_18 && VAR_20 == VAR_13), "SQLConfigDriver failed %d, %u\n", VAR_18, VAR_20);

    VAR_17 = FUNC_5("WINE ODBC Driver Path\0Driver=sample.dll\0Setup=sample.dll\0\0", "c:\\temp", VAR_14, VAR_5, &VAR_16, VAR_10, ((void*)0));
    FUNC_9(VAR_17, "SQLInstallDriverEx failed\n");
    VAR_18 = FUNC_6(1, &VAR_20, ((void*)0), 0, ((void*)0));
    FUNC_9(VAR_18 == VAR_12 || (VAR_18 && VAR_20 == VAR_13), "SQLInstallDriverEx failed %d, %u\n", VAR_18, VAR_20);
    FUNC_9(!FUNC_11(VAR_14, "c:\\temp"), "invalid path %s\n", VAR_14);

    VAR_17 = FUNC_4(((void*)0), VAR_6, "WINE ODBC Driver Path", "empty", VAR_23, sizeof(VAR_23), ((void*)0));
    FUNC_9(!VAR_17, "SQLConfigDriver successful\n");
    VAR_18 = FUNC_6(1, &VAR_20, ((void*)0), 0, ((void*)0));
    FUNC_9(VAR_18 && VAR_20 == VAR_8, "SQLConfigDriver failed %d, %u\n", VAR_18, VAR_20);

    VAR_17 = FUNC_4(((void*)0), VAR_6, "WINE ODBC Driver Path", "NoWrite=60;xxxx=555", VAR_23, sizeof(VAR_23), ((void*)0));
    FUNC_9(VAR_17, "SQLConfigDriver failed\n");
    VAR_18 = FUNC_6(1, &VAR_20, ((void*)0), 0, ((void*)0));
    FUNC_9(VAR_18 == VAR_12 || (VAR_18 && VAR_20 == VAR_13), "SQLConfigDriver failed %d, %u\n", VAR_18, VAR_20);

    if (VAR_17)
    {
        DWORD VAR_24 = 0xdeadbeef, VAR_25 = VAR_5;

        VAR_22 = FUNC_2(VAR_3, "Software\\ODBC\\ODBCINST.INI\\WINE ODBC Driver", 0, VAR_4, &VAR_21);
        FUNC_9(VAR_22 == VAR_1, "RegOpenKeyExW failed\n");
        if (VAR_22 == VAR_1)
        {
            char VAR_26[VAR_5];

            FUNC_12(VAR_26, VAR_15);
            FUNC_10(VAR_26, "\\sample.dll");

            FUNC_8(VAR_14, 0, sizeof(VAR_14));
            VAR_22 = FUNC_3(VAR_21, "Driver", ((void*)0), &VAR_24, (BYTE *)VAR_14, &VAR_25);
            FUNC_9(VAR_22 == VAR_1, "got %d\n", VAR_22);
            FUNC_9(VAR_24 == VAR_11, "got %u\n", VAR_24);
            FUNC_9(VAR_25 == FUNC_13(VAR_26) + 1, "got %u\n", VAR_25);
            FUNC_9(!FUNC_11(VAR_14, VAR_26), "invalid path %s\n", VAR_14);

            VAR_22 = FUNC_3(VAR_21, "CPTimeout", ((void*)0), &VAR_24, (BYTE *)&VAR_14, &VAR_25);
            FUNC_9(VAR_22 == VAR_1, "got %d\n", VAR_22);
            FUNC_9(VAR_24 == VAR_11, "got %u\n", VAR_24);
            FUNC_9(VAR_25 == FUNC_13("59") + 1, "got %u\n", VAR_25);
            FUNC_9(!FUNC_11(VAR_14, "59"), "invalid value %s\n", VAR_14);

            VAR_22 = FUNC_3(VAR_21, "NoWrite", ((void*)0), &VAR_24, (BYTE *)&VAR_14, &VAR_25);
            FUNC_9(VAR_22 == VAR_0, "got %d\n", VAR_22);

            FUNC_1(VAR_21);
        }

        VAR_22 = FUNC_2(VAR_3, "Software\\ODBC\\ODBCINST.INI\\WINE ODBC Driver Path", 0, VAR_4, &VAR_21);
        FUNC_9(VAR_22 == VAR_1, "RegOpenKeyExW failed\n");
        if (VAR_22 == VAR_1)
        {
            VAR_25 = sizeof(VAR_14);
            VAR_22 = FUNC_3(VAR_21, "NoWrite", ((void*)0), &VAR_24, (BYTE *)&VAR_14, &VAR_25);
            FUNC_9(VAR_22 == VAR_1, "got %d\n", VAR_22);
            FUNC_9(VAR_24 == VAR_11, "got %u\n", VAR_24);
            FUNC_9(VAR_25 == FUNC_13("60;xxxx=555") + 1, "got %u\n", VAR_25);
            FUNC_9(!FUNC_11(VAR_14, "60;xxxx=555"), "invalid value %s\n", VAR_14);

            VAR_22 = FUNC_3(VAR_21, "CPTimeout", ((void*)0), &VAR_24, (BYTE *)&VAR_14, &VAR_25);
            FUNC_9(VAR_22 == VAR_0, "got %d\n", VAR_22);
            FUNC_1(VAR_21);
        }
    }

    VAR_19 = 100;
    VAR_17 = FUNC_7("WINE ODBC Driver", VAR_2, &VAR_19);
    FUNC_9(VAR_17, "SQLRemoveDriver failed\n");
    FUNC_9(VAR_19 == 0, "SQLRemoveDriver failed %d\n", VAR_19);

    VAR_19 = 100;
    VAR_17 = FUNC_7("WINE ODBC Driver Path", VAR_2, &VAR_19);
    FUNC_9(VAR_17, "SQLRemoveDriver failed\n");
    FUNC_9(VAR_19 == 0, "SQLRemoveDriver failed %d\n", VAR_19);
}
