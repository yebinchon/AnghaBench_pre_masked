
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int testset ;
typedef int output ;
typedef int invalid_parameters ;
typedef int UINT ;
typedef char* LPSTR ;
typedef char const* LPCSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,int,char*,char**) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    char VAR_2[VAR_1], *VAR_3;
    DWORD VAR_4;
    int VAR_5;
    UINT VAR_6;

    const struct
    {
        LPCSTR name;
        DWORD len;
        LPSTR buffer;
        LPSTR *lastpart;
    } VAR_7[] =
    {
        {((void*)0), 0, ((void*)0), ((void*)0)},
        {((void*)0), VAR_1, ((void*)0), ((void*)0)},
        {((void*)0), VAR_1, VAR_2, ((void*)0)},
        {((void*)0), VAR_1, VAR_2, &VAR_3},
        {"", 0, ((void*)0), ((void*)0)},
        {"", VAR_1, ((void*)0), ((void*)0)},
        {"", VAR_1, VAR_2, ((void*)0)},
        {"", VAR_1, VAR_2, &VAR_3},
    };

    for (VAR_5 = 0; VAR_5 < sizeof(VAR_7)/sizeof(VAR_7[0]); VAR_5++)
    {
        FUNC_3(0xdeadbeef);
        FUNC_8(VAR_2, "deadbeef");
        VAR_3 = (char *)0xdeadbeef;
        VAR_4 = FUNC_1(VAR_7[VAR_5].name,
                               VAR_7[VAR_5].len,
                               VAR_7[VAR_5].buffer,
                               VAR_7[VAR_5].lastpart);
        FUNC_5(!VAR_4, "[%d] Expected GetFullPathNameA to return 0, got %u\n", VAR_5, VAR_4);
        FUNC_5(!FUNC_7(VAR_2, "deadbeef"), "[%d] Expected the output buffer to be unchanged, got \"%s\"\n", VAR_5, VAR_2);
        FUNC_5(VAR_3 == (char *)0xdeadbeef, "[%d] Expected output file part pointer to be untouched, got %p\n", VAR_5, VAR_3);
        FUNC_5(FUNC_2() == 0xdeadbeef ||
           FUNC_2() == VAR_0,
           "[%d] Expected GetLastError() to return 0xdeadbeef, got %u\n",
           VAR_5, FUNC_2());
    }

    VAR_6 = FUNC_0();
    if (VAR_6 != 932)
        FUNC_6("Skipping DBCS(Japanese) GetFullPathNameA test in this codepage (%d)\n", VAR_6);
    else {
        const struct dbcs_case {
            const char *input;
            const char *expected;
        } VAR_8[] = {
            { "c:\\a\\\x95\x5c\x97\xa0.txt", "\x95\x5c\x97\xa0.txt" },
            { "c:\\\x83\x8f\x83\x43\x83\x93\\wine.c", "wine.c" },
            { "c:\\demo\\\x97\xa0\x95\x5c", "\x97\xa0\x95\x5c" }
        };
        for (VAR_5 = 0; VAR_5 < sizeof(VAR_8)/sizeof(VAR_8[0]); VAR_5++) {
            VAR_4 = FUNC_1(VAR_8[VAR_5].input, sizeof(VAR_2),
                                   VAR_2, &VAR_3);
            FUNC_5(VAR_4, "[%d] GetFullPathName error %u\n", VAR_5, FUNC_2());
            FUNC_5(!FUNC_4(VAR_3, VAR_8[VAR_5].expected),
               "[%d] expected %s got %s\n", VAR_5, VAR_8[VAR_5].expected, VAR_3);
        }
    }
}
