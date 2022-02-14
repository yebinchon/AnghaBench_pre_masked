
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* UINT ;
typedef int MSIHANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 char* VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,char*) ;
 char* FUNC_5 (int ,char*,char*,int*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,int,char*,char*,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int ,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char*) ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (char*,char*) ;
 char* VAR_7 ;
 int FUNC_22 (int,char*,...) ;
 char* FUNC_23 (int ,int *) ;
 int FUNC_24 (char*,char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,char*,...) ;
 int FUNC_27 (char*,char*) ;

__attribute__((used)) static void FUNC_28(void)
{
    MSIHANDLE VAR_8, VAR_9;
    char VAR_10[VAR_5], VAR_11[VAR_5], VAR_12[VAR_5];
    BOOL VAR_13;
    DWORD VAR_14;
    UINT VAR_15;

    VAR_13 = VAR_6;
    if (!FUNC_14("test.dll", FUNC_2(2, 1), FUNC_2(4, 3)))
        VAR_13 = VAR_3;

    FUNC_1("test.dll");

    FUNC_18("FileName1");
    FUNC_0("one", ((void*)0));
    FUNC_0("one\\two", ((void*)0));
    FUNC_0("one\\two\\three", ((void*)0));
    FUNC_18("one\\two\\three\\FileName2");
    FUNC_0("another", ((void*)0));
    FUNC_14("FileName3.dll", FUNC_2(2, 1), FUNC_2(4, 3));
    FUNC_14("FileName4.dll", FUNC_2(1, 2), FUNC_2(3, 4));
    FUNC_14("FileName5.dll", FUNC_2(2, 1), FUNC_2(4, 3));

    VAR_9 = FUNC_15();
    FUNC_22(VAR_9, "Expected a valid database handle\n");

    FUNC_12(VAR_9);
    FUNC_8(VAR_9, "'SIGPROP1', 'NewSignature1'");
    FUNC_8(VAR_9, "'SIGPROP2', 'NewSignature2'");
    FUNC_8(VAR_9, "'SIGPROP3', 'NewSignature3'");
    FUNC_8(VAR_9, "'SIGPROP4', 'NewSignature4'");
    FUNC_8(VAR_9, "'SIGPROP5', 'NewSignature5'");
    FUNC_8(VAR_9, "'SIGPROP6', 'NewSignature6'");
    FUNC_8(VAR_9, "'SIGPROP7', 'NewSignature7'");
    FUNC_8(VAR_9, "'SIGPROP8', 'NewSignature8'");
    FUNC_8(VAR_9, "'SIGPROP9', 'NewSignature9'");
    FUNC_8(VAR_9, "'SIGPROP10', 'NewSignature10'");
    FUNC_8(VAR_9, "'SIGPROP11', 'NewSignature11'");
    FUNC_8(VAR_9, "'SIGPROP13', 'NewSignature13'");

    FUNC_13(VAR_9);

    FUNC_27(VAR_11, VAR_0);
    if (FUNC_19(VAR_0)) VAR_11[2] = 0;


    FUNC_26(VAR_10, "'NewSignature1', '', '%s', 0", VAR_11);
    FUNC_9(VAR_9, VAR_10);


    FUNC_26(VAR_10, "'NewSignature2', '', '%s', 0", VAR_11);
    FUNC_9(VAR_9, VAR_10);


    FUNC_26(VAR_10, "'NewSignature3', '', '%s', 0", VAR_11 + 3);
    FUNC_9(VAR_9, VAR_10);


    FUNC_26(VAR_10, "'NewSignature4', '', '%s', 2", VAR_11);
    FUNC_9(VAR_9, VAR_10);


    FUNC_26(VAR_10, "'NewSignature5', '', '%s', 3", VAR_11);
    FUNC_9(VAR_9, VAR_10);


    FUNC_26(VAR_10, "'NewSignature6', '', '%s', 1", VAR_11);
    FUNC_9(VAR_9, VAR_10);


    FUNC_26(VAR_10, "'NewSignature7', 'NewSignature1', 'one\\two\\three', 1");
    FUNC_9(VAR_9, VAR_10);


    FUNC_26(VAR_10, "'NewSignature8', '', '%s', 0", VAR_11);
    FUNC_9(VAR_9, VAR_10);


    FUNC_26(VAR_10, "'NewSignature9', '', '%s', 0", VAR_11);
    FUNC_9(VAR_9, VAR_10);


    FUNC_26(VAR_10, "'NewSignature10', '', '%s', 0", VAR_11);
    FUNC_9(VAR_9, VAR_10);


    FUNC_26(VAR_10, "'NewSignature11', '', '', 0");
    FUNC_9(VAR_9, VAR_10);

    FUNC_16(VAR_9);


    FUNC_10(VAR_9, "NewSignature12", 2, "htmlfile\\shell\\open\\nonexistent", "", 1);


    FUNC_26(VAR_10, "'NewSignature13', 'NewSignature12', '', 0");
    FUNC_9(VAR_9, VAR_10);

    FUNC_17(VAR_9);
    FUNC_11(VAR_9, "'NewSignature1', 'FileName1', '', '', '', '', '', '', ''");
    FUNC_11(VAR_9, "'NewSignature4', 'FileName2', '', '', '', '', '', '', ''");
    FUNC_11(VAR_9, "'NewSignature5', 'FileName2', '', '', '', '', '', '', ''");
    FUNC_11(VAR_9, "'NewSignature6', 'another', '', '', '', '', '', '', ''");
    FUNC_11(VAR_9, "'NewSignature7', 'FileName2', '', '', '', '', '', '', ''");
    FUNC_11(VAR_9, "'NewSignature8', 'FileName3.dll', '1.1.1.1', '2.1.1.1', '', '', '', '', ''");
    FUNC_11(VAR_9, "'NewSignature9', 'FileName4.dll', '1.1.1.1', '2.1.1.1', '', '', '', '', ''");
    FUNC_11(VAR_9, "'NewSignature10', 'necessary', '1.1.1.1', '2.1.1.1', '', '', '', '', ''");

    VAR_15 = FUNC_23(VAR_9, &VAR_8);
    if (VAR_15 == VAR_1)
    {
        FUNC_25("Not enough rights to perform tests\n");
        goto error;
    }
    FUNC_22(VAR_15 == VAR_2, "Expected a valid package handle %u\n", VAR_15);

    FUNC_6(VAR_4, ((void*)0));

    VAR_15 = FUNC_4(VAR_8, "AppSearch");
    FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);

    VAR_14 = VAR_5;
    FUNC_26(VAR_10, "%s\\FileName1", VAR_11);
    VAR_15 = FUNC_5(VAR_8, "SIGPROP1", VAR_12, &VAR_14);
    FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_22(!FUNC_20(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);

    VAR_14 = VAR_5;
    FUNC_26(VAR_10, "%s\\", VAR_11);
    VAR_15 = FUNC_5(VAR_8, "SIGPROP2", VAR_12, &VAR_14);
    FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_22(!FUNC_20(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);

    VAR_14 = VAR_5;
    FUNC_24(VAR_10, VAR_11 + 3);
    VAR_15 = FUNC_5(VAR_8, "SIGPROP3", VAR_12, &VAR_14);
    FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_22(!FUNC_21(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);

    VAR_14 = VAR_5;
    VAR_15 = FUNC_5(VAR_8, "SIGPROP4", VAR_12, &VAR_14);
    FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_22(!FUNC_20(VAR_12, ""), "Expected \"\", got \"%s\"\n", VAR_12);

    VAR_14 = VAR_5;
    FUNC_26(VAR_10, "%s\\one\\two\\three\\FileName2", VAR_11);
    VAR_15 = FUNC_5(VAR_8, "SIGPROP5", VAR_12, &VAR_14);
    FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_22(!FUNC_20(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);

    VAR_14 = VAR_5;
    VAR_15 = FUNC_5(VAR_8, "SIGPROP6", VAR_12, &VAR_14);
    FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_22(!FUNC_20(VAR_12, ""), "Expected \"\", got \"%s\"\n", VAR_12);

    VAR_14 = VAR_5;
    FUNC_26(VAR_10, "%s\\one\\two\\three\\FileName2", VAR_11);
    VAR_15 = FUNC_5(VAR_8, "SIGPROP7", VAR_12, &VAR_14);
    FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_22(!FUNC_20(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);

    if (VAR_13)
    {
        VAR_14 = VAR_5;
        FUNC_26(VAR_10, "%s\\FileName3.dll", VAR_11);
        VAR_15 = FUNC_5(VAR_8, "SIGPROP8", VAR_12, &VAR_14);
        FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
        FUNC_22(!FUNC_20(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);

        VAR_14 = VAR_5;
        VAR_15 = FUNC_5(VAR_8, "SIGPROP9", VAR_12, &VAR_14);
        FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
        FUNC_22(!FUNC_20(VAR_12, ""), "Expected \"\", got \"%s\"\n", VAR_12);

        VAR_14 = VAR_5;
        VAR_15 = FUNC_5(VAR_8, "SIGPROP10", VAR_12, &VAR_14);
        FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
        FUNC_22(!FUNC_20(VAR_12, ""), "Expected \"\", got \"%s\"\n", VAR_12);
    }

    VAR_14 = VAR_5;
    FUNC_24(VAR_10, "");
    VAR_15 = FUNC_5(VAR_8, "SIGPROP11", VAR_12, &VAR_14);
    FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_22(!FUNC_21(VAR_12, VAR_10), "Expected \"%s\", got \"%s\"\n", VAR_10, VAR_12);

    VAR_14 = VAR_5;
    FUNC_27(VAR_10, "c:\\");
    VAR_15 = FUNC_5(VAR_8, "SIGPROP13", VAR_12, &VAR_14);
    FUNC_22(VAR_15 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_15);
    FUNC_22(!VAR_12[0], "Expected \"\", got \"%s\"\n", VAR_12);

    FUNC_3(VAR_8);

error:
    FUNC_1("FileName1");
    FUNC_1("FileName3.dll");
    FUNC_1("FileName4.dll");
    FUNC_1("FileName5.dll");
    FUNC_1("one\\two\\three\\FileName2");
    FUNC_7("one\\two\\three");
    FUNC_7("one\\two");
    FUNC_7("one");
    FUNC_7("another");
    FUNC_1(VAR_7);
}
