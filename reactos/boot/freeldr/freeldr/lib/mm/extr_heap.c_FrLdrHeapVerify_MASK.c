
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {int Size; scalar_t__ Tag; } ;
struct TYPE_8__ {TYPE_2__ Blocks; } ;
typedef TYPE_1__* PVOID ;
typedef TYPE_2__* PHEAP_BLOCK ;
typedef TYPE_1__* PHEAP ;
typedef int HEAP_BLOCK ;


 int FUNC_0 (int) ;
 scalar_t__* FUNC_1 (TYPE_2__*) ;
 scalar_t__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int* FUNC_3 (TYPE_2__*) ;

VOID
FUNC_4(
    PVOID VAR_1)
{
    PHEAP VAR_2 = VAR_1;
    PHEAP_BLOCK VAR_3;


    for (VAR_3 = &VAR_2->Blocks;
         VAR_3->Size != 0;
         VAR_3 = VAR_3 + 1 + VAR_3->Size)
    {

        if (VAR_3->Tag != 0)
        {

            FUNC_0(*FUNC_3(VAR_3) <= VAR_3->Size * sizeof(HEAP_BLOCK));
            FUNC_0(*FUNC_2(VAR_3) == VAR_0);
            FUNC_0(*FUNC_1(VAR_3) == VAR_0);
            continue;
        }
    }
}
