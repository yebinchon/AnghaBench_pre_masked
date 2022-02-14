
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PDH_STATUS ;
typedef int * PDH_HQUERY ;
typedef int * PDH_HCOUNTER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int * VAR_5 ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_7( void )
{
    PDH_STATUS VAR_7;
    PDH_HQUERY VAR_8;
    PDH_HCOUNTER VAR_9;

    VAR_7 = FUNC_3( ((void*)0), 0, &VAR_8 );
    FUNC_6(VAR_7 == VAR_0, "PdhOpenQueryW failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_0( ((void*)0), VAR_6, 0, ((void*)0) );
    FUNC_6(VAR_7 == VAR_2, "PdhAddCounterW failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_0( ((void*)0), VAR_6, 0, &VAR_9 );
    FUNC_6(VAR_7 == VAR_3, "PdhAddCounterW failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_0( VAR_8, ((void*)0), 0, &VAR_9 );
    FUNC_6(VAR_7 == VAR_2, "PdhAddCounterW failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_0( VAR_8, VAR_6, 0, ((void*)0) );
    FUNC_6(VAR_7 == VAR_2, "PdhAddCounterW failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_0( VAR_8, VAR_5, 0, &VAR_9 );
    FUNC_6(VAR_7 == VAR_1 ||
       FUNC_5(VAR_7 == VAR_4),
       "PdhAddCounterW failed 0x%08x\n", VAR_7);
    FUNC_6(!VAR_9, "PdhAddCounterW failed %p\n", VAR_9);

    VAR_7 = FUNC_0( VAR_8, VAR_6, 0, &VAR_9 );
    FUNC_6(VAR_7 == VAR_0, "PdhAddCounterW failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_2( ((void*)0) );
    FUNC_6(VAR_7 == VAR_3, "PdhCollectQueryData failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_2( VAR_9 );
    FUNC_6(VAR_7 == VAR_3, "PdhCollectQueryData failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_2( VAR_8 );
    FUNC_6(VAR_7 == VAR_0, "PdhCollectQueryData failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_4( ((void*)0) );
    FUNC_6(VAR_7 == VAR_3, "PdhRemoveCounter failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_4( VAR_9 );
    FUNC_6(VAR_7 == VAR_0, "PdhRemoveCounter failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1( VAR_8 );
    FUNC_6(VAR_7 == VAR_0, "PdhCloseQuery failed 0x%08x\n", VAR_7);
}
