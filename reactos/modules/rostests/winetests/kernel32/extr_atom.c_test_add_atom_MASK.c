
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef char* LPCSTR ;
typedef int INT_PTR ;
typedef int ATOM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_8(void)
{
    ATOM VAR_6, VAR_7;
    INT_PTR VAR_8;

    FUNC_5( 0xdeadbeef );
    VAR_6 = FUNC_1( "foobar" );
    FUNC_6( VAR_6 >= 0xc000, "bad atom id %x\n", VAR_6 );
    FUNC_6( FUNC_0() == 0xdeadbeef, "GlobalAddAtomA set last error\n" );


    FUNC_6( FUNC_3( "foobar" ) == VAR_6, "could not find atom foobar\n" );
    FUNC_6( FUNC_3( "FOOBAR" ) == VAR_6, "could not find atom FOOBAR\n" );
    FUNC_6( !FUNC_3( "_foobar" ), "found _foobar\n" );



    FUNC_5( 0xdeadbeef );
    VAR_7 = FUNC_2( VAR_4 );
    if (VAR_7 && FUNC_0() != VAR_0)
        VAR_5 = VAR_2;
    else
        FUNC_7("WARNING: Unicode atom APIs are not supported on this platform\n");

    if (VAR_5)
    {
        FUNC_6( VAR_7 == VAR_6, "Unicode atom does not match ASCII\n" );
        FUNC_6( FUNC_0() == 0xdeadbeef, "GlobalAddAtomW set last error\n" );
    }


    if (VAR_5)
    {
        FUNC_6( FUNC_4( VAR_4 ) == VAR_6, "could not find atom foobar\n" );
        FUNC_6( FUNC_4( VAR_1 ) == VAR_6, "could not find atom FOOBAR\n" );
        FUNC_6( !FUNC_4( VAR_3 ), "found _foobar\n" );
    }





    FUNC_5( 0xdeadbeef );
    FUNC_6( FUNC_1(0) == 0 && FUNC_0() == 0xdeadbeef, "succeeded to add atom 0\n" );
    if (VAR_5)
    {
        FUNC_5( 0xdeadbeef );
        FUNC_6( FUNC_2(0) == 0 && FUNC_0() == 0xdeadbeef, "succeeded to add atom 0\n" );
    }

    FUNC_5( 0xdeadbeef );
    for (VAR_8 = 1; VAR_8 <= 0xbfff; VAR_8++)
    {
        FUNC_5( 0xdeadbeef );
        FUNC_6( FUNC_1((LPCSTR)VAR_8) == VAR_8 && FUNC_0() == 0xdeadbeef,
            "failed to add atom %lx\n", VAR_8 );
        if (VAR_5)
        {
            FUNC_5( 0xdeadbeef );
            FUNC_6( FUNC_2((LPCWSTR)VAR_8) == VAR_8 && FUNC_0() == 0xdeadbeef,
                "failed to add atom %lx\n", VAR_8 );
        }
    }

    for (VAR_8 = 0xc000; VAR_8 <= 0xffff; VAR_8++)
    {
        FUNC_6( !FUNC_1((LPCSTR)VAR_8), "succeeded adding %lx\n", VAR_8 );
        if (VAR_5)
            FUNC_6( !FUNC_2((LPCWSTR)VAR_8), "succeeded adding %lx\n", VAR_8 );
    }
}
