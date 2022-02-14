
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {struct TYPE_6__* pNext; } ;
struct TYPE_5__ {scalar_t__ numAlloc; scalar_t__ maxElements; scalar_t__ numReserved; scalar_t__ numAllocHW; int numAllocOps; int outOfMemoryErrors; int * pNext; TYPE_1__* pQueueManager; } ;
struct TYPE_4__ {scalar_t__ numReserveElements; scalar_t__ numFreeElements; scalar_t__ freeElementsLW; scalar_t__ reserveElementsLW; int numAllocOps; int * pFreeElementTail; TYPE_3__* pFreeElementHead; int outOfMemoryErrors; } ;
typedef int DRV_SPI_SYS_QUEUE_RESULT ;
typedef TYPE_1__ DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA ;
typedef TYPE_2__ DRV_SPI_SYS_QUEUE_QUEUE_DATA ;
typedef scalar_t__ DRV_SPI_SYS_QUEUE_HANDLE ;
typedef TYPE_3__ DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

DRV_SPI_SYS_QUEUE_RESULT FUNC_0(DRV_SPI_SYS_QUEUE_HANDLE VAR_4, void ** VAR_5)
{
    if (VAR_5 == ((void*)0))
    {
        return VAR_0;
    }
    if ((VAR_4 <= 0) && (VAR_4 >= VAR_1))
    {
        return VAR_0;
    }

    DRV_SPI_SYS_QUEUE_QUEUE_DATA * VAR_6 = (DRV_SPI_SYS_QUEUE_QUEUE_DATA *)VAR_4;
    DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA * VAR_7 = VAR_6->pQueueManager;

    if (VAR_6->pNext != ((void*)0))
    {
        return VAR_0;
    }

    if (VAR_7->pFreeElementHead== ((void*)0))
    {




        return VAR_2;
    }

    if (VAR_6->numAlloc == VAR_6->maxElements)
    {




        return VAR_2;
    }

    if (VAR_6->numAlloc < VAR_6->numReserved)
    {
        VAR_7->numReserveElements--;
    }
    else if (VAR_7->numFreeElements == VAR_7->numReserveElements)
    {




        return VAR_2;
    }

    DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA * VAR_8 = VAR_7->pFreeElementHead;
    VAR_7->pFreeElementHead = VAR_8->pNext;
    if (VAR_7->pFreeElementHead == ((void*)0))
    {
        VAR_7->pFreeElementTail = ((void*)0);
    }
    VAR_8->pNext = ((void*)0);
    VAR_7->numFreeElements --;
    VAR_6->numAlloc++;
    *VAR_5 = (void *)((uint32_t)VAR_8 + sizeof(DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA));
    return VAR_3;
}
