
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ PageAllocated; } ;
typedef int PVOID ;
typedef TYPE_1__* PPAGE_LOOKUP_TABLE_ITEM ;
typedef size_t PFN_NUMBER ;


 scalar_t__ VAR_0 ;

PFN_NUMBER FUNC_0(PVOID VAR_1, PFN_NUMBER VAR_2)
{
    PPAGE_LOOKUP_TABLE_ITEM VAR_3 = (PPAGE_LOOKUP_TABLE_ITEM)VAR_1;
    PFN_NUMBER VAR_4;
    PFN_NUMBER VAR_5;

    VAR_5 = 0;
    for (VAR_4=0; VAR_4<VAR_2; VAR_4++)
    {
        if (VAR_3[VAR_4].PageAllocated == VAR_0)
        {
            VAR_5++;
        }
    }

    return VAR_5;
}
