
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int usertime ;
typedef int sbi ;
typedef int kerneltime ;
typedef int idletime ;
typedef int ULONG ;
struct TYPE_18__ {int QuadPart; int HighPart; int LowPart; } ;
typedef TYPE_4__ ULARGE_INTEGER ;
struct TYPE_20__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_17__ {int QuadPart; } ;
struct TYPE_16__ {int QuadPart; } ;
struct TYPE_15__ {int QuadPart; } ;
struct TYPE_19__ {int NumberOfProcessors; TYPE_3__ IdleTime; TYPE_2__ KernelTime; TYPE_1__ UserTime; } ;
typedef TYPE_5__ SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION ;
typedef TYPE_5__ SYSTEM_BASIC_INFORMATION ;
typedef TYPE_7__ FILETIME ;


 int FUNC_0 () ;
 TYPE_5__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_5__*) ;
 int FUNC_3 (int ,TYPE_5__*,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_7__*,int,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (TYPE_7__*,TYPE_7__*,TYPE_7__*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{

    FILETIME VAR_2, VAR_3, VAR_4;
    int VAR_5;
    ULARGE_INTEGER VAR_6, VAR_7, VAR_8;
    SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION *VAR_9;
    SYSTEM_BASIC_INFORMATION VAR_10;
    ULONG VAR_11;
    ULARGE_INTEGER VAR_12, VAR_13, VAR_14;

    if (!&FUNC_6)
    {
        FUNC_8("GetSystemTimes not available\n");
        return;
    }

    FUNC_5( FUNC_6(((void*)0), ((void*)0), ((void*)0)), "GetSystemTimes failed unexpectedly\n" );

    VAR_12.QuadPart = 0;
    VAR_13.QuadPart = 0;
    VAR_14.QuadPart = 0;
    FUNC_4( &VAR_2, 0x11, sizeof(VAR_2) );
    FUNC_4( &VAR_3, 0x11, sizeof(VAR_3) );
    FUNC_4( &VAR_4, 0x11, sizeof(VAR_4) );
    FUNC_5( FUNC_6(&VAR_2, &VAR_3 , &VAR_4),
        "GetSystemTimes failed unexpectedly\n" );

    VAR_6 = VAR_2.dwLowDateTime;
    VAR_6 = VAR_2.dwHighDateTime;
    VAR_7 = VAR_3.dwLowDateTime;
    VAR_7 = VAR_3.dwHighDateTime;
    VAR_8 = VAR_4.dwLowDateTime;
    VAR_8 = VAR_4.dwHighDateTime;

    FUNC_5( !FUNC_3(VAR_0, &VAR_10, sizeof(VAR_10), &VAR_11),
                                  "NtQuerySystemInformation failed\n" );
    FUNC_5( sizeof(VAR_10) == VAR_11, "Inconsistent length %d\n", VAR_11 );


    FUNC_7( "Number of Processors : %d\n", VAR_10.NumberOfProcessors );
    FUNC_5( VAR_10.NumberOfProcessors > 0, "Expected more than 0 processors, got %d\n",
        VAR_10.NumberOfProcessors );

    VAR_9 = FUNC_1( FUNC_0(), 0,
                      sizeof(SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION) * VAR_10.NumberOfProcessors);

    FUNC_5( !FUNC_3( VAR_1, VAR_9,
                                   sizeof(SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION) * VAR_10.NumberOfProcessors,
                                   &VAR_11),
                                   "NtQuerySystemInformation failed\n" );

    for (VAR_5 = 0; VAR_5 < VAR_10.NumberOfProcessors; VAR_5++)
    {
        VAR_12.QuadPart += VAR_9[VAR_5].UserTime.QuadPart;
        VAR_13.QuadPart += VAR_9[VAR_5].KernelTime.QuadPart;
        VAR_14.QuadPart += VAR_9[VAR_5].IdleTime.QuadPart;
    }

    FUNC_5( VAR_14.QuadPart - VAR_6 < 10000000, "test idletime failed\n" );
    FUNC_5( VAR_13.QuadPart - VAR_7 < 10000000, "test kerneltime failed\n" );
    FUNC_5( VAR_12.QuadPart - VAR_8 < 10000000, "test usertime failed\n" );

    FUNC_2(FUNC_0(), 0, VAR_9);
}
