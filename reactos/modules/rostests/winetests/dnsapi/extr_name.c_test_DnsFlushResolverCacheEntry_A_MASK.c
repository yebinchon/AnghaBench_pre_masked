
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_0;
    DWORD VAR_1;

    FUNC_2( 0xdeadbeef );
    VAR_0 = FUNC_0( ((void*)0) );
    VAR_1 = FUNC_1();
    FUNC_3( !VAR_0, "got %d\n", VAR_0 );
    FUNC_3( VAR_1 == 0xdeadbeef, "got %u\n", VAR_1 );

    VAR_0 = FUNC_0( "localhost" );
    FUNC_3( VAR_0, "got %d\n", VAR_0 );

    VAR_0 = FUNC_0( "nxdomain.test.winehq.org" );
    FUNC_3( VAR_0, "got %d\n", VAR_0 );
}
