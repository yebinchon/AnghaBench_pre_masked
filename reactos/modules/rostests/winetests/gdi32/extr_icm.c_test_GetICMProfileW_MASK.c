
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * HDC ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( HDC VAR_3 )
{
    BOOL VAR_4;
    DWORD VAR_5, VAR_6;
    WCHAR VAR_7[VAR_2];

    FUNC_2( 0xdeadbeef );
    VAR_4 = FUNC_0( ((void*)0), ((void*)0), ((void*)0) );
    if ( !VAR_4 && ( FUNC_1() == VAR_0 ) )
    {
        FUNC_4( "GetICMProfileW is not implemented\n" );
        return;
    }
    FUNC_3( !VAR_4, "GetICMProfileW succeeded\n" );

    VAR_4 = FUNC_0( VAR_3, ((void*)0), ((void*)0) );
    FUNC_3( !VAR_4, "GetICMProfileW succeeded\n" );

    if (0)
    {

        VAR_5 = VAR_2;
        VAR_4 = FUNC_0( VAR_3, &VAR_5, ((void*)0) );
        FUNC_3( VAR_4, "GetICMProfileW failed %d\n", FUNC_1() );
    }

    VAR_4 = FUNC_0( VAR_3, ((void*)0), VAR_7 );
    FUNC_3( !VAR_4, "GetICMProfileW succeeded\n" );

    VAR_5 = VAR_2;
    VAR_4 = FUNC_0( ((void*)0), &VAR_5, VAR_7 );
    FUNC_3( !VAR_4, "GetICMProfileW succeeded\n" );

    VAR_5 = 0;
    VAR_4 = FUNC_0( VAR_3, &VAR_5, ((void*)0) );
    FUNC_3( !VAR_4, "GetICMProfileW succeeded\n" );
    FUNC_3( VAR_5 > 0, "got %u\n", VAR_5 );

    VAR_5 = 0;
    FUNC_2(0xdeadbeef);
    VAR_4 = FUNC_0( VAR_3, &VAR_5, VAR_7 );
    VAR_6 = FUNC_1();
    FUNC_3( !VAR_4, "GetICMProfileW succeeded\n" );
    FUNC_3( VAR_5, "expected size > 0\n" );
    FUNC_3( VAR_6 == VAR_1, "got %d, expected ERROR_INSUFFICIENT_BUFFER\n", VAR_6 );

    VAR_5 = VAR_2;
    VAR_4 = FUNC_0( VAR_3, &VAR_5, VAR_7 );
    FUNC_3( VAR_4, "GetICMProfileW failed %d\n", FUNC_1() );
}
