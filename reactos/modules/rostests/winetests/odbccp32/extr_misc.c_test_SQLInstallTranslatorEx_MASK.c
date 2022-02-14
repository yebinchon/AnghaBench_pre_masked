
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef scalar_t__ WORD ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int *,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_4 (char*,char*,char*,int,scalar_t__*,int ,int *) ;
 int FUNC_5 (int,scalar_t__*,int *,int ,int *) ;
 int FUNC_6 (char*,scalar_t__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    char VAR_9[VAR_3];
    char VAR_10[VAR_3];
    WORD VAR_11 = 0;
    BOOL VAR_12, VAR_13;
    DWORD VAR_14, VAR_15 = 0;
    HKEY VAR_16;
    LONG VAR_17;

    FUNC_0(VAR_10, VAR_3);

    VAR_12 = FUNC_4("WINE ODBC Translator\0Translator=sample.dll\0Setup=sample.dll\0",
                                 ((void*)0), VAR_9, VAR_3, &VAR_11, VAR_6, ((void*)0));
    VAR_13 = FUNC_5(1, &VAR_15, ((void*)0), 0, ((void*)0));
    if (VAR_13 && VAR_15 == VAR_5)
    {
         FUNC_13("not enough privileges\n");
         return;
    }
    FUNC_8(VAR_13 && VAR_15 == VAR_8, "SQLInstallDriverEx failed %d, %u\n", VAR_13, VAR_15);
    FUNC_8(!FUNC_10(VAR_9, VAR_10), "invalid path %s\n", VAR_9);
    FUNC_8(VAR_11 == FUNC_12(VAR_9), "invalid length %d\n", VAR_11);

    VAR_12 = FUNC_4("WINE ODBC Translator Path\0Translator=sample.dll\0Setup=sample.dll\0",
                                 "c:\\temp", VAR_9, VAR_3, &VAR_11, VAR_6, ((void*)0));
    VAR_13 = FUNC_5(1, &VAR_15, ((void*)0), 0, ((void*)0));
    FUNC_8(VAR_13 && VAR_15 == VAR_8, "SQLInstallTranslatorEx failed %d, %u\n", VAR_13, VAR_15);
    FUNC_8(!FUNC_10(VAR_9, "c:\\temp"), "invalid path %s\n", VAR_9);
    FUNC_8(VAR_11 == FUNC_12(VAR_9), "invalid length %d\n", VAR_11);

    if(VAR_12)
    {
        VAR_17 = FUNC_2(VAR_1, "Software\\ODBC\\ODBCINST.INI\\WINE ODBC Translator", 0,
                            VAR_2, &VAR_16);
        FUNC_8(VAR_17 == VAR_0, "RegOpenKeyExW failed\n");
        if (VAR_17 == VAR_0)
        {
            DWORD VAR_18 = 0xdeadbeef, VAR_19 = VAR_3;
            char VAR_20[VAR_3];

            FUNC_11(VAR_20, VAR_10);
            FUNC_9(VAR_20, "\\sample.dll");

            FUNC_7(VAR_9, 0, sizeof(VAR_9));
            VAR_17 = FUNC_3(VAR_16, "Translator", ((void*)0), &VAR_18, (BYTE *)VAR_9, &VAR_19);
            FUNC_8(VAR_17 == VAR_0, "RegGetValueA failed\n");
            FUNC_8(VAR_18 == VAR_7, "got %u\n", VAR_18);
            FUNC_8(VAR_19 == FUNC_12(VAR_20) + 1, "got %u\n", VAR_19);
            FUNC_8(!FUNC_10(VAR_9, VAR_20), "invalid path %s\n", VAR_9);

            FUNC_1(VAR_16);
        }
    }

    VAR_14 = 100;
    VAR_12 = FUNC_6("WINE ODBC Translator", &VAR_14);
    FUNC_8(VAR_12, "SQLRemoveTranslator failed\n");
    FUNC_8(VAR_14 == 0, "SQLRemoveTranslator failed %d\n", VAR_14);

    VAR_14 = 100;
    VAR_12 = FUNC_6("WINE ODBC Translator Path", &VAR_14);
    FUNC_8(VAR_12, "SQLRemoveTranslator failed\n");
    FUNC_8(VAR_14 == 0, "SQLRemoveTranslator failed %d\n", VAR_14);

    VAR_14 = 100;
    VAR_12 = FUNC_6("WINE ODBC Translator NonExist", &VAR_14);
    FUNC_8(!VAR_12, "SQLRemoveTranslator succeeded\n");
    FUNC_8(VAR_14 == 100, "SQLRemoveTranslator succeeded %d\n", VAR_14);
    VAR_13 = FUNC_5(1, &VAR_15, ((void*)0), 0, ((void*)0));
    FUNC_8(VAR_13 && VAR_15 == VAR_4,
        "SQLInstallTranslatorEx failed %d, %u\n", VAR_13, VAR_15);

}
