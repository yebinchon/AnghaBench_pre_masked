
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tests ;
typedef int helloWorldW ;
typedef int helloWorld ;
typedef int buf ;
typedef char WCHAR ;
typedef char BOOL ;


 int VAR_0 ;
 char FUNC_0 (char const*,char*) ;
 char FUNC_1 (char const*,char*,int) ;
 char FUNC_2 (char const*,char*,int) ;
 char FUNC_3 (char const*,char*) ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int,char*,int,char*,int) ;
 char FUNC_5 (char const*,char*) ;
 char FUNC_6 (char const*,char*,int) ;
 char FUNC_7 (char const*,char*,int) ;
 char FUNC_8 (char const*,char*) ;

 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (int,char*,int,...) ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    static const WCHAR VAR_3[] = {'H','e','l','l','o',' ','W','o','r','l','d',0};
    static const WCHAR VAR_4[] = {0};
    static const char VAR_5[] = "Hello World";
    static const struct
    {
        BOOL src, dst, ret;
    }
    VAR_6[] =
    {
        { 129, 129, 129 },
        { 128, 129, 129 },
        { 129, 128, 129 },
        { 128, 128, 128 },
    };
    BOOL VAR_7;
    int VAR_8;
    char VAR_9;
    WCHAR VAR_10, VAR_11;

    for (VAR_8 = 0; VAR_8 < sizeof(VAR_6)/sizeof(VAR_6[0]); VAR_8++)
    {
        const char *VAR_12 = VAR_6[VAR_8].ret ? VAR_5 : "";
        const char *VAR_13 = VAR_6[VAR_8].src ? VAR_5 : ((void*)0);
        char VAR_14[64], *VAR_15 = VAR_6[VAR_8].dst ? VAR_14 : ((void*)0);

        FUNC_10(VAR_14, 0, sizeof(VAR_14));
        VAR_7 = FUNC_0(VAR_13, VAR_15);
        FUNC_11(VAR_7 == VAR_6[VAR_8].ret, "test %d: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].ret, VAR_7);
        FUNC_11(!FUNC_12(VAR_14, VAR_12), "test %d: got '%s'\n", VAR_8, VAR_14);

        FUNC_10(VAR_14, 0, sizeof(VAR_14));
        VAR_7 = FUNC_1(VAR_13, VAR_15, sizeof(VAR_5));
        FUNC_11(VAR_7 == VAR_6[VAR_8].ret, "test %d: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].ret, VAR_7);
        FUNC_11(!FUNC_12(VAR_14, VAR_12), "test %d: got '%s'\n", VAR_8, VAR_14);

        FUNC_10(VAR_14, 0, sizeof(VAR_14));
        VAR_7 = FUNC_5(VAR_13, VAR_15);
        FUNC_11(VAR_7 == VAR_6[VAR_8].ret, "test %d: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].ret, VAR_7);
        FUNC_11(!FUNC_12(VAR_14, VAR_12), "test %d: got '%s'\n", VAR_8, VAR_14);

        FUNC_10(VAR_14, 0, sizeof(VAR_14));
        VAR_7 = FUNC_6(VAR_13, VAR_15, sizeof(VAR_5));
        FUNC_11(VAR_7 == VAR_6[VAR_8].ret, "test %d: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].ret, VAR_7);
        FUNC_11(!FUNC_12(VAR_14, VAR_12), "test %d: got '%s'\n", VAR_8, VAR_14);
    }

    for (VAR_8 = 0; VAR_8 < sizeof(VAR_6)/sizeof(VAR_6[0]); VAR_8++)
    {
        const char *VAR_16 = VAR_6[VAR_8].ret ? VAR_5 : "";
        const WCHAR *VAR_17 = VAR_6[VAR_8].src ? VAR_3 : ((void*)0);
        char VAR_18[64], *VAR_19 = VAR_6[VAR_8].dst ? VAR_18 : ((void*)0);

        FUNC_10(VAR_18, 0, sizeof(VAR_18));
        VAR_7 = FUNC_3(VAR_17, VAR_19);
        FUNC_11(VAR_7 == VAR_6[VAR_8].ret, "test %d: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].ret, VAR_7);
        FUNC_11(!FUNC_12(VAR_18, VAR_16), "test %d: got '%s'\n", VAR_8, VAR_18);

        FUNC_10(VAR_18, 0, sizeof(VAR_18));
        VAR_7 = FUNC_2(VAR_17, VAR_19, sizeof(VAR_3)/sizeof(WCHAR));
        FUNC_11(VAR_7 == VAR_6[VAR_8].ret, "test %d: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].ret, VAR_7);
        FUNC_11(!FUNC_12(VAR_18, VAR_16), "test %d: got '%s'\n", VAR_8, VAR_18);
    }

    for (VAR_8 = 0; VAR_8 < sizeof(VAR_6)/sizeof(VAR_6[0]); VAR_8++)
    {
        const WCHAR *VAR_20 = VAR_6[VAR_8].ret ? VAR_3 : VAR_4;
        const char *VAR_21 = VAR_6[VAR_8].src ? VAR_5 : ((void*)0);
        WCHAR VAR_22[64], *VAR_23 = VAR_6[VAR_8].dst ? VAR_22 : ((void*)0);

        FUNC_10(VAR_22, 0, sizeof(VAR_22));
        VAR_7 = FUNC_8(VAR_21, VAR_23);
        FUNC_11(VAR_7 == VAR_6[VAR_8].ret, "test %d: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].ret, VAR_7);
        FUNC_11(!FUNC_9(VAR_22, VAR_20), "test %d: got '%s'\n", VAR_8, FUNC_13(VAR_22));

        FUNC_10(VAR_22, 0, sizeof(VAR_22));
        VAR_7 = FUNC_7(VAR_21, VAR_23, sizeof(VAR_5));
        FUNC_11(VAR_7 == VAR_6[VAR_8].ret, "test %d: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].ret, VAR_7);
        FUNC_11(!FUNC_9(VAR_22, VAR_20), "test %d: got '%s'\n", VAR_8, FUNC_13(VAR_22));
    }

    for (VAR_8 = 0; VAR_8 < 0x100; VAR_8++)
    {
        VAR_9 = VAR_8;
        VAR_7 = FUNC_7( &VAR_9, &VAR_10, 1 );
        FUNC_11( VAR_7, "%02x: returns FALSE\n", VAR_8 );
        FUNC_4( VAR_0, VAR_1 | VAR_2, &VAR_9, 1, &VAR_11, 1 );
        FUNC_11( VAR_10 == VAR_11, "%02x: got %04x expected %04x\n", VAR_8, VAR_10, VAR_11 );
    }
}
