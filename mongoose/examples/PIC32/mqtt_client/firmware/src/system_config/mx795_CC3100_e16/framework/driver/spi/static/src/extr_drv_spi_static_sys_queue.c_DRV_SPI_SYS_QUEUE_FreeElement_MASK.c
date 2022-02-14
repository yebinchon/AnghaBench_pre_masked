
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {struct TYPE_6__* pNext; } ;
struct TYPE_5__ {scalar_t__ numAlloc; scalar_t__ numReserved; int numFreeOps; int * pNext; TYPE_1__* pQueueManager; } ;
struct TYPE_4__ {int numFreeOps; int numReserveElements; int numFreeElements; TYPE_3__* pFreeElementTail; TYPE_3__* pFreeElementHead; } ;
typedef int DRV_SPI_SYS_QUEUE_RESULT ;
typedef TYPE_1__ DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA ;
typedef TYPE_2__ DRV_SPI_SYS_QUEUE_QUEUE_DATA ;
typedef scalar_t__ DRV_SPI_SYS_QUEUE_HANDLE ;
typedef TYPE_3__ DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

DRV_SPI_SYS_QUEUE_RESULT FUNC_0(DRV_SPI_SYS_QUEUE_HANDLE VAR_3, void * VAR_4)
{
    if ((VAR_3 <= 0) && (VAR_3 >= VAR_1))
    {
        return VAR_0;
    }

    DRV_SPI_SYS_QUEUE_QUEUE_DATA * VAR_5 = (DRV_SPI_SYS_QUEUE_QUEUE_DATA *)VAR_3;
    DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA * VAR_6 = VAR_5->pQueueManager;

    if (VAR_5->pNext != ((void*)0))
    {
        return VAR_0;
    }

    DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA * VAR_7 = (DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA *)((uint32_t)VAR_4 - sizeof(DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA));

    if (VAR_6->pFreeElementHead == ((void*)0))
    {
        VAR_6->pFreeElementHead = VAR_7;
    }
    else
    {
        VAR_6->pFreeElementTail->pNext = VAR_7;
    }
    VAR_6->pFreeElementTail = VAR_7;

    VAR_6->numFreeElements++;
    VAR_5->numAlloc--;
    if (VAR_5->numAlloc < VAR_5->numReserved)
    {
        VAR_6->numReserveElements++;
    }





    return VAR_2;
}
