
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
typedef TYPE_1__ PDH_COUNTER_INFO_A ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int **) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int*,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6( void )
{
    PDH_STATUS VAR_4;
    PDH_HQUERY VAR_5;
    PDH_HCOUNTER VAR_6;
    PDH_COUNTER_INFO_A VAR_7;
    DWORD VAR_8;

    VAR_4 = FUNC_3( ((void*)0), 0, &VAR_5 );
    FUNC_5(VAR_4 == VAR_0, "PdhOpenQueryA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_0( VAR_5, "\\System\\System Up Time", 0, &VAR_6 );
    FUNC_5(VAR_4 == VAR_0, "PdhAddCounterA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_2( ((void*)0), 0, ((void*)0), ((void*)0) );
    FUNC_5(VAR_4 == VAR_2 || VAR_4 == VAR_1, "PdhGetCounterInfoA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_2( VAR_6, 0, ((void*)0), ((void*)0) );
    FUNC_5(VAR_4 == VAR_1, "PdhGetCounterInfoA failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_2( VAR_6, 0, ((void*)0), &VAR_7 );
    FUNC_5(VAR_4 == VAR_1, "PdhGetCounterInfoA failed 0x%08x\n", VAR_4);

    VAR_8 = sizeof(VAR_7) - 1;
    VAR_4 = FUNC_2( VAR_6, 0, &VAR_8, ((void*)0) );
    FUNC_5(VAR_4 == VAR_3 || VAR_4 == VAR_1, "PdhGetCounterInfoA failed 0x%08x\n", VAR_4);

    VAR_8 = sizeof(VAR_7);
    VAR_4 = FUNC_2( VAR_6, 0, &VAR_8, &VAR_7 );
    FUNC_5(VAR_4 == VAR_0, "PdhGetCounterInfoA failed 0x%08x\n", VAR_4);
    FUNC_5(VAR_8 == sizeof(VAR_7), "PdhGetCounterInfoA failed %d\n", VAR_8);

    VAR_4 = FUNC_2( VAR_6, 0, &VAR_8, &VAR_7 );
    FUNC_5(VAR_4 == VAR_0, "PdhGetCounterInfoA failed 0x%08x\n", VAR_4);
    FUNC_5(VAR_7.lScale == 0, "lScale %d\n", VAR_7.lScale);

    VAR_4 = FUNC_4( VAR_6, 0 );
    FUNC_5(VAR_4 == VAR_0, "PdhSetCounterScaleFactor failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_2( VAR_6, 0, &VAR_8, &VAR_7 );
    FUNC_5(VAR_4 == VAR_0, "PdhGetCounterInfoA failed 0x%08x\n", VAR_4);
    FUNC_5(VAR_7.lScale == 0, "lScale %d\n", VAR_7.lScale);

    VAR_4 = FUNC_4( VAR_6, -5 );
    FUNC_5(VAR_4 == VAR_0, "PdhSetCounterScaleFactor failed 0x%08x\n", VAR_4);

    VAR_4 = FUNC_2( VAR_6, 0, &VAR_8, &VAR_7 );
    FUNC_5(VAR_4 == VAR_0, "PdhGetCounterInfoA failed 0x%08x\n", VAR_4);
    FUNC_5(VAR_7.lScale == -5, "lScale %d\n", VAR_7.lScale);

    VAR_4 = FUNC_1( VAR_5 );
    FUNC_5(VAR_4 == VAR_0, "PdhCloseQuery failed 0x%08x\n", VAR_4);
}
