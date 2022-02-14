
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int USHORT ;
typedef int TYPE_OF_MEMORY ;
struct TYPE_9__ {int Size; int PreviousSize; char Tag; TYPE_1__* Data; } ;
struct TYPE_8__ {int MaximumSize; int TerminatingBlock; TYPE_3__ Blocks; scalar_t__ LargestAllocation; scalar_t__ NumFrees; scalar_t__ NumAllocs; scalar_t__ MaxAllocBytes; scalar_t__ CurrentAllocBytes; } ;
struct TYPE_7__ {int Flink; int Blink; } ;
typedef int SIZE_T ;
typedef TYPE_2__* PVOID ;
typedef TYPE_3__* PHEAP_BLOCK ;
typedef TYPE_2__* PHEAP ;
typedef int HEAP_BLOCK ;
typedef int HEAP ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int ,int) ;

PVOID
FUNC_5(
    SIZE_T VAR_2,
    TYPE_OF_MEMORY VAR_3)
{
    PHEAP VAR_4;
    PHEAP_BLOCK VAR_5;
    SIZE_T VAR_6;
    USHORT VAR_7;
    FUNC_3("HeapCreate(MemoryType=%ld)\n", VAR_3);


    VAR_2 = FUNC_0(VAR_2, VAR_1);
    VAR_4 = FUNC_2(VAR_2, VAR_3);
    if (!VAR_4)
    {
        FUNC_1("HEAP: Failed to allocate heap of size 0x%lx, Type\n",
            VAR_2, VAR_3);
        return ((void*)0);
    }


    VAR_4->MaximumSize = VAR_2;
    VAR_4->CurrentAllocBytes = 0;
    VAR_4->MaxAllocBytes = 0;
    VAR_4->NumAllocs = 0;
    VAR_4->NumFrees = 0;
    VAR_4->LargestAllocation = 0;


    VAR_6 = (VAR_2 - sizeof(HEAP)) / sizeof(HEAP_BLOCK);
    FUNC_3("Remaining = %ld\n", VAR_6);


    VAR_6 -= 2;

    VAR_5 = &VAR_4->Blocks;
    VAR_7 = 0;


    while (VAR_6 > 1)
    {

        VAR_5->Size = (USHORT)FUNC_4(VAR_0, VAR_6 - 1);
        VAR_5->PreviousSize = VAR_7;
        VAR_5->Tag = 0;
        VAR_5->Data[0].Flink = (VAR_5 - &VAR_4->Blocks) + VAR_5->Size + 1;
        VAR_5->Data[0].Blink = (VAR_5 - &VAR_4->Blocks) - 1 - VAR_7;


        VAR_6 -= (VAR_5->Size + 1);


        VAR_7 = VAR_5->Size;
        VAR_5 = VAR_5 + VAR_5->Size + 1;

        FUNC_3("Remaining = %ld\n", VAR_6);
    }


    VAR_4->TerminatingBlock = VAR_5 - &VAR_4->Blocks;
    VAR_5->Size = 0;
    VAR_5->PreviousSize = VAR_7;
    VAR_5->Tag = 'dnE#';
    VAR_5->Data[0].Flink = 0;
    VAR_5->Data[0].Blink = (VAR_5 - &VAR_4->Blocks) - 1 - VAR_7;
    VAR_4->Blocks.Data[0].Blink = VAR_4->TerminatingBlock;

    return VAR_4;
}
