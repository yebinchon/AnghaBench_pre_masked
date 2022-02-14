
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {int largeValue; } ;
typedef scalar_t__ PDH_STATUS ;
typedef int * PDH_HQUERY ;
typedef int PDH_HCOUNTER ;
typedef int PDH_FMT_COUNTERVALUE ;
typedef int * HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int *,char*,int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int **) ;
 TYPE_1__ FUNC_8 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(void)
{
    PDH_STATUS VAR_6;
    PDH_HQUERY VAR_7;
    PDH_HCOUNTER VAR_8;
    HANDLE VAR_9;
    BOOL VAR_10;
    UINT VAR_11;

    VAR_6 = FUNC_7( ((void*)0), 0, &VAR_7 );
    FUNC_10(VAR_6 == VAR_0, "PdhOpenQuery failed 0x%08x\n", VAR_6);

    VAR_9 = FUNC_1( ((void*)0), VAR_1, VAR_1, "winetest" );
    FUNC_10(VAR_9 != ((void*)0), "CreateEvent failed\n");

    VAR_6 = FUNC_2( VAR_7, "\\System\\System Up Time", 0, &VAR_8 );
    FUNC_10(VAR_6 == VAR_0, "PdhAddCounterA failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_5( ((void*)0), 1, VAR_9 );
    FUNC_10(VAR_6 == VAR_4, "PdhCollectQueryDataEx failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_5( VAR_7, 1, ((void*)0) );
    FUNC_10(VAR_6 == VAR_0, "PdhCollectQueryDataEx failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_5( VAR_7, 1, VAR_9 );
    FUNC_10(VAR_6 == VAR_0, "PdhCollectQueryDataEx failed 0x%08x\n", VAR_6);

    VAR_6 = FUNC_4( VAR_7 );
    FUNC_10(VAR_6 == VAR_0, "PdhCollectQueryData failed 0x%08x\n", VAR_6);

    for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
    {
        if (FUNC_9( VAR_9, VAR_2 ) == VAR_5)
        {
            PDH_FMT_COUNTERVALUE VAR_12;

            VAR_6 = FUNC_6( VAR_8, VAR_3, ((void*)0), &VAR_12 );
            FUNC_10(VAR_6 == VAR_0, "PdhGetFormattedCounterValue failed 0x%08x\n", VAR_6);

            FUNC_11( "uptime %s\n", FUNC_12(FUNC_8(VAR_12).largeValue) );
        }
    }

    VAR_10 = FUNC_0( VAR_9 );
    FUNC_10(VAR_10, "CloseHandle failed\n");

    VAR_6 = FUNC_3( VAR_7 );
    FUNC_10(VAR_6 == VAR_0, "PdhCloseQuery failed 0x%08x\n", VAR_6);
}
