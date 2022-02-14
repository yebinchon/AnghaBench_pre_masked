
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PDH_STATUS ;
typedef int * PDH_HQUERY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3( void )
{
    PDH_STATUS VAR_3;
    PDH_HQUERY VAR_4;

    VAR_3 = FUNC_1( ((void*)0), 0, ((void*)0) );
    FUNC_2(VAR_3 == VAR_1, "PdhOpenQueryA failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_1( ((void*)0), 0, &VAR_4 );
    FUNC_2(VAR_3 == VAR_0, "PdhOpenQueryA failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0( ((void*)0) );
    FUNC_2(VAR_3 == VAR_2, "PdhCloseQuery failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0( VAR_4 );
    FUNC_2(VAR_3 == VAR_2, "PdhCloseQuery failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0( VAR_4 );
    FUNC_2(VAR_3 == VAR_0, "PdhCloseQuery failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0( VAR_4 );
    FUNC_2(VAR_3 == VAR_2, "PdhCloseQuery failed 0x%08x\n", VAR_3);
}
