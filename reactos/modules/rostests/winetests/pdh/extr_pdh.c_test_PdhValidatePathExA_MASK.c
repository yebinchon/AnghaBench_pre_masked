
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PDH_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2( void )
{
    PDH_STATUS VAR_4;

    VAR_4 = FUNC_1( ((void*)0), ((void*)0) );
    FUNC_0(VAR_4 == VAR_3, "PdhValidatePathExA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_1( ((void*)0), "" );
    FUNC_0(VAR_4 == VAR_3, "PdhValidatePathExA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_1( ((void*)0), "\\System" );
    FUNC_0(VAR_4 == VAR_1, "PdhValidatePathExA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_1( ((void*)0), "System Up Time" );
    FUNC_0(VAR_4 == VAR_1, "PdhValidatePathExA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_1( ((void*)0), "\\System\\System Down Time" );
    FUNC_0(VAR_4 == VAR_2, "PdhValidatePathExA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_1( ((void*)0), "\\System\\System Up Time" );
    FUNC_0(VAR_4 == VAR_0, "PdhValidatePathExA failed 0x%08x\n", VAR_4);
}
