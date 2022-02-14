
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int ,int ,int *,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*,int ,char*) ;
 int FUNC_8 (int,char*) ;
 int VAR_7 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,char*,int *,int,char*,int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void FUNC_18(void)
{
    BOOL VAR_8;
    char VAR_9[VAR_7], VAR_10[VAR_7], VAR_11[VAR_7], VAR_12[VAR_7];
    HANDLE VAR_13;

    if (!&FUNC_15)
    {
        FUNC_17( "SetSearchPathMode isn't available\n" );
        return;
    }
    FUNC_4( VAR_7, VAR_9 );
    FUNC_8( VAR_7, VAR_10 );
    FUNC_7( VAR_10, "path", 0, VAR_11 );
    FUNC_3( VAR_11 );
    FUNC_1( VAR_11, ((void*)0) );
    VAR_8 = FUNC_11( VAR_11 );
    FUNC_14( VAR_8, "failed to switch to %s\n", VAR_11 );
    if (!VAR_8)
    {
        FUNC_9( VAR_11 );
        return;
    }

    VAR_13 = FUNC_2( "kernel32.dll", VAR_6, 0, ((void*)0), VAR_3, 0, 0 );
    FUNC_0( VAR_13 );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_15( 0 );
    FUNC_14( !VAR_8, "SetSearchPathMode succeeded\n" );
    FUNC_14( FUNC_5() == VAR_5, "wrong error %u\n", FUNC_5() );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_15( 0x80 );
    FUNC_14( !VAR_8, "SetSearchPathMode succeeded\n" );
    FUNC_14( FUNC_5() == VAR_5, "wrong error %u\n", FUNC_5() );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_15( VAR_2 );
    FUNC_14( !VAR_8, "SetSearchPathMode succeeded\n" );
    FUNC_14( FUNC_5() == VAR_5, "wrong error %u\n", FUNC_5() );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_10( ((void*)0), "kernel32.dll", ((void*)0), VAR_7, VAR_10, ((void*)0) );
    FUNC_14( VAR_8, "SearchPathA failed err %u\n", FUNC_5() );
    FUNC_4( VAR_7, VAR_12 );
    FUNC_16( VAR_12, "\\kernel32.dll" );
    FUNC_14( !FUNC_13( VAR_10, VAR_12 ), "found %s expected %s\n", VAR_10, VAR_12 );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_15( VAR_1 );
    FUNC_14( VAR_8, "SetSearchPathMode failed err %u\n", FUNC_5() );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_10( ((void*)0), "kernel32.dll", ((void*)0), VAR_7, VAR_10, ((void*)0) );
    FUNC_14( VAR_8, "SearchPathA failed err %u\n", FUNC_5() );
    FUNC_6( VAR_12, VAR_7 );
    FUNC_16( VAR_12, "\\kernel32.dll" );
    FUNC_14( !FUNC_13( VAR_10, VAR_12 ), "found %s expected %s\n", VAR_10, VAR_12 );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_15( VAR_0 );
    FUNC_14( VAR_8, "SetSearchPathMode failed err %u\n", FUNC_5() );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_10( ((void*)0), "kernel32.dll", ((void*)0), VAR_7, VAR_10, ((void*)0) );
    FUNC_14( VAR_8, "SearchPathA failed err %u\n", FUNC_5() );
    FUNC_4( VAR_7, VAR_12 );
    FUNC_16( VAR_12, "\\kernel32.dll" );
    FUNC_14( !FUNC_13( VAR_10, VAR_12 ), "found %s expected %s\n", VAR_10, VAR_12 );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_15( VAR_0 | VAR_2 );
    FUNC_14( !VAR_8, "SetSearchPathMode succeeded\n" );
    FUNC_14( FUNC_5() == VAR_5, "wrong error %u\n", FUNC_5() );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_15( VAR_1 | VAR_2 );
    FUNC_14( VAR_8, "SetSearchPathMode failed err %u\n", FUNC_5() );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_15( VAR_0 );
    FUNC_14( !VAR_8, "SetSearchPathMode succeeded\n" );
    FUNC_14( FUNC_5() == VAR_4, "wrong error %u\n", FUNC_5() );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_15( VAR_1 );
    FUNC_14( !VAR_8, "SetSearchPathMode succeeded\n" );
    FUNC_14( FUNC_5() == VAR_4, "wrong error %u\n", FUNC_5() );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_15( VAR_1 | VAR_2 );
    FUNC_14( VAR_8, "SetSearchPathMode failed err %u\n", FUNC_5() );

    FUNC_12( 0xdeadbeef );
    VAR_8 = FUNC_10( ((void*)0), "kernel32.dll", ((void*)0), VAR_7, VAR_10, ((void*)0) );
    FUNC_14( VAR_8, "SearchPathA failed err %u\n", FUNC_5() );
    FUNC_6( VAR_12, VAR_7 );
    FUNC_16( VAR_12, "\\kernel32.dll" );
    FUNC_14( !FUNC_13( VAR_10, VAR_12 ), "found %s expected %s\n", VAR_10, VAR_12 );

    FUNC_3( "kernel32.dll" );
    FUNC_11( VAR_9 );
    FUNC_9( VAR_11 );
}
