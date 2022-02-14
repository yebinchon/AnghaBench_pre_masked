
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
    FUNC_7(VAR_2 == ((void*)0), "Expected str == NULL, got %p\n", VAR_2);
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    VAR_3[0] = '\0';
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_3);
    FUNC_7(VAR_2 == (VAR_3 + FUNC_5(VAR_3)), "Expected str to point to end of path, got %p\n", VAR_2);
    FUNC_7(!VAR_3[0], "Expected empty string, got %i\n", FUNC_5(VAR_3));
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_4(VAR_3, "one\\two");
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_3);
    FUNC_7(VAR_2 == (VAR_3 + FUNC_5(VAR_3)), "Expected str to point to end of path, got %p\n", VAR_2);
    FUNC_7(!FUNC_3(VAR_3, "one\\two\\"), "Expected one\\two\\, got %s\n", VAR_3);
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_4(VAR_3, "one\\..\\two");
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_3);
    FUNC_7(VAR_2 == (VAR_3 + FUNC_5(VAR_3)), "Expected str to point to end of path, got %p\n", VAR_2);
    FUNC_7(!FUNC_3(VAR_3, "one\\..\\two\\"), "Expected one\\..\\two\\, got %s\n", VAR_3);
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_4(VAR_3, " ");
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_3);
    FUNC_7(VAR_2 == (VAR_3 + FUNC_5(VAR_3)), "Expected str to point to end of path, got %p\n", VAR_2);
    FUNC_7(!FUNC_3(VAR_3, " \\"), "Expected  \\, got %s\n", VAR_3);
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_4(VAR_3, "C:\\one\\");
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_3);
    FUNC_7(VAR_2 == (VAR_3 + FUNC_5(VAR_3)), "Expected str to point to end of path, got %p\n", VAR_2);
    FUNC_7(!FUNC_3(VAR_3, "C:\\one\\"), "Expected C:\\one\\, got %s\n", VAR_3);
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());

    FUNC_6(VAR_4, 'a', VAR_0);
    VAR_4[VAR_0 - 1] = '\0';


    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(VAR_4);
    FUNC_7(VAR_2 == ((void*)0), "Expected str == NULL, got %p\n", VAR_2);
    FUNC_7(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());
}
