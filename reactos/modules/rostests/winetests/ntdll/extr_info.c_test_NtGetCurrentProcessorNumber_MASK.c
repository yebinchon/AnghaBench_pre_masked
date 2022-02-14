
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tbi ;
typedef int pbi ;
typedef int old_thread_mask ;
typedef int old_process_mask ;
typedef int new_mask ;
typedef int ULONG ;
struct TYPE_9__ {int AffinityMask; } ;
struct TYPE_8__ {int dwNumberOfProcessors; } ;
struct TYPE_7__ {int AffinityMask; } ;
typedef TYPE_1__ THREAD_BASIC_INFORMATION ;
typedef TYPE_2__ SYSTEM_INFO ;
typedef TYPE_3__ PROCESS_BASIC_INFORMATION ;
typedef int NTSTATUS ;
typedef int DWORD_PTR ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,char*,int,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,TYPE_3__*,int,int *) ;
 int FUNC_6 (int ,int ,TYPE_1__*,int,int *) ;
 int FUNC_7 (int ,int ,int*,int) ;
 int FUNC_8 (int ,int ,int*,int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    NTSTATUS VAR_5;
    SYSTEM_INFO VAR_6;
    PROCESS_BASIC_INFORMATION VAR_7;
    THREAD_BASIC_INFORMATION VAR_8;
    DWORD_PTR VAR_9;
    DWORD_PTR VAR_10;
    DWORD_PTR VAR_11;
    ULONG VAR_12;
    ULONG VAR_13;

    if (!&FUNC_4) {
        FUNC_10("NtGetCurrentProcessorNumber not available\n");
        return;
    }

    FUNC_2(&VAR_6);
    VAR_12 = FUNC_4();
    FUNC_9("dwNumberOfProcessors: %d, current processor: %d\n", VAR_6.dwNumberOfProcessors, VAR_12);

    VAR_5 = FUNC_5(FUNC_0(), VAR_1, &VAR_7, sizeof(VAR_7), ((void*)0));
    VAR_9 = VAR_7.AffinityMask;
    FUNC_3(VAR_5 == VAR_2, "got 0x%x (expected STATUS_SUCCESS)\n", VAR_5);

    VAR_5 = FUNC_6(FUNC_1(), VAR_4, &VAR_8, sizeof(VAR_8), ((void*)0));
    VAR_10 = VAR_8.AffinityMask;
    FUNC_3(VAR_5 == VAR_2, "got 0x%x (expected STATUS_SUCCESS)\n", VAR_5);


    VAR_11 = (1 << VAR_6.dwNumberOfProcessors) - 1;
    VAR_5 = FUNC_7(FUNC_0(), VAR_0, &VAR_11, sizeof(VAR_11));
    FUNC_3(VAR_5 == VAR_2, "got 0x%x (expected STATUS_SUCCESS)\n", VAR_5);

    for (VAR_13 = 0; VAR_13 < VAR_6.dwNumberOfProcessors; VAR_13++)
    {
        VAR_11 = 1 << VAR_13;
        VAR_5 = FUNC_8(FUNC_1(), VAR_3, &VAR_11, sizeof(VAR_11));
        FUNC_3(VAR_5 == VAR_2, "%d: got 0x%x (expected STATUS_SUCCESS)\n", VAR_13, VAR_5);

        VAR_5 = FUNC_6(FUNC_1(), VAR_4, &VAR_8, sizeof(VAR_8), ((void*)0));
        FUNC_3(VAR_5 == VAR_2, "%d: got 0x%x (expected STATUS_SUCCESS)\n", VAR_13, VAR_5);

        VAR_12 = FUNC_4();
        FUNC_3((VAR_12 == VAR_13), "%d (new_mask 0x%lx): running on processor %d (AffinityMask: 0x%lx)\n",
                                VAR_13, VAR_11, VAR_12, VAR_8.AffinityMask);
    }


    VAR_5 = FUNC_7(FUNC_0(), VAR_0, &VAR_9, sizeof(VAR_9));
    FUNC_3(VAR_5 == VAR_2, "got 0x%x (expected STATUS_SUCCESS)\n", VAR_5);

    VAR_5 = FUNC_8(FUNC_1(), VAR_3, &VAR_10, sizeof(VAR_10));
    FUNC_3(VAR_5 == VAR_2, "got 0x%x (expected STATUS_SUCCESS)\n", VAR_5);
}
