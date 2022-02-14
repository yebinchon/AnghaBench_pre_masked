
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ PageAllocated; } ;
typedef int PVOID ;
typedef TYPE_1__* PPAGE_LOOKUP_TABLE_ITEM ;
typedef int PFN_NUMBER ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;

PFN_NUMBER FUNC_1(PVOID VAR_3, PFN_NUMBER VAR_4, PFN_NUMBER VAR_5, BOOLEAN VAR_6)
{
    PPAGE_LOOKUP_TABLE_ITEM VAR_7 = (PPAGE_LOOKUP_TABLE_ITEM)VAR_3;
    PFN_NUMBER VAR_8;
    PFN_NUMBER VAR_9;

    if (VAR_0 > VAR_4)
    {
        VAR_0 = VAR_4;
    }

    VAR_8 = 0;
    if (VAR_6)
    {

        for (VAR_9=VAR_0-1; VAR_9>0; VAR_9--)
        {
            if (VAR_7[VAR_9].PageAllocated != VAR_1)
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
                return VAR_9 + VAR_2;
            }
        }
    }
    else
    {
        FUNC_0("Alloc low memory, LastFreePageHint 0x%x, TPC 0x%x\n", VAR_0, VAR_4);

        for (VAR_9=1; VAR_9 < VAR_0; VAR_9++)
        {
            if (VAR_7[VAR_9].PageAllocated != VAR_1)
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
                return VAR_9 - VAR_8 + 1 + VAR_2;
            }
        }
    }

    return 0;
}
