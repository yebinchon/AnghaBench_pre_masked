
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef scalar_t__ HRSRC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    HRSRC VAR_11;

    VAR_11 = FUNC_1( FUNC_3(((void*)0)), FUNC_4(1), (LPCWSTR)VAR_8 );
    FUNC_7( VAR_11 != 0, "resource not found\n" );
    VAR_11 = FUNC_0( FUNC_3(((void*)0)), (LPCWSTR)VAR_8, FUNC_4(1),
                            FUNC_5( VAR_6, VAR_10 ));
    FUNC_7( VAR_11 != 0, "resource not found\n" );
    VAR_11 = FUNC_0( FUNC_3(((void*)0)), (LPCWSTR)VAR_8, FUNC_4(1),
                            FUNC_5( VAR_5, VAR_9 ));
    FUNC_7( VAR_11 != 0, "resource not found\n" );

    FUNC_6( 0xdeadbeef );
    VAR_11 = FUNC_1( FUNC_3(((void*)0)), FUNC_4(1), (LPCWSTR)VAR_7 );
    FUNC_7( !VAR_11, "resource found\n" );
    FUNC_7( FUNC_2() == VAR_2, "wrong error %u\n", FUNC_2() );

    FUNC_6( 0xdeadbeef );
    VAR_11 = FUNC_1( FUNC_3(((void*)0)), FUNC_4(2), (LPCWSTR)VAR_8 );
    FUNC_7( !VAR_11, "resource found\n" );
    FUNC_7( FUNC_2() == VAR_1, "wrong error %u\n", FUNC_2() );

    FUNC_6( 0xdeadbeef );
    VAR_11 = FUNC_0( FUNC_3(((void*)0)), (LPCWSTR)VAR_8, FUNC_4(1),
                            FUNC_5( VAR_3, VAR_9 ) );
    FUNC_7( !VAR_11, "resource found\n" );
    FUNC_7( FUNC_2() == VAR_0, "wrong error %u\n", FUNC_2() );

    FUNC_6( 0xdeadbeef );
    VAR_11 = FUNC_0( FUNC_3(((void*)0)), (LPCWSTR)VAR_8, FUNC_4(1),
                            FUNC_5( VAR_4, VAR_9 ) );
    FUNC_7( !VAR_11, "resource found\n" );
    FUNC_7( FUNC_2() == VAR_0, "wrong error %u\n", FUNC_2() );
}
