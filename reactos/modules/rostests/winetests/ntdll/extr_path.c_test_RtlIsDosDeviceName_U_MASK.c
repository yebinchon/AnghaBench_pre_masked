
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int WORD ;
typedef int WCHAR ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;

 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,int ,int ,int ,int ,char const*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int *,char const*,scalar_t__) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    struct test
    {
        const char *path;
        WORD pos;
        WORD len;
        BOOL fails;
    };

    static const struct test VAR_0[] =
    {
        { "\\\\.\\CON", 8, 6, 128 },
        { "\\\\.\\con", 8, 6, 128 },
        { "\\\\.\\CON2", 0, 0 },
        { "", 0, 0 },
        { "\\\\foo\\nul", 0, 0 },
        { "c:\\nul:", 6, 6 },
        { "c:\\nul\\", 0, 0 },
        { "c:\\nul\\foo", 0, 0 },
        { "c:\\nul::", 6, 6, 128 },
        { "c:\\nul::::::", 6, 6, 128 },
        { "c:prn     ", 4, 6 },
        { "c:prn.......", 4, 6 },
        { "c:prn... ...", 4, 6 },
        { "c:NUL  ....  ", 4, 6, 128 },
        { "c: . . .", 0, 0 },
        { "c:", 0, 0 },
        { " . . . :", 0, 0 },
        { ":", 0, 0 },
        { "c:nul. . . :", 4, 6 },
        { "c:nul . . :", 4, 6, 128 },
        { "c:nul0", 0, 0 },
        { "c:prn:aaa", 4, 6, 128 },
        { "c:PRN:.txt", 4, 6 },
        { "c:aux:.txt...", 4, 6 },
        { "c:prn:.txt:", 4, 6 },
        { "c:nul:aaa", 4, 6, 128 },
        { "con:", 0, 6 },
        { "lpt1:", 0, 8 },
        { "c:com5:", 4, 8 },
        { "CoM4:", 0, 8 },
        { "lpt9:", 0, 8 },
        { "c:\\lpt0.txt", 0, 0 },
        { "c:aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
          "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
          "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
          "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
          "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
          "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
          "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\\nul.txt", 1000, 6 },

        { "c:\\nul", 6, 6 },
        { ((void*)0), 0 }
    };

    const struct test *VAR_1;
    WCHAR VAR_2[2000];
    ULONG VAR_3;

    if (!&FUNC_5)
    {
        FUNC_8("RtlIsDosDeviceName_U is not available\n");
        return;
    }

    for (VAR_1 = VAR_0; VAR_1->path; VAR_1++)
    {
        FUNC_6( VAR_2, sizeof(VAR_2), ((void*)0), VAR_1->path, FUNC_7(VAR_1->path)+1 );
        VAR_3 = FUNC_5( VAR_2 );
        FUNC_4( VAR_3 == FUNC_2( VAR_1->len, VAR_1->pos ) ||
            (VAR_1->fails && FUNC_3( VAR_3 == 0 )),
            "Wrong result (%d,%d)/(%d,%d) for %s\n",
            FUNC_0(VAR_3), FUNC_1(VAR_3), VAR_1->pos, VAR_1->len, VAR_1->path );
    }
}
