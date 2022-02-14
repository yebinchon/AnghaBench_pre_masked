
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int testingvalue ;
typedef char WCHAR ;
typedef int LONG ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (char*,char*,char*,char*,int,char*) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;

__attribute__((used)) static void FUNC_12(void)
{
    static WCHAR VAR_5[] = {'t','e','s','t','i','n','g',0};
    static WCHAR VAR_6[] = {'w','i','n','e','o','d','b','c',0};
    static WCHAR VAR_7[] = {'d','e','f','a','u','l','t',0};
    static WCHAR VAR_8[] = {'O','D','B','C','.','I','N','I',0};
    static WCHAR VAR_9[] = {'a','b','c','d','.','I','N','I',0};
    static WCHAR VAR_10[] = {'w','i','n','e',0};
    static WCHAR VAR_11[] = {'v','a','l','u','e',0};
    static WCHAR VAR_12[] = {0};
    static WCHAR VAR_13[] = {'d','e','f','a','u','l','t',0};
    static WCHAR VAR_14[] = {'d','e','f',0};
    static WCHAR VAR_15[] = {'v','a','l','u','e','0','1','2','3','4','5','6','7','8','9',0};
    static WCHAR VAR_16[] = {'t','e','s','t','i','n','g',0,'v','a','l','u','e',0};
    int VAR_17;
    WCHAR VAR_18[256] = {0};
    LONG VAR_19;

    FUNC_6(VAR_18, VAR_10);
    VAR_17 = FUNC_3(((void*)0), VAR_5 , VAR_7, VAR_18, 256, VAR_8);
    FUNC_9(VAR_17 == 0, "SQLGetPrivateProfileStringW returned %d\n", VAR_17);
    FUNC_9(!FUNC_5(VAR_18, VAR_10), "incorrect string '%s'\n", FUNC_10(VAR_18));

    FUNC_6(VAR_18, VAR_10);
    VAR_17 = FUNC_3(VAR_6, ((void*)0) , VAR_7, VAR_18, 256, VAR_8);
    FUNC_9(VAR_17 == 0, "SQLGetPrivateProfileStringW returned %d\n", VAR_17);
    FUNC_9(!FUNC_5(VAR_18, VAR_12), "incorrect string '%s'\n", FUNC_10(VAR_18));

    FUNC_6(VAR_18, VAR_11);
    VAR_17 = FUNC_3(VAR_6, VAR_5 , ((void*)0), VAR_18, 256, VAR_8);
    FUNC_9(VAR_17 == 0, "SQLGetPrivateProfileStringW returned %d\n", VAR_17);
    FUNC_9(!FUNC_5(VAR_18, VAR_12), "incorrect string '%s'\n", FUNC_10(VAR_18));

    VAR_17 = FUNC_3(VAR_6, VAR_5 , VAR_13, VAR_18, 256, VAR_8);
    FUNC_9(VAR_17 == FUNC_7(VAR_13), "SQLGetPrivateProfileStringW returned %d\n", VAR_17);
    FUNC_9(!FUNC_5(VAR_18, VAR_13), "incorrect string '%s'\n", FUNC_10(VAR_18));

    VAR_17 = FUNC_3(VAR_6, VAR_5 , VAR_13, VAR_18, 4, VAR_8);
    FUNC_9(VAR_17 == FUNC_7(VAR_14), "SQLGetPrivateProfileStringW returned %d\n", VAR_17);
    FUNC_9(!FUNC_5(VAR_18, VAR_14), "incorrect string '%s'\n", FUNC_10(VAR_18));

    VAR_17 = FUNC_3(VAR_6, VAR_5 , VAR_13, VAR_18, 8, VAR_8);
    FUNC_9(VAR_17 == FUNC_7(VAR_13), "SQLGetPrivateProfileStringW returned %d\n", VAR_17);
    FUNC_9(!FUNC_5(VAR_18, VAR_13), "incorrect string '%s'\n", FUNC_10(VAR_18));

    VAR_17 = FUNC_3(VAR_6, VAR_5 , VAR_13, ((void*)0), 256, VAR_8);
    FUNC_9(VAR_17 == 0, "SQLGetPrivateProfileStringW returned %d\n", VAR_17);

    FUNC_6(VAR_18, VAR_11);
    VAR_17 = FUNC_3(VAR_6, VAR_5 , VAR_13, VAR_18, 0, VAR_8);
    FUNC_9(VAR_17 == 0, "SQLGetPrivateProfileStringW returned %d\n", VAR_17);
    FUNC_9(!FUNC_5(VAR_18, VAR_11), "incorrect string '%s'\n", FUNC_10(VAR_18));

    VAR_17 = FUNC_4("wineodbc", "testing" , "value0123456789", "abcd.ini");
    FUNC_9(VAR_17, "SQLWritePrivateProfileString failed\n");
    if(VAR_17)
    {
        HKEY VAR_20;

        VAR_17 = FUNC_3(VAR_6, VAR_5 , VAR_13, VAR_18, 256, VAR_9);
        FUNC_9(VAR_17 == FUNC_7(VAR_15), "SQLGetPrivateProfileStringW returned %d\n", VAR_17);
        FUNC_9(!FUNC_5(VAR_18, VAR_15), "incorrect string '%s'\n", FUNC_10(VAR_18));

        VAR_17 = FUNC_3(VAR_6, VAR_5 , VAR_13, ((void*)0), 0, VAR_9);
        FUNC_9(VAR_17 == 0, "SQLGetPrivateProfileStringW returned %d\n", VAR_17);

        VAR_17 = FUNC_3(VAR_6, VAR_5 , VAR_13, VAR_18, 7, VAR_9);
        FUNC_9(VAR_17 == 6, "SQLGetPrivateProfileStringW returned %d\n", VAR_17);

        FUNC_6(VAR_18, VAR_10);
        VAR_17 = FUNC_3(VAR_6, ((void*)0) , VAR_12, VAR_18, 10, VAR_9);
        FUNC_9(VAR_17 == FUNC_7(VAR_5)+1, "SQLGetPrivateProfileStringW returned %d\n", VAR_17);
        FUNC_9(!FUNC_5(VAR_18, VAR_5), "incorrect string '%s'\n", FUNC_10(VAR_18));

        VAR_17 = FUNC_4("wineodbc", "value" , "0", "abcd.ini");
        FUNC_9(VAR_17, "SQLWritePrivateProfileString failed\n");

        FUNC_6(VAR_18, VAR_10);
        VAR_17 = FUNC_3(VAR_6, ((void*)0) , VAR_12, VAR_18, 256, VAR_9);
        FUNC_9(VAR_17 == (FUNC_7(VAR_5) + FUNC_7(VAR_11)+2), "SQLGetPrivateProfileStringW returned %d\n", VAR_17);
        if(VAR_17 == (FUNC_7(VAR_5) + FUNC_7(VAR_11)+2))
        {
            FUNC_9(!FUNC_8(VAR_18, VAR_16, sizeof(VAR_16)),
                      "incorrect string '%s'\n", FUNC_11(VAR_18, VAR_17));
        }

        FUNC_6(VAR_18, VAR_11);
        VAR_17 = FUNC_3(VAR_6, ((void*)0) , VAR_12, VAR_18, 10, VAR_9);
        FUNC_9(VAR_17 == FUNC_7(VAR_5)+1, "SQLGetPrivateProfileStringW returned %d\n", VAR_17);
        if(VAR_17 >= FUNC_7(VAR_5)+1)
        {
            FUNC_9(!FUNC_5(VAR_18, VAR_5), "incorrect string '%s'\n", FUNC_10(VAR_18));
        }

        FUNC_6(VAR_18, VAR_11);
        VAR_17 = FUNC_3(VAR_6, ((void*)0) , VAR_12, VAR_18, 2, VAR_9);
        FUNC_9(VAR_17 == 0, "SQLGetPrivateProfileStringW returned %d\n", VAR_17);

        VAR_19 = FUNC_2(VAR_1, VAR_3, 0, VAR_2, &VAR_20);
        FUNC_9(VAR_19 == VAR_0, "RegOpenKeyExW failed\n");
        if(VAR_19 == VAR_0)
        {
            VAR_19 = FUNC_1(VAR_1, VAR_3);
            FUNC_9(VAR_19 == VAR_0, "RegDeleteKeyW failed\n");

            FUNC_0(VAR_20);
        }


        VAR_19 = FUNC_1(VAR_1, VAR_4);
        FUNC_9(VAR_19 == VAR_0, "RegDeleteKeyW failed\n");
    }
}
