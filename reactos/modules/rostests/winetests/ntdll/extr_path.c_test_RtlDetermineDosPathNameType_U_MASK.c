
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;


 int VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__,scalar_t__,char const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int *,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    struct test
    {
        const char *path;
        UINT ret;
    };

    static const struct test VAR_1[] =
    {
        { "\\\\foo", 1 },
        { "//foo", 1 },
        { "\\/foo", 1 },
        { "/\\foo", 1 },
        { "\\\\", 1 },
        { "//", 1 },
        { "c:\\foo", 2 },
        { "c:/foo", 2 },
        { "c://foo", 2 },
        { "c:\\", 2 },
        { "c:/", 2 },
        { "c:foo", 3 },
        { "c:f\\oo", 3 },
        { "c:foo/bar", 3 },
        { "\\foo", 4 },
        { "/foo", 4 },
        { "\\", 4 },
        { "/", 4 },
        { "foo", 5 },
        { "", 5 },
        { "\0:foo", 5 },
        { "\\\\.\\foo", 6 },
        { "//./foo", 6 },
        { "/\\./foo", 6 },
        { "\\\\.foo", 1 },
        { "//.foo", 1 },
        { "\\\\.", 7 },
        { "//.", 7 },
        { ((void*)0), 0 }
    };

    const struct test *VAR_2;
    WCHAR VAR_3[VAR_0];
    UINT VAR_4;

    if (!&FUNC_1)
    {
        FUNC_4("RtlDetermineDosPathNameType_U is not available\n");
        return;
    }

    for (VAR_2 = VAR_1; VAR_2->path; VAR_2++)
    {
        FUNC_2( VAR_3, sizeof(VAR_3), ((void*)0), VAR_2->path, FUNC_3(VAR_2->path)+1 );
        VAR_4 = FUNC_1( VAR_3 );
        FUNC_0( VAR_4 == VAR_2->ret, "Wrong result %d/%d for %s\n", VAR_4, VAR_2->ret, VAR_2->path );
    }
}
