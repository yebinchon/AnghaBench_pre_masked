
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ MemoryType; int PageCount; int BasePage; } ;
typedef int SIZE_T ;
typedef int * PVOID ;
typedef int PFN_NUMBER ;
typedef int PAGE_LOOKUP_TABLE_ITEM ;
typedef TYPE_1__ FREELDR_MEMORY_DESCRIPTOR ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int,scalar_t__) ;

PVOID FUNC_3(PFN_NUMBER VAR_4)
{
    const FREELDR_MEMORY_DESCRIPTOR* VAR_5 = ((void*)0);
    SIZE_T VAR_6;
    PFN_NUMBER VAR_7;
    PFN_NUMBER VAR_8 = 0;
    PFN_NUMBER VAR_9;
    PFN_NUMBER VAR_10;
    PVOID VAR_11 = ((void*)0);


    VAR_6 = VAR_4 * sizeof(PAGE_LOOKUP_TABLE_ITEM);
    VAR_7 = VAR_6 / VAR_2;


    while ((VAR_5 = FUNC_0(VAR_5)) != ((void*)0))
    {

        if (VAR_5->MemoryType != VAR_0) continue;


        if (VAR_5->PageCount < VAR_7) continue;


        if (VAR_5->BasePage < VAR_8) continue;


        if (VAR_5->BasePage + VAR_7 >= VAR_1) continue;


        VAR_8 = VAR_5->BasePage;
        VAR_9 = VAR_5->PageCount;
    }


    VAR_10 = FUNC_2(VAR_8 + VAR_9,
                                 VAR_1);


    VAR_11 = (PVOID)((VAR_10 * VAR_3)
                                        - VAR_6);

    FUNC_1("MmFindLocationForPageLookupTable() returning 0x%x\n", VAR_11);

    return VAR_11;
}
