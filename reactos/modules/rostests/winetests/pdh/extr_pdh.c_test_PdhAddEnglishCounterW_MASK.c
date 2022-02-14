
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PDH_STATUS ;
typedef int * PDH_HQUERY ;
typedef scalar_t__ PDH_HCOUNTER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int * VAR_4 ;
 int FUNC_4 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int *,int ,scalar_t__*) ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_6( void )
{
    PDH_STATUS VAR_6;
    PDH_HQUERY VAR_7;
    PDH_HCOUNTER VAR_8;

    VAR_6 = FUNC_2( ((void*)0), 0, &VAR_7 );
    FUNC_4(VAR_6 == VAR_0, "PdhOpenQueryW failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_1( VAR_7 );
    FUNC_4(VAR_6 == VAR_3, "PdhCollectQueryData failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_5( ((void*)0), VAR_5, 0, ((void*)0) );
    FUNC_4(VAR_6 == VAR_2, "PdhAddEnglishCounterW failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_5( ((void*)0), VAR_5, 0, &VAR_8 );
    FUNC_4(VAR_6 == VAR_2, "PdhAddEnglishCounterW failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_5( VAR_7, ((void*)0), 0, &VAR_8 );
    FUNC_4(VAR_6 == VAR_2, "PdhAddEnglishCounterW failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_5( VAR_7, VAR_5, 0, ((void*)0) );
    FUNC_4(VAR_6 == VAR_2, "PdhAddEnglishCounterW failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_5( VAR_7, VAR_4, 0, &VAR_8 );
    FUNC_4(VAR_6 == VAR_1, "PdhAddEnglishCounterW failed 0x%08x\n", VAR_6);
    FUNC_4(!VAR_8, "PdhAddEnglishCounterA failed %p\n", VAR_8);

    VAR_6 = FUNC_5( VAR_7, VAR_5, 0, &VAR_8 );
    FUNC_4(VAR_6 == VAR_0, "PdhAddEnglishCounterW failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_1( VAR_7 );
    FUNC_4(VAR_6 == VAR_0, "PdhCollectQueryData failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_3( VAR_8 );
    FUNC_4(VAR_6 == VAR_0, "PdhRemoveCounter failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_0( VAR_7 );
    FUNC_4(VAR_6 == VAR_0, "PdhCloseQuery failed 0x%08x\n", VAR_6);
}
