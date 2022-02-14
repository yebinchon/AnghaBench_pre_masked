
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;


 int FUNC_0 () ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*,char*,char) ;

__attribute__((used)) static void FUNC_7(void)
{
    LPSTR VAR_0;
    char VAR_1[10];
    char VAR_2[26][4];
    char VAR_3;
    int VAR_4;


    for (VAR_3 = 'A'; VAR_3 <= 'Z'; VAR_3++)
        FUNC_6(VAR_2[VAR_3 - 'A'], "%c:\\", VAR_3);


    for (VAR_4 = 0; VAR_4 < 26; VAR_4++)
    {
        FUNC_2(0xdeadbeef);
        FUNC_4(VAR_1, "aaaaaaaaa");
        VAR_0 = FUNC_1(VAR_1, VAR_4);
        FUNC_5(VAR_0 == VAR_1, "Expected root == path, got %p\n", VAR_0);
        FUNC_5(!FUNC_3(VAR_0, VAR_2[VAR_4]), "Expected %s, got %s\n", VAR_2[VAR_4], VAR_0);
        FUNC_5(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());
    }


    FUNC_2(0xdeadbeef);
    FUNC_4(VAR_1, "aaaaaaaaa");
    VAR_0 = FUNC_1(VAR_1, -1);
    FUNC_5(VAR_0 == VAR_1, "Expected root == path, got %p\n", VAR_0);
    FUNC_5(!FUNC_3(VAR_1, "aaaaaaaaa") || !VAR_1[0],
       "Expected aaaaaaaaa or empty string, got %s\n", VAR_1);
    FUNC_5(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_2(0xdeadbeef);
    FUNC_4(VAR_1, "aaaaaaaaa");
    VAR_0 = FUNC_1(VAR_1, 26);
    FUNC_5(VAR_0 == VAR_1, "Expected root == path, got %p\n", VAR_0);
    FUNC_5(!FUNC_3(VAR_1, "aaaaaaaaa") || !VAR_1[0],
       "Expected aaaaaaaaa or empty string, got %s\n", VAR_1);
    FUNC_5(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_2(0xdeadbeef);
    FUNC_4(VAR_1, "aa");
    VAR_0 = FUNC_1(VAR_1, 0);
    FUNC_5(VAR_0 == VAR_1, "Expected root == path, got %p\n", VAR_0);
    FUNC_5(!FUNC_3(VAR_1, "A:\\"), "Expected A:\\, got %s\n", VAR_1);
    FUNC_5(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_2(0xdeadbeef);
    VAR_0 = FUNC_1(((void*)0), 0);
    FUNC_5(VAR_0 == ((void*)0), "Expected root == NULL, got %p\n", VAR_0);
    FUNC_5(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());
}
