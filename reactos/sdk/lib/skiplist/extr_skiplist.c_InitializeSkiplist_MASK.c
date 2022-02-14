
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Next; } ;
struct TYPE_5__ {TYPE_1__ Head; scalar_t__ NodeCount; scalar_t__ MaximumLevel; int FreeRoutine; int CompareRoutine; int AllocateRoutine; } ;
typedef int PSKIPLIST_FREE_ROUTINE ;
typedef int PSKIPLIST_COMPARE_ROUTINE ;
typedef int PSKIPLIST_ALLOCATE_ROUTINE ;
typedef TYPE_2__* PSKIPLIST ;


 int FUNC_0 (int ,int) ;

void
FUNC_1(PSKIPLIST VAR_0, PSKIPLIST_ALLOCATE_ROUTINE VAR_1, PSKIPLIST_COMPARE_ROUTINE VAR_2, PSKIPLIST_FREE_ROUTINE VAR_3)
{

    VAR_0->AllocateRoutine = VAR_1;
    VAR_0->CompareRoutine = VAR_2;
    VAR_0->FreeRoutine = VAR_3;



    VAR_0->MaximumLevel = 0;
    VAR_0->NodeCount = 0;
    FUNC_0(VAR_0->Head.Next, sizeof(VAR_0->Head.Next));
}
