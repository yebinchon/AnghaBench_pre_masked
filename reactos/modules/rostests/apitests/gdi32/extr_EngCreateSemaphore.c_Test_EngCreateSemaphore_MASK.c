
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int LockCount; int RecursionCount; int OwningThread; int LockSemaphore; int SpinCount; TYPE_1__* DebugInfo; } ;
struct TYPE_3__ {int Type; int CreatorBackTraceIndex; int EntryCount; int ContentionCount; } ;
typedef TYPE_2__* PRTL_CRITICAL_SECTION ;
typedef int * HSEMAPHORE ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,...) ;

void FUNC_3()
{
    HSEMAPHORE VAR_0;
    PRTL_CRITICAL_SECTION VAR_1;

    VAR_0 = FUNC_0();
    FUNC_2(VAR_0 != ((void*)0), "EngCreateSemaphore failed\n");
    if (!VAR_0) return;
    VAR_1 = (PRTL_CRITICAL_SECTION)VAR_0;

    FUNC_2(VAR_1->LockCount == -1, "lpcrit->LockCount=%ld\n", VAR_1->LockCount);
    FUNC_2(VAR_1->RecursionCount == 0, "lpcrit->RecursionCount=%ld\n", VAR_1->RecursionCount);
    FUNC_2(VAR_1->OwningThread == 0, "lpcrit->OwningThread=%p\n", VAR_1->OwningThread);
    FUNC_2(VAR_1->LockSemaphore == 0, "lpcrit->LockSemaphore=%p\n", VAR_1->LockSemaphore);
    FUNC_2(VAR_1->SpinCount == 0, "lpcrit->SpinCount=%ld\n", VAR_1->SpinCount);

    FUNC_2(VAR_1->DebugInfo != ((void*)0), "no DebugInfo\n");
    if (VAR_1->DebugInfo)
    {
        FUNC_2(VAR_1->DebugInfo->Type == 0, "DebugInfo->Type=%d\n", VAR_1->DebugInfo->Type);
        FUNC_2(VAR_1->DebugInfo->CreatorBackTraceIndex == 0, "DebugInfo->CreatorBackTraceIndex=%d\n", VAR_1->DebugInfo->CreatorBackTraceIndex);
        FUNC_2(VAR_1->DebugInfo->EntryCount == 0, "DebugInfo->EntryCount=%ld\n", VAR_1->DebugInfo->EntryCount);
        FUNC_2(VAR_1->DebugInfo->ContentionCount == 0, "DebugInfo->ContentionCount=%ld\n", VAR_1->DebugInfo->ContentionCount);
    }

    FUNC_1(VAR_0);
}
