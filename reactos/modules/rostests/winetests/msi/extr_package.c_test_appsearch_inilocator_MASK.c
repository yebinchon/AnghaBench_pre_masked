
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIHANDLE ;
typedef scalar_t__* LPSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,char*,int*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,char*,char*,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*) ;
 char* VAR_7 ;
 int FUNC_20 (int,char*,...) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char*,char*,char*) ;
 int FUNC_24 (char*,int ) ;
 scalar_t__* FUNC_25 (char*,char) ;

__attribute__((used)) static void FUNC_26(void)
{
    MSIHANDLE VAR_8, VAR_9;
    char VAR_10[VAR_5], VAR_11[VAR_5], VAR_12[VAR_5];
    BOOL VAR_13;
    LPSTR VAR_14;
    DWORD VAR_15;
    UINT VAR_16;

    VAR_13 = VAR_6;
    if (!FUNC_11("test.dll", FUNC_1(2, 1), FUNC_1(4, 3)))
        VAR_13 = VAR_3;

    FUNC_0("test.dll");

    FUNC_6("Section", "Key", "keydata,field2", "IniFile.ini");

    FUNC_24(VAR_11, VAR_0);
    if (FUNC_17(VAR_0)) VAR_11[2] = 0;

    FUNC_15("FileName1");
    FUNC_23(VAR_10, "%s\\FileName1", VAR_11);
    FUNC_6("Section", "Key2", VAR_10, "IniFile.ini");

    FUNC_6("Section", "Key3", VAR_11, "IniFile.ini");

    FUNC_23(VAR_10, "%s\\IDontExist", VAR_11);
    FUNC_6("Section", "Key4", VAR_10, "IniFile.ini");

    FUNC_11("FileName2.dll", FUNC_1(2, 1), FUNC_1(4, 3));
    FUNC_23(VAR_10, "%s\\FileName2.dll", VAR_11);
    FUNC_6("Section", "Key5", VAR_10, "IniFile.ini");

    FUNC_11("FileName3.dll", FUNC_1(1, 2), FUNC_1(3, 4));
    FUNC_23(VAR_10, "%s\\FileName3.dll", VAR_11);
    FUNC_6("Section", "Key6", VAR_10, "IniFile.ini");

    FUNC_11("FileName4.dll", FUNC_1(2, 1), FUNC_1(4, 3));
    FUNC_23(VAR_10, "%s\\FileName4.dll", VAR_11);
    FUNC_6("Section", "Key7", VAR_10, "IniFile.ini");

    VAR_9 = FUNC_13();
    FUNC_20(VAR_9, "Expected a valid database handle\n");

    FUNC_10(VAR_9);
    FUNC_7(VAR_9, "'SIGPROP1', 'NewSignature1'");
    FUNC_7(VAR_9, "'SIGPROP2', 'NewSignature2'");
    FUNC_7(VAR_9, "'SIGPROP3', 'NewSignature3'");
    FUNC_7(VAR_9, "'SIGPROP4', 'NewSignature4'");
    FUNC_7(VAR_9, "'SIGPROP5', 'NewSignature5'");
    FUNC_7(VAR_9, "'SIGPROP6', 'NewSignature6'");
    FUNC_7(VAR_9, "'SIGPROP7', 'NewSignature7'");
    FUNC_7(VAR_9, "'SIGPROP8', 'NewSignature8'");
    FUNC_7(VAR_9, "'SIGPROP9', 'NewSignature9'");
    FUNC_7(VAR_9, "'SIGPROP10', 'NewSignature10'");
    FUNC_7(VAR_9, "'SIGPROP11', 'NewSignature11'");
    FUNC_7(VAR_9, "'SIGPROP12', 'NewSignature12'");

    FUNC_12(VAR_9);


    FUNC_8(VAR_9, "'NewSignature1', 'IniFile.ini', 'Section', 'Key', 1, 2");


    FUNC_8(VAR_9, "'NewSignature2', 'IniFile.ini', 'Section', 'Key', 2, 2");


    FUNC_8(VAR_9, "'NewSignature3', 'IniFile.ini', 'Section', 'Key', 0, 2");


    FUNC_8(VAR_9, "'NewSignature4', 'IniFile.ini', 'Section', 'Key2', 1, 1");


    FUNC_8(VAR_9, "'NewSignature5', 'IniFile.ini', 'Section', 'Key2', 1, 0");


    FUNC_8(VAR_9, "'NewSignature6', 'IniFile.ini', 'Section', 'Key3', 1, 0");


    FUNC_8(VAR_9, "'NewSignature7', 'IniFile.ini', 'Section', 'Key2', 1, 1");


    FUNC_8(VAR_9, "'NewSignature8', 'IniFile.ini', 'Section', 'Key3', 1, 1");


    FUNC_8(VAR_9, "'NewSignature9', 'IniFile.ini', 'Section', 'Key4', 1, 1");


    FUNC_8(VAR_9, "'NewSignature10', 'IniFile.ini', 'Section', 'Key5', 1, 1");


    FUNC_8(VAR_9, "'NewSignature11', 'IniFile.ini', 'Section', 'Key6', 1, 1");


    FUNC_8(VAR_9, "'NewSignature12', 'IniFile.ini', 'Section', 'Key7', 1, 1");

    FUNC_14(VAR_9);
    FUNC_9(VAR_9, "'NewSignature4', 'FileName1', '', '', '', '', '', '', ''");
    FUNC_9(VAR_9, "'NewSignature9', 'IDontExist', '', '', '', '', '', '', ''");
    FUNC_9(VAR_9, "'NewSignature10', 'FileName2.dll', '1.1.1.1', '2.1.1.1', '', '', '', '', ''");
    FUNC_9(VAR_9, "'NewSignature11', 'FileName3.dll', '1.1.1.1', '2.1.1.1', '', '', '', '', ''");
    FUNC_9(VAR_9, "'NewSignature12', 'ignored', '1.1.1.1', '2.1.1.1', '', '', '', '', ''");

    VAR_16 = FUNC_21(VAR_9, &VAR_8);
    if (VAR_16 == VAR_1)
    {
        FUNC_22("Not enough rights to perform tests\n");
        goto error;
    }
    FUNC_20(VAR_16 == VAR_2, "Expected a valid package handle %u\n", VAR_16);

    FUNC_5(VAR_4, ((void*)0));

    VAR_16 = FUNC_3(VAR_8, "AppSearch");
    FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);

    VAR_15 = VAR_5;
    VAR_16 = FUNC_4(VAR_8, "SIGPROP1", VAR_12, &VAR_15);
    FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    FUNC_20(!FUNC_18(VAR_12, "keydata"), "Expected \"keydata\", got \"%s\"\n", VAR_12);

    VAR_15 = VAR_5;
    VAR_16 = FUNC_4(VAR_8, "SIGPROP2", VAR_12, &VAR_15);
    FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    FUNC_20(!FUNC_18(VAR_12, "field2"), "Expected \"field2\", got \"%s\"\n", VAR_12);

    VAR_15 = VAR_5;
    VAR_16 = FUNC_4(VAR_8, "SIGPROP3", VAR_12, &VAR_15);
    FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    FUNC_20(!FUNC_18(VAR_12, "keydata,field2"),
       "Expected \"keydata,field2\", got \"%s\"\n", VAR_12);

    VAR_15 = VAR_5;
    FUNC_23(VAR_10, "%s\\FileName1", VAR_11);
    VAR_16 = FUNC_4(VAR_8, "SIGPROP4", VAR_12, &VAR_15);
    FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    FUNC_20(!FUNC_18(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);

    VAR_15 = VAR_5;
    VAR_16 = FUNC_4(VAR_8, "SIGPROP5", VAR_12, &VAR_15);
    FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    FUNC_20(!FUNC_18(VAR_12, ""), "Expected \"\", got \"%s\"\n", VAR_12);

    VAR_15 = VAR_5;
    FUNC_23(VAR_10, "%s\\", VAR_11);
    VAR_16 = FUNC_4(VAR_8, "SIGPROP6", VAR_12, &VAR_15);
    FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    FUNC_20(!FUNC_18(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);

    VAR_15 = VAR_5;
    FUNC_23(VAR_10, "%s\\", VAR_11);
    VAR_16 = FUNC_4(VAR_8, "SIGPROP7", VAR_12, &VAR_15);
    FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    FUNC_20(!FUNC_18(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);

    if (!FUNC_17(VAR_0))
    {
        VAR_15 = VAR_5;
        FUNC_19(VAR_10, VAR_11);
        VAR_14 = FUNC_25(VAR_10, '\\');
        *(VAR_14 + 1) = 0;
        VAR_16 = FUNC_4(VAR_8, "SIGPROP8", VAR_12, &VAR_15);
        FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
        FUNC_20(!FUNC_18(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);
    }
    VAR_15 = VAR_5;
    VAR_16 = FUNC_4(VAR_8, "SIGPROP9", VAR_12, &VAR_15);
    FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
    FUNC_20(!FUNC_18(VAR_12, ""), "Expected \"\", got \"%s\"\n", VAR_12);

    if (VAR_13)
    {
        VAR_15 = VAR_5;
        FUNC_23(VAR_10, "%s\\FileName2.dll", VAR_11);
        VAR_16 = FUNC_4(VAR_8, "SIGPROP10", VAR_12, &VAR_15);
        FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
        FUNC_20(!FUNC_18(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);

        VAR_15 = VAR_5;
        VAR_16 = FUNC_4(VAR_8, "SIGPROP11", VAR_12, &VAR_15);
        FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
        FUNC_20(!FUNC_18(VAR_12, ""), "Expected \"\", got \"%s\"\n", VAR_12);

        VAR_15 = VAR_5;
        FUNC_23(VAR_10, "%s\\FileName4.dll", VAR_11);
        VAR_16 = FUNC_4(VAR_8, "SIGPROP12", VAR_12, &VAR_15);
        FUNC_20(VAR_16 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_16);
        FUNC_20(!FUNC_18(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);
    }

    FUNC_2(VAR_8);

error:
    FUNC_16("IniFile.ini");
    FUNC_0("FileName1");
    FUNC_0("FileName2.dll");
    FUNC_0("FileName3.dll");
    FUNC_0("FileName4.dll");
    FUNC_0(VAR_7);
}
