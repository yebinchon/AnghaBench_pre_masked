
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int buffer ;
typedef int buff2 ;
typedef int WCHAR ;
struct TYPE_7__ {int MaximumLength; int * Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_8__ {char* Buffer; int Length; int MaximumLength; } ;
typedef TYPE_2__ OEM_STRING ;
typedef scalar_t__ BOOLEAN ;




 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 int FUNC_2 (int,char*,scalar_t__,char*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_2__*,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int const) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;
 char FUNC_7 (char) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    struct test
    {
        const char *path;
        BOOLEAN result;
        BOOLEAN spaces;
    };

    static const struct test VAR_0[] =
    {
        { "12345678", 128, 129 },
        { "123 5678", 128, 128 },
        { "12345678.", 129, 2 },
        { "1234 678.", 129, 2 },
        { "12345678.a", 128, 129 },
        { "12345678.a ", 129, 2 },
        { "12345678.a c", 128, 128 },
        { " 2345678.a ", 129, 2 },
        { "1 345678.abc", 128, 128 },
        { "1      8.a c", 128, 128 },
        { "1 3 5 7 .abc", 129, 2 },
        { "12345678.  c", 128, 128 },
        { "123456789.a", 129, 2 },
        { "12345.abcd", 129, 2 },
        { "12345.ab d", 129, 2 },
        { ".abc", 129, 2 },
        { "12.abc.d", 129, 2 },
        { ".", 128, 129 },
        { "..", 128, 129 },
        { "...", 129, 2 },
        { "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 129, 2 },
        { ((void*)0), 0 }
    };

    const struct test *VAR_1;
    UNICODE_STRING VAR_2;
    OEM_STRING VAR_3, VAR_4;
    WCHAR VAR_5[200];
    char VAR_6[12];
    BOOLEAN VAR_7, VAR_8;

    if (!&FUNC_3)
    {
        FUNC_8("RtlIsNameLegalDOS8Dot3 is not available\n");
        return;
    }

    VAR_2.MaximumLength = sizeof(VAR_5);
    VAR_2.Buffer = VAR_5;
    for (VAR_1 = VAR_0; VAR_1->path; VAR_1++)
    {
        char VAR_9[100];
        FUNC_5(VAR_9, VAR_1->path);
        VAR_3.Buffer = VAR_9;
        VAR_3.Length = FUNC_6(VAR_1->path);
        VAR_3.MaximumLength = VAR_3.Length + 1;
        FUNC_4( &VAR_2, &VAR_3, 129 );
        VAR_8 = 2;
        VAR_4.Length = VAR_4.MaximumLength = sizeof(VAR_6);
        VAR_4.Buffer = VAR_6;
        VAR_7 = FUNC_3( &VAR_2, &VAR_4, &VAR_8 );
        FUNC_2( VAR_7 == VAR_1->result, "Wrong result %d/%d for '%s'\n", VAR_7, VAR_1->result, VAR_1->path );
        FUNC_2( VAR_8 == VAR_1->spaces, "Wrong spaces value %d/%d for '%s'\n", VAR_8, VAR_1->spaces, VAR_1->path );
        if (FUNC_6(VAR_1->path) <= 12)
        {
            char VAR_10[13];
            int VAR_11;
            FUNC_5( VAR_10, VAR_1->path );
            for (VAR_11 = 0; VAR_10[VAR_11]; VAR_11++) VAR_10[VAR_11] = FUNC_7(VAR_10[VAR_11]);
            FUNC_2( VAR_4.Length == FUNC_6(VAR_1->path), "Wrong length %d/%d for '%s'\n",
                VAR_4.Length, FUNC_0(VAR_1->path), VAR_1->path );
            FUNC_2( !FUNC_1( VAR_4.Buffer, VAR_10, VAR_4.Length ),
                "Wrong string '%.*s'/'%s'\n", VAR_4.Length, VAR_4.Buffer, VAR_10 );
        }
    }
}
