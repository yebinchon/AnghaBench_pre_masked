
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_10__ {int Size; scalar_t__ Tag; int Data; } ;
struct TYPE_9__ {scalar_t__ MaximumSize; TYPE_2__ Blocks; } ;
typedef TYPE_1__* PVOID ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_2__* PHEAP_BLOCK ;
typedef TYPE_1__* PHEAP ;
typedef scalar_t__ PFN_COUNT ;
typedef int HEAP_BLOCK ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_4 (TYPE_2__*) ;
 scalar_t__* FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,TYPE_1__*,...) ;

VOID
FUNC_8(
    PVOID VAR_5)
{
    PHEAP VAR_6 = VAR_5;
    PHEAP_BLOCK VAR_7;
    PUCHAR VAR_8, VAR_9;
    PFN_COUNT VAR_10, VAR_11 = 0;

    FUNC_7("HeapRelease(%p)\n", VAR_5);


    for (VAR_7 = &VAR_6->Blocks;
         VAR_7->Size != 0;
         VAR_7 = VAR_7 + 1 + VAR_7->Size)
    {

        if (VAR_7->Tag != 0)
        {






            continue;
        }


        VAR_8 = FUNC_1(VAR_7->Data, VAR_2);


        while (VAR_7->Tag == 0) VAR_7 = VAR_7 + VAR_7->Size + 1;


        if (VAR_7->Size == 0)
        {

            VAR_9 = FUNC_1(VAR_7->Data, VAR_2);
        }
        else
        {

            VAR_9 = FUNC_0(VAR_7->Data, VAR_2);
        }


        if (VAR_9 > VAR_8)
        {

            VAR_10 = (PFN_COUNT)((VAR_9 - VAR_8) / VAR_1);
            VAR_11 += VAR_10;


            FUNC_3(VAR_3,
                                     (ULONG_PTR)VAR_8 / VAR_1,
                                     VAR_10,
                                     VAR_0);
        }


        if (VAR_7->Size == 0) break;
    }

    FUNC_7("HeapRelease() done, freed %lu of %lu pages\n", VAR_11, VAR_6->MaximumSize / VAR_1);
}
