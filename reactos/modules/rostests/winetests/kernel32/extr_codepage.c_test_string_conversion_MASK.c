
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbs ;
typedef char WCHAR ;
typedef int* LPBOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int ,char const*,int,char*,int,char const*,int*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(LPBOOL VAR_4)
{
    char VAR_5;
    char VAR_6[15];
    int VAR_7;
    WCHAR VAR_8 = 228;
    WCHAR VAR_9 = 1088;
    static const WCHAR VAR_10[] = {'T', 'h', 1088, 'i', 0};
    static const WCHAR VAR_11[] = {28953, 25152, 0};
    static const WCHAR VAR_12[] = {0x7bb8, 0x3d, 0xc813, 0xac00, 0xb77d, 0};
    static const char VAR_13[] = {0xa3, 0xbf, 0};

    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(1252, 0, &VAR_8, 1, &VAR_5, 1, ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 1, "ret is %d\n", VAR_7);
    FUNC_6(VAR_5 == '\xe4', "mbc is %d\n", VAR_5);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_1, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(1252, 0, &VAR_9, 1, &VAR_5, 1, ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 1, "ret is %d\n", VAR_7);
    FUNC_6(VAR_5 == 63, "mbc is %d\n", VAR_5);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_2, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());

    if (FUNC_1(1251))
    {
        FUNC_2(0xdeadbeef);
        VAR_7 = FUNC_3(1251, 0, &VAR_9, 1, &VAR_5, 1, ((void*)0), VAR_4);
        FUNC_6(VAR_7 == 1, "ret is %d\n", VAR_7);
        FUNC_6(VAR_5 == '\xf0', "mbc is %d\n", VAR_5);
        if(VAR_4) FUNC_6(*VAR_4 == VAR_1, "bUsedDefaultChar is %d\n", *VAR_4);
        FUNC_6(FUNC_0() == 0xdeadbeef ||
           FUNC_5(FUNC_0() == 0),
           "GetLastError() is %u\n", FUNC_0());

        FUNC_2(0xdeadbeef);
        VAR_7 = FUNC_3(1251, 0, &VAR_8, 1, &VAR_5, 1, ((void*)0), VAR_4);
        FUNC_6(VAR_7 == 1, "ret is %d\n", VAR_7);
        FUNC_6(VAR_5 == 97, "mbc is %d\n", VAR_5);
        if(VAR_4) FUNC_6(*VAR_4 == VAR_1, "bUsedDefaultChar is %d\n", *VAR_4);
        FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());
    }
    else
        FUNC_7("Codepage 1251 not available\n");


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(1252, 0, VAR_10, -1, &VAR_5, 1, ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 0, "ret is %d\n", VAR_7);
    FUNC_6(VAR_5 == 84, "mbc is %d\n", VAR_5);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_1, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == VAR_0, "GetLastError() is %u\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(1252, 0, VAR_10, -1, VAR_6, sizeof(VAR_6), ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 5, "ret is %d\n", VAR_7);
    FUNC_6(!FUNC_8(VAR_6, "Th?i"), "mbs is %s\n", VAR_6);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_2, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());
    VAR_6[0] = 0;



    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(1252, 0, VAR_10, 3, VAR_6, sizeof(VAR_6), ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 3, "ret is %d\n", VAR_7);
    FUNC_6(!FUNC_8(VAR_6, "Th?i"), "mbs is %s\n", VAR_6);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_2, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());
    FUNC_4(VAR_6, 5);


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(1252, 0, VAR_10, 3, VAR_6, sizeof(VAR_6), ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 3, "ret is %d\n", VAR_7);
    FUNC_6(!FUNC_8(VAR_6, "Th?"), "mbs is %s\n", VAR_6);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_2, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());


    VAR_7 = FUNC_3(1252, 0, VAR_11, 3, VAR_6, sizeof(VAR_6), ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 3, "ret is %d\n", VAR_7);
    FUNC_6(!FUNC_8(VAR_6, "??"), "mbs is %s\n", VAR_6);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_2, "bUsedDefaultChar is %d\n", *VAR_4);

    VAR_7 = FUNC_3(936, VAR_3, VAR_12, -1, VAR_6, sizeof(VAR_6), (const char *)VAR_13, VAR_4);
    FUNC_6(VAR_7 == 10, "ret is %d\n", VAR_7);
    FUNC_6(!FUNC_8(VAR_6, "\xf3\xe7\x3d\xa3\xbf\xa3\xbf\xa3\xbf"), "mbs is %s\n", VAR_6);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_2, "bUsedDefaultChar is %d\n", *VAR_4);


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(1252, 0, &VAR_9, 1, ((void*)0), 0, ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 1, "ret is %d\n", VAR_7);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_2, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(1252, 0, VAR_10, -1, ((void*)0), 0, ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 5, "ret is %d\n", VAR_7);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_2, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());

    if (!FUNC_1(950))
    {
        FUNC_7("Codepage 950 not available\n");
        return;
    }


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(950, 0, VAR_11, -1, VAR_6, sizeof(VAR_6), ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 5, "ret is %d\n", VAR_7);
    FUNC_6(!FUNC_8(VAR_6, "\xb5H\xa9\xd2"), "mbs is %s\n", VAR_6);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_1, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(950, 0, VAR_11, 1, &VAR_5, 1, ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 0, "ret is %d\n", VAR_7);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_1, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == VAR_0, "GetLastError() is %u\n", FUNC_0());
    FUNC_4(VAR_6, 5);

    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(950, 0, VAR_11, 1, VAR_6, sizeof(VAR_6), ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 2, "ret is %d\n", VAR_7);
    FUNC_6(!FUNC_8(VAR_6, "\xb5H"), "mbs is %s\n", VAR_6);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_1, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(950, 0, VAR_11, 1, ((void*)0), 0, ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 2, "ret is %d\n", VAR_7);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_1, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_3(950, 0, VAR_11, -1, ((void*)0), 0, ((void*)0), VAR_4);
    FUNC_6(VAR_7 == 5, "ret is %d\n", VAR_7);
    if(VAR_4) FUNC_6(*VAR_4 == VAR_1, "bUsedDefaultChar is %d\n", *VAR_4);
    FUNC_6(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());
}
