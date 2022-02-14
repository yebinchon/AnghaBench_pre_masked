
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PDH_STATUS ;
typedef int PDH_HQUERY ;
typedef int * PDH_HCOUNTER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,int ,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5( void )
{
    PDH_STATUS VAR_3;
    PDH_HQUERY VAR_4;
    PDH_HCOUNTER VAR_5;

    VAR_3 = FUNC_2( ((void*)0), 0, &VAR_4 );
    FUNC_4(VAR_3 == VAR_0, "PdhOpenQueryA failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0( VAR_4, "\\System\\System Up Time", 0, &VAR_5 );
    FUNC_4(VAR_3 == VAR_0, "PdhAddCounterA failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_3( ((void*)0), 8 );
    FUNC_4(VAR_3 == VAR_2, "PdhSetCounterScaleFactor failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_3( ((void*)0), 1 );
    FUNC_4(VAR_3 == VAR_2, "PdhSetCounterScaleFactor failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_3( VAR_5, 8 );
    FUNC_4(VAR_3 == VAR_1, "PdhSetCounterScaleFactor failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_3( VAR_5, -8 );
    FUNC_4(VAR_3 == VAR_1, "PdhSetCounterScaleFactor failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_3( VAR_5, 7 );
    FUNC_4(VAR_3 == VAR_0, "PdhSetCounterScaleFactor failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_3( VAR_5, 0 );
    FUNC_4(VAR_3 == VAR_0, "PdhSetCounterScaleFactor failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_1( VAR_4 );
    FUNC_4(VAR_3 == VAR_0, "PdhCloseQuery failed 0x%08x\n", VAR_3);
}
