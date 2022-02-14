
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_11__ {struct TYPE_11__* Flink; } ;
struct TYPE_10__ {TYPE_4__ MemoryDescriptorListHead; } ;
struct TYPE_8__ {TYPE_4__* Flink; } ;
struct TYPE_9__ {TYPE_1__ ListEntry; int MemoryType; int PageCount; int BasePage; } ;
typedef TYPE_2__* PMEMORY_ALLOCATION_DESCRIPTOR ;
typedef TYPE_3__* PLOADER_PARAMETER_BLOCK ;
typedef TYPE_4__* PLIST_ENTRY ;


 TYPE_2__* FUNC_0 (TYPE_4__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,int ) ;

VOID
FUNC_2(PLOADER_PARAMETER_BLOCK VAR_2)
{
    PLIST_ENTRY VAR_3;
    PMEMORY_ALLOCATION_DESCRIPTOR VAR_4;

    VAR_3 = VAR_2->MemoryDescriptorListHead.Flink;

    while (VAR_3 != &VAR_2->MemoryDescriptorListHead)
    {
        VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_0);

        FUNC_1("BP %08X PC %04X MT %d\n", VAR_4->BasePage,
            VAR_4->PageCount, VAR_4->MemoryType);

        VAR_3 = VAR_4->ListEntry.Flink;
    }
}
