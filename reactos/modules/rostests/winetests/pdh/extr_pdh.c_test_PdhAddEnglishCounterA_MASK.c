
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
 int FUNC_4 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,char*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_6( void )
{
    PDH_STATUS VAR_4;
    PDH_HQUERY VAR_5;
    PDH_HCOUNTER VAR_6;

    VAR_4 = FUNC_2( ((void*)0), 0, &VAR_5 );
    FUNC_4(VAR_4 == VAR_0, "PdhOpenQueryA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_1( VAR_5 );
    FUNC_4(VAR_4 == VAR_3, "PdhCollectQueryData failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_5( ((void*)0), "\\System\\System Up Time", 0, ((void*)0) );
    FUNC_4(VAR_4 == VAR_2, "PdhAddEnglishCounterA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_5( ((void*)0), "\\System\\System Up Time", 0, &VAR_6 );
    FUNC_4(VAR_4 == VAR_2, "PdhAddEnglishCounterA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_5( VAR_5, ((void*)0), 0, &VAR_6 );
    FUNC_4(VAR_4 == VAR_2, "PdhAddEnglishCounterA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_5( VAR_5, "\\System\\System Up Time", 0, ((void*)0) );
    FUNC_4(VAR_4 == VAR_2, "PdhAddEnglishCounterA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_5( VAR_5, "\\System\\System Down Time", 0, &VAR_6 );
    FUNC_4(VAR_4 == VAR_1, "PdhAddEnglishCounterA failed 0x%08x\n", VAR_4);
    FUNC_4(!VAR_6, "PdhAddEnglishCounterA failed %p\n", VAR_6);

    VAR_4 = FUNC_5( VAR_5, "\\System\\System Up Time", 0, &VAR_6 );
    FUNC_4(VAR_4 == VAR_0, "PdhAddEnglishCounterA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_1( VAR_5 );
    FUNC_4(VAR_4 == VAR_0, "PdhCollectQueryData failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_3( VAR_6 );
    FUNC_4(VAR_4 == VAR_0, "PdhRemoveCounter failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_0( VAR_5 );
    FUNC_4(VAR_4 == VAR_0, "PdhCloseQuery failed 0x%08x\n", VAR_4);
}
