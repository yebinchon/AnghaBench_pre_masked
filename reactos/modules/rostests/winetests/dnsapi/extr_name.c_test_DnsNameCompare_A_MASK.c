
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char CHAR ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void FUNC_2( void )
{
    static const CHAR VAR_2[] = "",
                      VAR_3[] = ".",
                      VAR_4[] = "..",
                      VAR_5[] = "A",
                      VAR_6[] = "a",
                      VAR_7[] = "B",
                      VAR_8[] = "b",
                      VAR_9[] = "A.B",
                      VAR_10[] = "a.a",
                      VAR_11[] = "a.b",
                      VAR_12[] = "a.b.",
                      VAR_13[] = "a.b..",
                      VAR_14[] = "B.A",
                      VAR_15[] = "b.a",
                      VAR_16[] = "b.a.",
                      VAR_17[] = "b.a..";

    FUNC_1( FUNC_0( ((void*)0), ((void*)0) ) == VAR_1, "failed unexpectedly\n" );

    FUNC_1( FUNC_0( VAR_2, VAR_2 ) == VAR_1, "failed unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_3, VAR_2 ) == VAR_1, "failed unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_2, VAR_3 ) == VAR_1, "failed unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_3, VAR_4 ) == VAR_1, "failed unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_4, VAR_3 ) == VAR_1, "failed unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_6, VAR_6 ) == VAR_1, "failed unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_6, VAR_5 ) == VAR_1, "failed unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_5, VAR_6 ) == VAR_1, "failed unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_11, VAR_9 ) == VAR_1, "failed unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_11, VAR_11 ) == VAR_1, "failed unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_12, VAR_12 ) == VAR_1, "failed unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_13, VAR_13 ) == VAR_1, "failed unexpectedly\n" );

    FUNC_1( FUNC_0( VAR_2, ((void*)0) ) == VAR_0, "succeeded unexpectedly\n" );
    FUNC_1( FUNC_0( ((void*)0), VAR_2 ) == VAR_0, "succeeded unexpectedly\n" );

    FUNC_1( FUNC_0( VAR_6, VAR_8 ) == VAR_0, "succeeded unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_6, VAR_7 ) == VAR_0, "succeeded unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_5, VAR_8 ) == VAR_0, "succeeded unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_11, VAR_14 ) == VAR_0, "succeeded unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_12, VAR_16 ) == VAR_0, "succeeded unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_11, VAR_10 ) == VAR_0, "succeeded unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_13, VAR_17 ) == VAR_0, "succeeded unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_12, VAR_17 ) == VAR_0, "succeeded unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_13, VAR_16 ) == VAR_0, "succeeded unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_12, VAR_15 ) == VAR_0, "succeeded unexpectedly\n" );
    FUNC_1( FUNC_0( VAR_11, VAR_16 ) == VAR_0, "succeeded unexpectedly\n" );
}
