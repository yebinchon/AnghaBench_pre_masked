
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_2__ {scalar_t__ PageAllocated; } ;
typedef int PVOID ;
typedef TYPE_1__* PPAGE_LOOKUP_TABLE_ITEM ;
typedef size_t PFN_NUMBER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

VOID FUNC_0(PVOID VAR_3, PFN_NUMBER VAR_4)
{
    PPAGE_LOOKUP_TABLE_ITEM VAR_5 = (PPAGE_LOOKUP_TABLE_ITEM)VAR_3;
    PFN_NUMBER VAR_6;

    for (VAR_6=VAR_4-1; VAR_6>0; VAR_6--)
    {
        if (VAR_5[VAR_6].PageAllocated == VAR_1)
        {
            VAR_0 = VAR_6 + 1 + VAR_2;
            break;
        }
    }
}
