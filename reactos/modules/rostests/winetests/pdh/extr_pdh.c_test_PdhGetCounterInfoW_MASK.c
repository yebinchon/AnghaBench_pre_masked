
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int info ;
struct TYPE_3__ {int lScale; } ;
typedef int PDH_STATUS ;
typedef int PDH_HQUERY ;
typedef int * PDH_HCOUNTER ;
typedef TYPE_1__ PDH_COUNTER_INFO_W ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int **) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int*,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6( void )
{
    PDH_STATUS VAR_5;
    PDH_HQUERY VAR_6;
    PDH_HCOUNTER VAR_7;
    PDH_COUNTER_INFO_W VAR_8;
    DWORD VAR_9;

    VAR_5 = FUNC_3( ((void*)0), 0, &VAR_6 );
    FUNC_5(VAR_5 == VAR_0, "PdhOpenQueryW failed 0x%08x\n", VAR_5);

    VAR_5 = FUNC_0( VAR_6, VAR_4, 0, &VAR_7 );
    FUNC_5(VAR_5 == VAR_0, "PdhAddCounterW failed 0x%08x\n", VAR_5);

    VAR_5 = FUNC_2( ((void*)0), 0, ((void*)0), ((void*)0) );
    FUNC_5(VAR_5 == VAR_2 || VAR_5 == VAR_1, "PdhGetCounterInfoW failed 0x%08x\n", VAR_5);

    VAR_5 = FUNC_2( VAR_7, 0, ((void*)0), ((void*)0) );
    FUNC_5(VAR_5 == VAR_1, "PdhGetCounterInfoW failed 0x%08x\n", VAR_5);

    VAR_5 = FUNC_2( VAR_7, 0, ((void*)0), &VAR_8 );
    FUNC_5(VAR_5 == VAR_1, "PdhGetCounterInfoW failed 0x%08x\n", VAR_5);

    VAR_9 = sizeof(VAR_8) - 1;
    VAR_5 = FUNC_2( VAR_7, 0, &VAR_9, ((void*)0) );
    FUNC_5(VAR_5 == VAR_3 || VAR_5 == VAR_1, "PdhGetCounterInfoW failed 0x%08x\n", VAR_5);

    VAR_9 = sizeof(VAR_8);
    VAR_5 = FUNC_2( VAR_7, 0, &VAR_9, &VAR_8 );
    FUNC_5(VAR_5 == VAR_0, "PdhGetCounterInfoW failed 0x%08x\n", VAR_5);
    FUNC_5(VAR_9 == sizeof(VAR_8), "PdhGetCounterInfoW failed %d\n", VAR_9);

    VAR_5 = FUNC_2( VAR_7, 0, &VAR_9, &VAR_8 );
    FUNC_5(VAR_5 == VAR_0, "PdhGetCounterInfoW failed 0x%08x\n", VAR_5);
    FUNC_5(VAR_8.lScale == 0, "lScale %d\n", VAR_8.lScale);

    VAR_5 = FUNC_4( VAR_7, 0 );
    FUNC_5(VAR_5 == VAR_0, "PdhSetCounterScaleFactor failed 0x%08x\n", VAR_5);

    VAR_5 = FUNC_2( VAR_7, 0, &VAR_9, &VAR_8 );
    FUNC_5(VAR_5 == VAR_0, "PdhGetCounterInfoW failed 0x%08x\n", VAR_5);
    FUNC_5(VAR_8.lScale == 0, "lScale %d\n", VAR_8.lScale);

    VAR_5 = FUNC_4( VAR_7, -5 );
    FUNC_5(VAR_5 == VAR_0, "PdhSetCounterScaleFactor failed 0x%08x\n", VAR_5);

    VAR_5 = FUNC_2( VAR_7, 0, &VAR_9, &VAR_8 );
    FUNC_5(VAR_5 == VAR_0, "PdhGetCounterInfoW failed 0x%08x\n", VAR_5);
    FUNC_5(VAR_8.lScale == -5, "lScale %d\n", VAR_8.lScale);

    VAR_5 = FUNC_1( VAR_6 );
    FUNC_5(VAR_5 == VAR_0, "PdhCloseQuery failed 0x%08x\n", VAR_5);
}
