
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PDH_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2( void )
{
    PDH_STATUS VAR_4;

    VAR_4 = FUNC_0( ((void*)0) );
    FUNC_1(VAR_4 == VAR_3, "PdhValidatePathA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_0( "" );
    FUNC_1(VAR_4 == VAR_3, "PdhValidatePathA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_0( "\\System" );
    FUNC_1(VAR_4 == VAR_1, "PdhValidatePathA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_0( "System Up Time" );
    FUNC_1(VAR_4 == VAR_1, "PdhValidatePathA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_0( "\\System\\Nonexistent Counter" );
    FUNC_1(VAR_4 == VAR_2, "PdhValidatePathA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_0( "\\System\\System Up Time" );
    FUNC_1(VAR_4 == VAR_0, "PdhValidatePathA failed 0x%08x\n", VAR_4);
}
