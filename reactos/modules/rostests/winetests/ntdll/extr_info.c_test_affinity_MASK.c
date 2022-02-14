
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int thread_affinity ;
typedef int tbi ;
typedef int proc_affinity ;
typedef int pbi ;
struct TYPE_9__ {int AffinityMask; } ;
struct TYPE_8__ {int dwNumberOfProcessors; } ;
struct TYPE_7__ {int AffinityMask; } ;
typedef TYPE_1__ THREAD_BASIC_INFORMATION ;
typedef TYPE_2__ SYSTEM_INFO ;
typedef TYPE_3__ PROCESS_BASIC_INFORMATION ;
typedef scalar_t__ NTSTATUS ;
typedef int DWORD_PTR ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_6 (int ,int ,TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int*,int) ;
 scalar_t__ FUNC_8 (int ,int ,int*,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    NTSTATUS VAR_6;
    PROCESS_BASIC_INFORMATION VAR_7;
    DWORD_PTR VAR_8, VAR_9;
    THREAD_BASIC_INFORMATION VAR_10;
    SYSTEM_INFO VAR_11;

    FUNC_2(&VAR_11);
    VAR_6 = FUNC_5( FUNC_0(), VAR_1, &VAR_7, sizeof(VAR_7), ((void*)0) );
    FUNC_4( VAR_6 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_6);
    VAR_8 = VAR_7.AffinityMask;
    FUNC_4( VAR_8 == (1 << VAR_11.dwNumberOfProcessors) - 1, "Unexpected process affinity\n" );
    VAR_8 = 1 << VAR_11.dwNumberOfProcessors;
    VAR_6 = FUNC_7( FUNC_0(), VAR_0, &VAR_8, sizeof(VAR_8) );
    FUNC_4( VAR_6 == VAR_2,
        "Expected STATUS_INVALID_PARAMETER, got %08x\n", VAR_6);

    VAR_8 = 0;
    VAR_6 = FUNC_7( FUNC_0(), VAR_0, &VAR_8, sizeof(VAR_8) );
    FUNC_4( VAR_6 == VAR_2,
        "Expected STATUS_INVALID_PARAMETER, got %08x\n", VAR_6);

    VAR_6 = FUNC_6( FUNC_1(), VAR_5, &VAR_10, sizeof(VAR_10), ((void*)0) );
    FUNC_4( VAR_6 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_6);
    FUNC_4( VAR_10.AffinityMask == (1 << VAR_11.dwNumberOfProcessors) - 1, "Unexpected thread affinity\n" );
    VAR_9 = 1 << VAR_11.dwNumberOfProcessors;
    VAR_6 = FUNC_8( FUNC_1(), VAR_4, &VAR_9, sizeof(VAR_9) );
    FUNC_4( VAR_6 == VAR_2,
        "Expected STATUS_INVALID_PARAMETER, got %08x\n", VAR_6);
    VAR_9 = 0;
    VAR_6 = FUNC_8( FUNC_1(), VAR_4, &VAR_9, sizeof(VAR_9) );
    FUNC_4( VAR_6 == VAR_2,
        "Expected STATUS_INVALID_PARAMETER, got %08x\n", VAR_6);

    VAR_9 = 1;
    VAR_6 = FUNC_8( FUNC_1(), VAR_4, &VAR_9, sizeof(VAR_9) );
    FUNC_4( VAR_6 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_6);
    VAR_6 = FUNC_6( FUNC_1(), VAR_5, &VAR_10, sizeof(VAR_10), ((void*)0) );
    FUNC_4(VAR_6 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_6);
    FUNC_4( VAR_10.AffinityMask == 1, "Unexpected thread affinity\n" );


    VAR_9 = ~(DWORD_PTR)0;
    VAR_6 = FUNC_8( FUNC_1(), VAR_4, &VAR_9, sizeof(VAR_9) );
    FUNC_4( FUNC_3(VAR_6 == VAR_2) || VAR_6 == VAR_3,
        "Expected STATUS_SUCCESS, got %08x\n", VAR_6);

    if (VAR_11.dwNumberOfProcessors <= 1)
    {
        FUNC_9("only one processor, skipping affinity testing\n");
        return;
    }


    if (VAR_6 == VAR_3)
    {
        VAR_6 = FUNC_6( FUNC_1(), VAR_5, &VAR_10, sizeof(VAR_10), ((void*)0) );
        FUNC_4(VAR_6 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_6);
        FUNC_4( FUNC_3(VAR_10.AffinityMask == 1) || VAR_10.AffinityMask == (1 << VAR_11.dwNumberOfProcessors) - 1,
            "Unexpected thread affinity\n" );
    }
    else
        FUNC_9("Cannot test thread affinity mask for 'all processors' flag\n");

    VAR_8 = 2;
    VAR_6 = FUNC_7( FUNC_0(), VAR_0, &VAR_8, sizeof(VAR_8) );
    FUNC_4( VAR_6 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_6);
    VAR_6 = FUNC_5( FUNC_0(), VAR_1, &VAR_7, sizeof(VAR_7), ((void*)0) );
    FUNC_4( VAR_6 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_6);
    VAR_8 = VAR_7.AffinityMask;
    FUNC_4( VAR_8 == 2, "Unexpected process affinity\n" );

    VAR_6 = FUNC_6( FUNC_1(), VAR_5, &VAR_10, sizeof(VAR_10), ((void*)0) );
    FUNC_4( VAR_6 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_6);
    FUNC_4( VAR_10.AffinityMask == 2, "Unexpected thread affinity\n" );

    VAR_9 = 1;
    VAR_6 = FUNC_8( FUNC_1(), VAR_4, &VAR_9, sizeof(VAR_9) );
    FUNC_4( VAR_6 == VAR_2,
        "Expected STATUS_INVALID_PARAMETER, got %08x\n", VAR_6);

    VAR_8 = (1 << VAR_11.dwNumberOfProcessors) - 1;
    VAR_6 = FUNC_7( FUNC_0(), VAR_0, &VAR_8, sizeof(VAR_8) );
    FUNC_4( VAR_6 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_6);

    VAR_6 = FUNC_6( FUNC_1(), VAR_5, &VAR_10, sizeof(VAR_10), ((void*)0) );
    FUNC_4( VAR_6 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_6);
    FUNC_4( VAR_10.AffinityMask == (1 << VAR_11.dwNumberOfProcessors) - 1,
        "Unexpected thread affinity\n" );
}
