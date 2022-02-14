
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef int TYPE_OF_MEMORY ;
struct TYPE_2__ {size_t PageAllocationLength; int PageAllocated; } ;
typedef int PVOID ;
typedef TYPE_1__* PPAGE_LOOKUP_TABLE_ITEM ;
typedef size_t PFN_NUMBER ;


 scalar_t__ VAR_0 ;

VOID FUNC_0(PVOID VAR_1, PFN_NUMBER VAR_2, PFN_NUMBER VAR_3, TYPE_OF_MEMORY VAR_4)
{
    PPAGE_LOOKUP_TABLE_ITEM VAR_5 = (PPAGE_LOOKUP_TABLE_ITEM)VAR_1;
    PFN_NUMBER VAR_6;

    VAR_2 -= VAR_0;
    for (VAR_6=VAR_2; VAR_6<(VAR_2+VAR_3); VAR_6++)
    {
        VAR_5[VAR_6].PageAllocated = VAR_4;
        VAR_5[VAR_6].PageAllocationLength = (VAR_6 == VAR_2) ? VAR_3 : 0;
    }
}
