
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {scalar_t__ Tag; TYPE_1__* Data; } ;
struct TYPE_8__ {int TerminatingBlock; TYPE_2__ Blocks; } ;
struct TYPE_6__ {int Flink; int Blink; } ;
typedef TYPE_2__* PHEAP_BLOCK ;
typedef TYPE_3__* PHEAP ;


 int FUNC_0 (int) ;

__attribute__((used)) static VOID
FUNC_1(
    PHEAP VAR_0,
    PHEAP_BLOCK VAR_1)
{
    PHEAP_BLOCK VAR_2, VAR_3;
    FUNC_0(VAR_1->Tag == 0);


    VAR_2 = &VAR_0->Blocks + VAR_0->TerminatingBlock;

    for (VAR_3 = &VAR_0->Blocks + VAR_2->Data[0].Flink;
         VAR_3 < VAR_1;
         VAR_3 = &VAR_0->Blocks + VAR_3->Data[0].Flink);

    VAR_1->Data[0].Flink = VAR_3 - &VAR_0->Blocks;
    VAR_1->Data[0].Blink = VAR_3->Data[0].Blink;
    VAR_3->Data[0].Blink = VAR_1 - &VAR_0->Blocks;
    VAR_3 = &VAR_0->Blocks + VAR_1->Data[0].Blink;
    VAR_3->Data[0].Flink = VAR_1 - &VAR_0->Blocks;
}
