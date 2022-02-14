
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef char WCHAR ;
typedef int * DLL_DIRECTORY_COOKIE ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,char const*,int ,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,int) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int,char*,...) ;
 int * FUNC_8 (char const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    static const WCHAR VAR_3[] = {'t','m','p',0};
    static const WCHAR VAR_4[] = {'.','\\','.',0};
    static const WCHAR VAR_5[] = {'\\',0};
    WCHAR VAR_6[VAR_2], VAR_7[VAR_2];
    DLL_DIRECTORY_COOKIE VAR_8;
    BOOL VAR_9;

    if (!&FUNC_8 || !&FUNC_9)
    {
        FUNC_10( "AddDllDirectory not available\n" );
        return;
    }

    VAR_7[0] = '\0';
    FUNC_3( sizeof(VAR_6)/sizeof(VAR_6[0]), VAR_6 );
    VAR_9 = FUNC_2( VAR_6, VAR_3, 0, VAR_7 );
    FUNC_7( VAR_9, "GetTempFileName failed err %u\n", FUNC_1() );
    FUNC_5( 0xdeadbeef );
    VAR_8 = FUNC_8( VAR_7 );
    FUNC_7( VAR_8 != ((void*)0), "AddDllDirectory failed err %u\n", FUNC_1() );
    FUNC_5( 0xdeadbeef );
    VAR_9 = FUNC_9( VAR_8 );
    FUNC_7( VAR_9, "RemoveDllDirectory failed err %u\n", FUNC_1() );

    FUNC_0( VAR_7 );
    FUNC_5( 0xdeadbeef );
    VAR_8 = FUNC_8( VAR_7 );
    FUNC_7( !VAR_8, "AddDllDirectory succeeded\n" );
    FUNC_7( FUNC_1() == VAR_0, "wrong error %u\n", FUNC_1() );
    VAR_8 = FUNC_8( VAR_4 );
    FUNC_7( !VAR_8, "AddDllDirectory succeeded\n" );
    FUNC_7( FUNC_1() == VAR_1, "wrong error %u\n", FUNC_1() );
    VAR_8 = FUNC_8( VAR_5 );
    FUNC_7( VAR_8 != ((void*)0), "AddDllDirectory failed err %u\n", FUNC_1() );
    FUNC_5( 0xdeadbeef );
    VAR_9 = FUNC_9( VAR_8 );
    FUNC_7( VAR_9, "RemoveDllDirectory failed err %u\n", FUNC_1() );
    FUNC_4( VAR_7, VAR_2 );
    FUNC_6( VAR_7 + 2, VAR_3 );
    VAR_8 = FUNC_8( VAR_7 );
    FUNC_7( !VAR_8, "AddDllDirectory succeeded\n" );
    FUNC_7( FUNC_1() == VAR_1, "wrong error %u\n", FUNC_1() );
}
