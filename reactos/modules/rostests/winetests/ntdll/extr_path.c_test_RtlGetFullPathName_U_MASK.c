
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pathbufW ;
typedef char WCHAR ;
typedef int ULONG ;
typedef int UINT ;
typedef int DWORD ;
typedef int CHAR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char const*,int,char*,char**) ;
 int FUNC_6 (char*,int,int *,char const*,int) ;
 scalar_t__ FUNC_7 (int *,int,int *,char*,int) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    static const WCHAR VAR_2[] = {0};
    static const WCHAR VAR_3[] = {'d','e','a','d','b','e','e','f',0};

    struct test
    {
        const char *path;
        const char *rname;
        const char *rfile;
        const char *alt_rname;
        const char *alt_rfile;
    };

    static const struct test VAR_4[] =
        {
            { "c:/test", "c:\\test", "test"},
            { "c:/test     ", "c:\\test", "test"},
            { "c:/test.", "c:\\test", "test"},
            { "c:/test  ....   ..   ", "c:\\test", "test"},
            { "c:/test/  ....   ..   ", "c:\\test\\", ((void*)0)},
            { "c:/test/..", "c:\\", ((void*)0)},
            { "c:/test/.. ", "c:\\test\\", ((void*)0)},
            { "c:/TEST", "c:\\TEST", "TEST"},
            { "c:/test/file", "c:\\test\\file", "file"},
            { "c:/test./file", "c:\\test\\file", "file"},
            { "c:/test.. /file", "c:\\test.. \\file","file"},
            { "c:/test/././file", "c:\\test\\file", "file"},
            { "c:/test\\.\\.\\file", "c:\\test\\file", "file"},
            { "c:/test/\\.\\.\\file", "c:\\test\\file", "file"},
            { "c:/test\\\\.\\.\\file", "c:\\test\\file", "file"},
            { "c:/test\\test1\\..\\.\\file", "c:\\test\\file", "file"},
            { "c:///test\\.\\.\\file//", "c:\\test\\file\\", ((void*)0),
                                             "c:\\test\\file", "file"},
            { "c:///test\\..\\file\\..\\//", "c:\\", ((void*)0)},
            { "c:/test../file", "c:\\test.\\file", "file",
                                             "c:\\test..\\file", "file"},
            { "c:\\test", "c:\\test", "test"},
            { ((void*)0), ((void*)0), ((void*)0)}
        };

    const struct test *VAR_5;
    WCHAR VAR_6[2*VAR_0], VAR_7[VAR_0];
    CHAR VAR_8[VAR_0], VAR_9[VAR_0];
    ULONG VAR_10;
    WCHAR *VAR_11;
    DWORD VAR_12;
    UINT VAR_13;

    if (!&FUNC_5)
    {
        FUNC_9("RtlGetFullPathName_U is not available\n");
        return;
    }

    VAR_11 = (WCHAR *)0xdeadbeef;
    FUNC_2(VAR_7, VAR_3);
    VAR_10 = FUNC_5(((void*)0), VAR_0, VAR_7, &VAR_11);
    FUNC_4(!VAR_10, "Expected RtlGetFullPathName_U to return 0, got %u\n", VAR_10);
    FUNC_4(!FUNC_1(VAR_7, VAR_3),
       "Expected the output buffer to be untouched, got %s\n", FUNC_10(VAR_7));
    FUNC_4(VAR_11 == (WCHAR *)0xdeadbeef ||
       VAR_11 == ((void*)0),
       "Expected file part pointer to be untouched, got %p\n", VAR_11);

    VAR_11 = (WCHAR *)0xdeadbeef;
    FUNC_2(VAR_7, VAR_3);
    VAR_10 = FUNC_5(VAR_2, VAR_0, VAR_7, &VAR_11);
    FUNC_4(!VAR_10, "Expected RtlGetFullPathName_U to return 0, got %u\n", VAR_10);
    FUNC_4(!FUNC_1(VAR_7, VAR_3),
       "Expected the output buffer to be untouched, got %s\n", FUNC_10(VAR_7));
    FUNC_4(VAR_11 == (WCHAR *)0xdeadbeef ||
       VAR_11 == ((void*)0),
       "Expected file part pointer to be untouched, got %p\n", VAR_11);

    for (VAR_5 = VAR_4; VAR_5->path; VAR_5++)
    {
        VAR_13= FUNC_8(VAR_5->rname) * sizeof(WCHAR);
        FUNC_6(VAR_6 , sizeof(VAR_6), ((void*)0), VAR_5->path, FUNC_8(VAR_5->path)+1 );
        VAR_10 = FUNC_5( VAR_6,VAR_0, VAR_7, &VAR_11);
        FUNC_4( VAR_10 == VAR_13 || (VAR_5->alt_rname && VAR_10 == FUNC_8(VAR_5->alt_rname)*sizeof(WCHAR)),
            "Wrong result %d/%d for \"%s\"\n", VAR_10, VAR_13, VAR_5->path );
        FUNC_4(FUNC_7(VAR_8,VAR_0,&VAR_12,VAR_7,(FUNC_3(VAR_7) + 1) * sizeof(WCHAR)) == VAR_1,
           "RtlUnicodeToMultiByteN failed\n");
        FUNC_4(!FUNC_0(VAR_8,VAR_5->rname) || (VAR_5->alt_rname && !FUNC_0(VAR_8,VAR_5->alt_rname)),
           "Got \"%s\" expected \"%s\"\n",VAR_8,VAR_5->rname);
        if (VAR_11)
        {
            FUNC_4(FUNC_7(VAR_9,VAR_0,&VAR_12,VAR_11,(FUNC_3(VAR_11) + 1) * sizeof(WCHAR)) == VAR_1,
               "RtlUnicodeToMultiByteN failed\n");
            FUNC_4((VAR_5->rfile && !FUNC_0(VAR_9,VAR_5->rfile)) ||
               (VAR_5->alt_rfile && !FUNC_0(VAR_9,VAR_5->alt_rfile)),
               "Got \"%s\" expected \"%s\"\n",VAR_9,VAR_5->rfile);
        }
        else
        {
            FUNC_4( !VAR_5->rfile, "Got NULL expected \"%s\"\n", VAR_5->rfile );
        }
    }
}
