
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ numReserved; int maxElements; int fptrIntChange; TYPE_2__* pQueueManager; struct TYPE_8__* pNext; } ;
struct TYPE_7__ {scalar_t__ numReserveElements; scalar_t__ numFreeElements; scalar_t__ numQueues; scalar_t__ numQueuesHW; int reserveElementsLW; int numQueueCreateOps; int * pFreeQueueTail; TYPE_3__* pFreeQueueHead; } ;
struct TYPE_6__ {scalar_t__ reserveElements; int maxElements; int fptrIntChange; } ;
typedef TYPE_1__ DRV_SPI_SYS_QUEUE_SETUP ;
typedef int DRV_SPI_SYS_QUEUE_RESULT ;
typedef TYPE_2__ DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA ;
typedef TYPE_3__ DRV_SPI_SYS_QUEUE_QUEUE_DATA ;
typedef scalar_t__ DRV_SPI_SYS_QUEUE_MANAGER_HANDLE ;
typedef scalar_t__ DRV_SPI_SYS_QUEUE_HANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;

DRV_SPI_SYS_QUEUE_RESULT FUNC_1(DRV_SPI_SYS_QUEUE_MANAGER_HANDLE VAR_5, DRV_SPI_SYS_QUEUE_SETUP * VAR_6, DRV_SPI_SYS_QUEUE_HANDLE * VAR_7)
{
    if ((VAR_5 <= 0) && (VAR_5 >= VAR_1))
    {
        return VAR_0;
    }
    DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA * VAR_8 = (DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA *)VAR_5;
    if (VAR_6 == ((void*)0))
    {
        return VAR_0;
    }
    if (VAR_8->pFreeQueueHead == ((void*)0))
    {
        return VAR_3;
    }

    if ((VAR_8->numReserveElements + VAR_6->reserveElements) > VAR_8->numFreeElements)
    {
        return VAR_2;
    }

    DRV_SPI_SYS_QUEUE_QUEUE_DATA * VAR_9 = VAR_8->pFreeQueueHead;
    VAR_8->pFreeQueueHead = VAR_9->pNext;
    if (VAR_8->pFreeQueueHead == ((void*)0))
    {
        VAR_8->pFreeQueueTail = ((void*)0);
    }
    FUNC_0(VAR_9, 0, sizeof(DRV_SPI_SYS_QUEUE_QUEUE_DATA));
    VAR_9->pQueueManager = VAR_8;

    VAR_9->fptrIntChange = VAR_6->fptrIntChange;
    VAR_9->numReserved = VAR_6->reserveElements;
    VAR_9->maxElements = VAR_6->maxElements;

    VAR_8->numReserveElements += VAR_6->reserveElements;
   *VAR_7 = (DRV_SPI_SYS_QUEUE_HANDLE)VAR_9;
   return VAR_4;
}
