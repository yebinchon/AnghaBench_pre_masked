
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ PageAllocated; } ;
typedef int PVOID ;
typedef TYPE_1__* PPAGE_LOOKUP_TABLE_ITEM ;
typedef scalar_t__ PFN_NUMBER ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

PFN_NUMBER FUNC_1(PVOID VAR_3, PFN_NUMBER VAR_4, PFN_NUMBER VAR_5, PFN_NUMBER VAR_6)
{
    PPAGE_LOOKUP_TABLE_ITEM VAR_7 = (PPAGE_LOOKUP_TABLE_ITEM)VAR_3;
    PFN_NUMBER VAR_8;
    PFN_NUMBER VAR_9;

    if (VAR_6 > VAR_4)
    {
        return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_2);
    }

    VAR_8 = 0;
    for (VAR_9=VAR_6-1; VAR_9>0; VAR_9--)
    {
        if (VAR_7[VAR_9].PageAllocated != VAR_0)
        {
            VAR_8 = 0;
            continue;
        }
        else
        {
            VAR_8++;
        }

        if (VAR_8 >= VAR_5)
        {
            return VAR_9 + VAR_1;
        }
    }

    return 0;
}
