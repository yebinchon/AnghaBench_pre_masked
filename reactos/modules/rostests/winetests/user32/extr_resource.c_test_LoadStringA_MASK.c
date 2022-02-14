
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int HINSTANCE ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ,int,char*,unsigned int const) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,char const*,int const) ;
 int FUNC_8 (int,char*,unsigned int const,...) ;

__attribute__((used)) static void FUNC_9 (void)
{
    HINSTANCE VAR_0 = FUNC_1(((void*)0));
    static const char VAR_1[] = "String resource";
    char VAR_2[128];
    struct string_test {
        unsigned int bufsiz;
        unsigned int expected;
    };
    struct string_test VAR_3[] = {{sizeof VAR_2, sizeof VAR_1 - 1},
                                  {sizeof VAR_1, sizeof VAR_1 - 1},
                                  {sizeof VAR_1 - 1, sizeof VAR_1 - 2}};
    unsigned int VAR_4;
    int VAR_5, VAR_6;

    FUNC_5 (sizeof VAR_1 < sizeof VAR_2);
    for (VAR_4 = 0; VAR_4 < sizeof VAR_3 / sizeof VAR_3[0]; VAR_4++) {
        const unsigned int VAR_7 = VAR_3[VAR_4].bufsiz;
        const unsigned int VAR_8 = VAR_3[VAR_4].expected;
        const int VAR_9 = FUNC_2 (VAR_0, 0, VAR_2, VAR_7);

        FUNC_8 (VAR_9 == VAR_8, "bufsiz=%d: got %d, expected %d\n",
            VAR_7, VAR_9, VAR_8);
        if (VAR_9 != VAR_8) continue;
        FUNC_8 (!FUNC_7 (VAR_2, VAR_1, VAR_9),
            "bufsiz=%d: got '%s', expected '%.*s'\n",
            VAR_7, VAR_2, VAR_9, VAR_1);
        FUNC_8 (VAR_2[VAR_9] == 0, "bufsiz=%d: NUL termination missing\n",
            VAR_7);
    }

    VAR_5 = FUNC_2(VAR_0, 1, VAR_2, sizeof(VAR_2) );
    FUNC_8( VAR_5 > 0, "LoadString failed: ret %d err %d\n", VAR_5, FUNC_0());
    VAR_6 = FUNC_2( VAR_0, FUNC_3( 1, 0x8000 ), VAR_2, sizeof(VAR_2));
    FUNC_8( VAR_6 == VAR_5, "LoadString failed: ret %d err %d\n", VAR_5, FUNC_0());
    VAR_6 = FUNC_2( VAR_0, FUNC_3( 1, 0xffff ), VAR_2, sizeof(VAR_2));
    FUNC_8( VAR_6 == VAR_5, "LoadString failed: ret %d err %d\n", VAR_5, FUNC_0());

    VAR_5 = FUNC_2(VAR_0, 65534, VAR_2, sizeof(VAR_2) );
    FUNC_8( VAR_5 > 0, "LoadString failed: ret %d err %d\n", VAR_5, FUNC_0());
    VAR_6 = FUNC_2( VAR_0, FUNC_3( 65534, 0x8000 ), VAR_2, sizeof(VAR_2));
    FUNC_8( VAR_6 == VAR_5, "LoadString failed: ret %d err %d\n", VAR_5, FUNC_0());
    VAR_6 = FUNC_2( VAR_0, FUNC_3( 65534, 0xffff ), VAR_2, sizeof(VAR_2));
    FUNC_8( VAR_6 == VAR_5, "LoadString failed: ret %d err %d\n", VAR_5, FUNC_0());

    VAR_5 = FUNC_2(VAR_0, 0, VAR_2, 0);
    FUNC_8( VAR_5 == -1 || FUNC_6(VAR_5 == 0),
        "LoadStringA did not return -1 when called with buflen = 0, got %d, err %d\n",
        VAR_5, FUNC_0());

    FUNC_4(0xdeadbeef);
    VAR_2[0] = 'a';
    VAR_5 = FUNC_2(VAR_0, 1, VAR_2, 1);
    FUNC_8( !VAR_5, "LoadString returned %d\n", VAR_5);
    FUNC_8( VAR_2[0] == 0, "buf[0] = %c (%x)\n", VAR_2[0], VAR_2[0]);
    FUNC_8( FUNC_0() == 0xdeadbeef, "GetLastError() = %d\n", FUNC_0());
}
