
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf16_test ;
typedef int buf ;
typedef unsigned char WCHAR ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char const*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char const*) ;
 char* FUNC_12 (unsigned char*) ;

__attribute__((used)) static void FUNC_13(void)
{
    static const char VAR_0[] = "fprintf.tst";
    static const WCHAR VAR_1[] = {'u','n','i','c','o','d','e','\n',0};

    FILE *VAR_2 = FUNC_2(VAR_0, "wb");
    char VAR_3[1024];
    int VAR_4;

    VAR_4 = FUNC_3(VAR_2, "simple test\n");
    FUNC_9(VAR_4 == 12, "ret = %d\n", VAR_4);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 12, "ftell returned %d\n", VAR_4);

    VAR_4 = FUNC_3(VAR_2, "contains%cnull\n", '\0');
    FUNC_9(VAR_4 == 14, "ret = %d\n", VAR_4);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 26, "ftell returned %d\n", VAR_4);

    VAR_4 = FUNC_6(VAR_2, VAR_1);
    FUNC_9(VAR_4 == 8, "ret = %d\n", VAR_4);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 42, "ftell returned %d\n", VAR_4);

    FUNC_0(VAR_2);

    VAR_2 = FUNC_2(VAR_0, "rb");
    VAR_4 = FUNC_4(VAR_2, "%[^\n] ", VAR_3);
    FUNC_9(VAR_4 == 1, "ret = %d\n", VAR_4);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 12, "ftell returned %d\n", VAR_4);
    FUNC_9(!FUNC_10(VAR_3, "simple test"), "buf = %s\n", VAR_3);

    FUNC_1(VAR_3, sizeof(VAR_3), VAR_2);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 26, "ret = %d\n", VAR_4);
    FUNC_9(!FUNC_7(VAR_3, "contains\0null\n", 14), "buf = %s\n", VAR_3);

    FUNC_8(VAR_3, 0, sizeof(VAR_3));
    FUNC_1(VAR_3, sizeof(VAR_3), VAR_2);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 41, "ret =  %d\n", VAR_4);
    FUNC_9(!FUNC_7(VAR_3, VAR_1, sizeof(VAR_1)),
            "buf = %s\n", FUNC_12((WCHAR*)VAR_3));

    FUNC_0(VAR_2);

    VAR_2 = FUNC_2(VAR_0, "wt");

    VAR_4 = FUNC_3(VAR_2, "simple test\n");
    FUNC_9(VAR_4 == 12, "ret = %d\n", VAR_4);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 13, "ftell returned %d\n", VAR_4);

    VAR_4 = FUNC_3(VAR_2, "contains%cnull\n", '\0');
    FUNC_9(VAR_4 == 14, "ret = %d\n", VAR_4);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 28, "ftell returned %d\n", VAR_4);

    VAR_4 = FUNC_6(VAR_2, VAR_1);
    FUNC_9(VAR_4 == 8, "ret = %d\n", VAR_4);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 37, "ftell returned %d\n", VAR_4);

    FUNC_0(VAR_2);

    VAR_2 = FUNC_2(VAR_0, "rb");
    VAR_4 = FUNC_4(VAR_2, "%[^\n] ", VAR_3);
    FUNC_9(VAR_4 == 1, "ret = %d\n", VAR_4);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 13, "ftell returned %d\n", VAR_4);
    FUNC_9(!FUNC_10(VAR_3, "simple test\r"), "buf = %s\n", VAR_3);

    FUNC_1(VAR_3, sizeof(VAR_3), VAR_2);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 28, "ret = %d\n", VAR_4);
    FUNC_9(!FUNC_7(VAR_3, "contains\0null\r\n", 15), "buf = %s\n", VAR_3);

    FUNC_1(VAR_3, sizeof(VAR_3), VAR_2);
    VAR_4 = FUNC_5(VAR_2);
    FUNC_9(VAR_4 == 37, "ret =  %d\n", VAR_4);
    FUNC_9(!FUNC_10(VAR_3, "unicode\r\n"), "buf = %s\n", VAR_3);

    FUNC_0(VAR_2);
    FUNC_11(VAR_0);
}
