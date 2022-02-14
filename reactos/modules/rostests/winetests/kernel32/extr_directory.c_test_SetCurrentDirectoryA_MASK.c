
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    FUNC_2(0);
    FUNC_3( !FUNC_1( "\\some_dummy_dir" ), "SetCurrentDirectoryA succeeded\n" );
    FUNC_3( FUNC_0() == VAR_0, "wrong error %d\n", FUNC_0() );
    FUNC_3( !FUNC_1( "\\some_dummy\\subdir" ), "SetCurrentDirectoryA succeeded\n" );
    FUNC_3( FUNC_0() == VAR_1, "wrong error %d\n", FUNC_0() );
}
