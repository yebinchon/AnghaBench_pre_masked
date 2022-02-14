
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char,int) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    LPSTR VAR_2;
    char VAR_3[VAR_1];
    char VAR_4[VAR_0];


    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(((void*)0));
    FUNC_7(VAR_2 == ((void*)0), "Expected NULL, got %p\n", VAR_2);
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    VAR_3[0] = '\0';
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_3);
    FUNC_7(VAR_2 == VAR_3, "Expected ext == path, got %p\n", VAR_2);
    FUNC_7(!VAR_2[0], "Expected length 0, got %i\n", FUNC_5(VAR_2));
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_4(VAR_3, "file");
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_3);
    FUNC_7(VAR_2 == VAR_3 + FUNC_5(VAR_3), "Expected ext == path, got %p\n", VAR_2);
    FUNC_7(!VAR_2[0], "Expected length 0, got %i\n", FUNC_5(VAR_2));
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_4(VAR_3, "file.txt");
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_3);
    FUNC_7(VAR_2 == VAR_3 + FUNC_5("file"),
       "Expected ext == path + lstrlenA(\"file\"), got %p\n", VAR_2);
    FUNC_7(!FUNC_3(VAR_2, ".txt"), "Expected .txt, got %s\n", VAR_2);
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_4(VAR_3, "file.txt.doc");
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_3);
    FUNC_7(VAR_2 == VAR_3 + FUNC_5("file.txt"),
       "Expected ext == path + lstrlenA(\"file.txt\"), got %p\n", VAR_2);
    FUNC_7(!FUNC_3(VAR_2, ".doc"), "Expected .txt, got %s\n", VAR_2);
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_6(VAR_4, 'a', VAR_0);
    VAR_4[VAR_0 - 1] = '\0';
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_4);
    FUNC_7(VAR_2 == VAR_4 + VAR_0 - 1, "Expected ext == too_long + LONG_LEN - 1, got %p\n", VAR_2);
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_6(VAR_4, 'a', VAR_0);
    VAR_4[VAR_0 - 1] = '\0';
    FUNC_4(VAR_4 + 300, ".abcde");
    VAR_4[FUNC_5(VAR_4)] = 'a';
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_4);
    FUNC_7(VAR_2 == VAR_4 + 300, "Expected ext == too_long + 300, got %p\n", VAR_2);
    FUNC_7(FUNC_5(VAR_2) == VAR_0 - 301, "Expected LONG_LEN - 301, got %i\n", FUNC_5(VAR_2));
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());
}
