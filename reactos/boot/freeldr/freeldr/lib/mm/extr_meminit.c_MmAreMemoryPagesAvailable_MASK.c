
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ PageAllocated; } ;
typedef int PVOID ;
typedef TYPE_1__* PPAGE_LOOKUP_TABLE_ITEM ;
typedef scalar_t__ PFN_NUMBER ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

BOOLEAN FUNC_1(PVOID VAR_4, PFN_NUMBER VAR_5, PVOID VAR_6, PFN_NUMBER VAR_7)
{
    PPAGE_LOOKUP_TABLE_ITEM VAR_8 = (PPAGE_LOOKUP_TABLE_ITEM)VAR_4;
    PFN_NUMBER VAR_9;
    PFN_NUMBER VAR_10;

    VAR_9 = FUNC_0(VAR_6);

    if (VAR_9 < VAR_2) return VAR_0;

    VAR_9 -= VAR_2;



    if ((VAR_9 + VAR_7) > VAR_5)
    {
        return VAR_0;
    }

    for (VAR_10 = VAR_9; VAR_10 < (VAR_9 + VAR_7); VAR_10++)
    {


        if (VAR_8[VAR_10].PageAllocated != VAR_1)
        {
            return VAR_0;
        }
    }

    return VAR_3;
}
