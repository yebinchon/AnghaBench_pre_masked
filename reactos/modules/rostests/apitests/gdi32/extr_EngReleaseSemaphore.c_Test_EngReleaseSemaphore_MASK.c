
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ LockCount; scalar_t__ RecursionCount; scalar_t__ OwningThread; scalar_t__ LockSemaphore; scalar_t__ SpinCount; TYPE_1__* DebugInfo; } ;
struct TYPE_3__ {scalar_t__ Type; scalar_t__ CreatorBackTraceIndex; scalar_t__ EntryCount; scalar_t__ ContentionCount; } ;
typedef TYPE_2__* PRTL_CRITICAL_SECTION ;
typedef int * HSEMAPHORE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,...) ;

void FUNC_5()
{
    HSEMAPHORE VAR_0;
    PRTL_CRITICAL_SECTION VAR_1;

    VAR_0 = FUNC_1();
    FUNC_4(VAR_0 != ((void*)0), "EngCreateSemaphore failed\n");
    if (!VAR_0) return;
    VAR_1 = (PRTL_CRITICAL_SECTION)VAR_0;

    FUNC_0(VAR_0);
    FUNC_3(VAR_0);

    FUNC_4(VAR_1->LockCount != 0, "lpcrit->LockCount=%ld\n", VAR_1->LockCount);
    FUNC_4(VAR_1->RecursionCount == 0, "lpcrit->RecursionCount=%ld\n", VAR_1->RecursionCount);
    FUNC_4(VAR_1->OwningThread == 0, "lpcrit->OwningThread=%p\n", VAR_1->OwningThread);
    FUNC_4(VAR_1->LockSemaphore == 0, "lpcrit->LockSemaphore=%p\n", VAR_1->LockSemaphore);
    FUNC_4(VAR_1->SpinCount == 0, "lpcrit->SpinCount=%ld\n", VAR_1->SpinCount);

    FUNC_4(VAR_1->DebugInfo != ((void*)0), "no DebugInfo\n");
    if (VAR_1->DebugInfo)
    {
        FUNC_4(VAR_1->DebugInfo->Type == 0, "DebugInfo->Type=%d\n", VAR_1->DebugInfo->Type);
        FUNC_4(VAR_1->DebugInfo->CreatorBackTraceIndex == 0, "DebugInfo->CreatorBackTraceIndex=%d\n", VAR_1->DebugInfo->CreatorBackTraceIndex);
        FUNC_4(VAR_1->DebugInfo->EntryCount == 0, "DebugInfo->EntryCount=%ld\n", VAR_1->DebugInfo->EntryCount);
        FUNC_4(VAR_1->DebugInfo->ContentionCount == 0, "DebugInfo->ContentionCount=%ld\n", VAR_1->DebugInfo->ContentionCount);
    }

    FUNC_2(VAR_0);
}
