
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tests ;
typedef int path ;
typedef int WCHAR ;
struct TYPE_2__ {int member_0; int member_1; int member_2; } ;
typedef int * HMODULE ;
typedef int * DLL_DIRECTORY_COOKIE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char*,char*,int ,char*) ;
 int FUNC_6 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_7 (char*,int ,int) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ,char*,int,int *,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int,char*,...) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,char*,unsigned int) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static void FUNC_20(void)
{
    static const struct
    {
        int add_dirs[4];
        int dll_dir;
        int expect;
    } VAR_9[] =
    {
        { { 1, 2, 3 }, 4, 3 },
        { { 1, 3, 2 }, 4, 2 },
        { { 3, 1 }, 4, 1 },
        { { 5, 6 }, 4, 4 },
        { { 5, 2 }, 4, 2 },
        { { 0 }, 4, 4 },
        { { 0 }, 0, 0 },
        { { 6, 5 }, 5, 0 },
        { { 1, 1, 2 }, 0, 2 },
    };
    char *VAR_10, VAR_11[VAR_8], VAR_12[VAR_8];
    WCHAR VAR_13[VAR_8];
    DLL_DIRECTORY_COOKIE VAR_14[4];
    unsigned int VAR_15, VAR_16, VAR_17;
    BOOL VAR_18;
    HMODULE VAR_19;

    if (!&FUNC_15 || !&FUNC_17) return;

    FUNC_6( sizeof(VAR_11), VAR_11 );
    FUNC_5( VAR_11, "tmp", 0, VAR_12 );
    FUNC_1( VAR_12 );
    VAR_18 = FUNC_0( VAR_12, ((void*)0) );
    FUNC_14( VAR_18, "CreateDirectory failed err %u\n", FUNC_3() );
    VAR_10 = VAR_12 + FUNC_19( VAR_12 );
    for (VAR_15 = 1; VAR_15 <= 6; VAR_15++)
    {
        FUNC_18( VAR_10, "\\%u", VAR_15 );
        VAR_18 = FUNC_0( VAR_12, ((void*)0) );
        FUNC_14( VAR_18, "CreateDirectory failed err %u\n", FUNC_3() );
        if (VAR_15 >= 5) continue;
        FUNC_18( VAR_10, "\\%u\\winetestdll.dll", VAR_15 );
        FUNC_12( VAR_12 );
    }
    FUNC_10( 0xdeadbeef );
    VAR_19 = FUNC_7( "winetestdll.dll", 0, VAR_4 );
    FUNC_14( !VAR_19, "LoadLibrary succeeded\n" );
    FUNC_14( FUNC_3() == VAR_2, "wrong error %u\n", FUNC_3() );

    FUNC_10( 0xdeadbeef );
    VAR_19 = FUNC_7( "winetestdll.dll", 0, VAR_7 );
    FUNC_14( !VAR_19, "LoadLibrary succeeded\n" );
    FUNC_14( FUNC_3() == VAR_2 || FUNC_11(FUNC_3() == VAR_3),
        "wrong error %u\n", FUNC_3() );

    FUNC_10( 0xdeadbeef );
    VAR_19 = FUNC_7( "winetestdll.dll", 0, VAR_6 );
    FUNC_14( !VAR_19, "LoadLibrary succeeded\n" );
    FUNC_14( FUNC_3() == VAR_2, "wrong error %u\n", FUNC_3() );

    FUNC_10( 0xdeadbeef );
    VAR_19 = FUNC_7( "winetestdll.dll", 0, VAR_5 );
    FUNC_14( !VAR_19, "LoadLibrary succeeded\n" );
    FUNC_14( FUNC_3() == VAR_1, "wrong error %u\n", FUNC_3() );

    FUNC_10( 0xdeadbeef );
    VAR_19 = FUNC_7( "winetestdll.dll", 0, VAR_5 | VAR_6 );
    FUNC_14( !VAR_19, "LoadLibrary succeeded\n" );
    FUNC_14( FUNC_3() == VAR_1, "wrong error %u\n", FUNC_3() );

    FUNC_10( 0xdeadbeef );
    VAR_19 = FUNC_7( "foo\\winetestdll.dll", 0, VAR_5 );
    FUNC_14( !VAR_19, "LoadLibrary succeeded\n" );
    FUNC_14( FUNC_3() == VAR_1, "wrong error %u\n", FUNC_3() );

    FUNC_10( 0xdeadbeef );
    VAR_19 = FUNC_7( "\\windows\\winetestdll.dll", 0, VAR_5 );
    FUNC_14( !VAR_19, "LoadLibrary succeeded\n" );
    FUNC_14( FUNC_3() == VAR_2, "wrong error %u\n", FUNC_3() );

    for (VAR_16 = 0; VAR_16 < sizeof(VAR_9) / sizeof(VAR_9[0]); VAR_16++)
    {
        for (VAR_17 = 0; VAR_9[VAR_16].add_dirs[VAR_17]; VAR_17++)
        {
            FUNC_18( VAR_10, "\\%u", VAR_9[VAR_16].add_dirs[VAR_17] );
            FUNC_8( VAR_0, 0, VAR_12, -1, VAR_13, VAR_8 );
            VAR_14[VAR_17] = FUNC_15( VAR_13 );
            FUNC_14( VAR_14[VAR_17] != ((void*)0), "failed to add %s\n", VAR_12 );
        }
        if (VAR_9[VAR_16].dll_dir)
        {
            FUNC_18( VAR_10, "\\%u", VAR_9[VAR_16].dll_dir );
            FUNC_17( VAR_12 );
        }
        else FUNC_17( ((void*)0) );

        FUNC_10( 0xdeadbeef );
        VAR_19 = FUNC_7( "winetestdll.dll", 0, VAR_7 );
        if (VAR_9[VAR_16].expect)
        {
            FUNC_14( VAR_19 != ((void*)0), "%u: LoadLibrary failed err %u\n", VAR_16, FUNC_3() );
            FUNC_4( VAR_19, VAR_11, VAR_8 );
            FUNC_18( VAR_10, "\\%u\\winetestdll.dll", VAR_9[VAR_16].expect );
            FUNC_14( !FUNC_13( VAR_11, VAR_12 ), "%u: wrong module %s expected %s\n", VAR_16, VAR_11, VAR_12 );
        }
        else
        {
            FUNC_14( !VAR_19, "%u: LoadLibrary succeeded\n", VAR_16 );
            FUNC_14( FUNC_3() == VAR_2 || FUNC_11(FUNC_3() == VAR_3),
                "%u: wrong error %u\n", VAR_16, FUNC_3() );
        }
        FUNC_2( VAR_19 );

        for (VAR_17 = 0; VAR_9[VAR_16].add_dirs[VAR_17]; VAR_17++) FUNC_16( VAR_14[VAR_17] );
    }

    for (VAR_15 = 1; VAR_15 <= 6; VAR_15++)
    {
        FUNC_18( VAR_10, "\\%u\\winetestdll.dll", VAR_15 );
        FUNC_1( VAR_12 );
        FUNC_18( VAR_10, "\\%u", VAR_15 );
        FUNC_9( VAR_12 );
    }
    *VAR_10 = 0;
    FUNC_9( VAR_12 );
}
