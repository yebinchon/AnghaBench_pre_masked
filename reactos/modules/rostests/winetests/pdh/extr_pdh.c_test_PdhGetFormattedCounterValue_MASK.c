
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PDH_STATUS ;
typedef int PDH_HQUERY ;
typedef int * PDH_HCOUNTER ;
typedef int PDH_FMT_COUNTERVALUE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*,int ,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7( void )
{
    PDH_STATUS VAR_7;
    PDH_HQUERY VAR_8;
    PDH_HCOUNTER VAR_9;
    PDH_FMT_COUNTERVALUE VAR_10;

    VAR_7 = FUNC_4( ((void*)0), 0, &VAR_8 );
    FUNC_6(VAR_7 == VAR_0, "PdhOpenQueryA failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_0( VAR_8, "\\System\\System Up Time", 0, &VAR_9 );
    FUNC_6(VAR_7 == VAR_0, "PdhAddCounterA failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3( ((void*)0), VAR_2, ((void*)0), ((void*)0) );
    FUNC_6(VAR_7 == VAR_5, "PdhGetFormattedCounterValue failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3( ((void*)0), VAR_2, ((void*)0), &VAR_10 );
    FUNC_6(VAR_7 == VAR_6, "PdhGetFormattedCounterValue failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3( VAR_9, VAR_2, ((void*)0), ((void*)0) );
    FUNC_6(VAR_7 == VAR_5, "PdhGetFormattedCounterValue failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3( VAR_9, VAR_2, ((void*)0), &VAR_10 );
    FUNC_6(VAR_7 == VAR_0, "PdhGetFormattedCounterValue failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_2( VAR_8 );
    FUNC_6(VAR_7 == VAR_0, "PdhCollectQueryData failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3( VAR_9, VAR_2, ((void*)0), &VAR_10 );
    FUNC_6(VAR_7 == VAR_0, "PdhGetFormattedCounterValue failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3( VAR_9, VAR_2 | VAR_4, ((void*)0), &VAR_10 );
    FUNC_6(VAR_7 == VAR_0, "PdhGetFormattedCounterValue failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3( VAR_9, VAR_2 | VAR_3, ((void*)0), &VAR_10 );
    FUNC_6(VAR_7 == VAR_0, "PdhGetFormattedCounterValue failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3( VAR_9, VAR_2 | VAR_1, ((void*)0), &VAR_10 );
    FUNC_6(VAR_7 == VAR_0, "PdhGetFormattedCounterValue failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_5( VAR_9, 2 );
    FUNC_6(VAR_7 == VAR_0, "PdhSetCounterScaleFactor failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3( VAR_9, VAR_2, ((void*)0), &VAR_10 );
    FUNC_6(VAR_7 == VAR_0, "PdhGetFormattedCounterValue failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1( VAR_8 );
    FUNC_6(VAR_7 == VAR_0, "PdhCloseQuery failed 0x%08x\n", VAR_7);
}
