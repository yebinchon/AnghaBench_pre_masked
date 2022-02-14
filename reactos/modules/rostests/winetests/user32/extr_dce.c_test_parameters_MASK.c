
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HDC ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    HDC VAR_3;

    VAR_3 = FUNC_0( VAR_0 );
    FUNC_2( FUNC_1( VAR_2, VAR_3 ), "ReleaseDC with wrong window should succeed\n" );

    VAR_3 = FUNC_0( VAR_0 );
    FUNC_2( !FUNC_1( VAR_0, 0 ), "ReleaseDC with wrong HDC should fail\n" );
    FUNC_2( FUNC_1( VAR_0, VAR_3 ), "correct ReleaseDC should succeed\n" );
    FUNC_2( !FUNC_1( VAR_0, VAR_3 ), "second ReleaseDC should fail\n" );

    VAR_3 = FUNC_0( VAR_2 );
    FUNC_2( FUNC_1( VAR_0, VAR_3 ), "ReleaseDC with wrong window should succeed\n" );
    VAR_3 = FUNC_0( VAR_2 );
    FUNC_2( FUNC_1( VAR_2, VAR_3 ), "correct ReleaseDC should succeed\n" );
    FUNC_2( FUNC_1( VAR_2, VAR_3 ), "second ReleaseDC should succeed\n" );

    VAR_3 = FUNC_0( VAR_1 );
    FUNC_2( FUNC_1( VAR_0, VAR_3 ), "ReleaseDC with wrong window should succeed\n" );
    VAR_3 = FUNC_0( VAR_1 );
    FUNC_2( FUNC_1( VAR_1, VAR_3 ), "correct ReleaseDC should succeed\n" );
    FUNC_2( FUNC_1( VAR_1, VAR_3 ), "second ReleaseDC should succeed\n" );
}
