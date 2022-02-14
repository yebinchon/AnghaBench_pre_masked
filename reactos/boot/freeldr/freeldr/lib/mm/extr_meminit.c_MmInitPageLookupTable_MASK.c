
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_4__ {int BasePage; int PageCount; int MemoryType; } ;
typedef scalar_t__ PVOID ;
typedef int PFN_NUMBER ;
typedef int PAGE_LOOKUP_TABLE_ITEM ;
typedef TYPE_1__ FREELDR_MEMORY_DESCRIPTOR ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,int,int,int ) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (char*,...) ;

VOID FUNC_6(PVOID VAR_4, PFN_NUMBER VAR_5)
{
    const FREELDR_MEMORY_DESCRIPTOR* VAR_6 = ((void*)0);
    PFN_NUMBER VAR_7;
    PFN_NUMBER VAR_8;

    FUNC_5("MmInitPageLookupTable()\n");




    FUNC_3(VAR_4, VAR_3, VAR_5, VAR_0);


    while ((VAR_6 = FUNC_0(VAR_6)) != ((void*)0))
    {


        if (VAR_6->BasePage + VAR_6->PageCount <= VAR_5)
        {
            FUNC_5("Marking pages 0x%lx-0x%lx as type %s\n",
                  VAR_6->BasePage,
                  VAR_6->BasePage + VAR_6->PageCount,
                  FUNC_2(VAR_6->MemoryType));
            FUNC_3(VAR_4,
                                     VAR_6->BasePage,
                                     VAR_6->PageCount,
                                     VAR_6->MemoryType);
        }
        else
            FUNC_5("Ignoring pages 0x%lx-0x%lx (%s)\n",
                  VAR_6->BasePage,
                  VAR_6->BasePage + VAR_6->PageCount,
                  FUNC_2(VAR_6->MemoryType));
    }


    VAR_7 = FUNC_1(VAR_4);
    VAR_8 = FUNC_1((PVOID)((ULONG_PTR)VAR_4 + FUNC_4(VAR_5 * sizeof(PAGE_LOOKUP_TABLE_ITEM), VAR_2))) - VAR_7;
    FUNC_5("Marking the page lookup table pages as reserved StartPage: 0x%x PageCount: 0x%x\n", VAR_7, VAR_8);
    FUNC_3(VAR_4, VAR_7, VAR_8, VAR_1);
}
