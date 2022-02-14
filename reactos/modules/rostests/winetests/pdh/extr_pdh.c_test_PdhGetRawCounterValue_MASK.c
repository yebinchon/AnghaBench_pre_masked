
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ CStatus; } ;
typedef scalar_t__ PDH_STATUS ;
typedef TYPE_1__ PDH_RAW_COUNTER ;
typedef int PDH_HQUERY ;
typedef int * PDH_HCOUNTER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,int ,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6( void )
{
    PDH_STATUS VAR_3;
    PDH_HQUERY VAR_4;
    PDH_HCOUNTER VAR_5;
    PDH_RAW_COUNTER VAR_6;

    VAR_3 = FUNC_4( ((void*)0), 0, &VAR_4 );
    FUNC_5(VAR_3 == VAR_0, "PdhOpenQueryA failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0( VAR_4, "\\System\\System Up Time", 0, &VAR_5 );
    FUNC_5(VAR_3 == VAR_0, "PdhAddCounterA failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_3( ((void*)0), ((void*)0), &VAR_6 );
    FUNC_5(VAR_3 == VAR_2, "PdhGetRawCounterValue failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_3( VAR_5, ((void*)0), ((void*)0) );
    FUNC_5(VAR_3 == VAR_1, "PdhGetRawCounterValue failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_3( VAR_5, ((void*)0), &VAR_6 );
    FUNC_5(VAR_3 == VAR_0, "PdhGetRawCounterValue failed 0x%08x\n", VAR_3);
    FUNC_5(VAR_6.CStatus == VAR_0, "expected ERROR_SUCCESS got %x\n", VAR_6.CStatus);

    VAR_3 = FUNC_2( VAR_4 );
    FUNC_5(VAR_3 == VAR_0, "PdhCollectQueryData failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_3( VAR_5, ((void*)0), &VAR_6 );
    FUNC_5(VAR_3 == VAR_0, "PdhGetRawCounterValue failed 0x%08x\n", VAR_3);
    FUNC_5(VAR_6.CStatus == VAR_0, "expected ERROR_SUCCESS got %x\n", VAR_6.CStatus);

    VAR_3 = FUNC_1( VAR_4 );
    FUNC_5(VAR_3 == VAR_0, "PdhCloseQuery failed 0x%08x\n", VAR_3);
}
