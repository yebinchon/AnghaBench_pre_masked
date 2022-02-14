
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {struct TYPE_4__* pNext; } ;
struct TYPE_3__ {scalar_t__ numEnqueued; scalar_t__ numEnqueuedHW; int numEnqueueOps; TYPE_2__* pTail; TYPE_2__* pHead; int * pNext; } ;
typedef int DRV_SPI_SYS_QUEUE_RESULT ;
typedef TYPE_1__ DRV_SPI_SYS_QUEUE_QUEUE_DATA ;
typedef scalar_t__ DRV_SPI_SYS_QUEUE_HANDLE ;
typedef TYPE_2__ DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA ;


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

    if (VAR_5->pNext != ((void*)0))
    {
        return VAR_0;
    }

    DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA * VAR_6 = (DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA *)((uint32_t)VAR_4 - sizeof(DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA));

    if (VAR_5->pHead == ((void*)0))
    {
        VAR_5->pHead = VAR_6;
        VAR_5->pTail = VAR_6;
    }
    else
    {
        VAR_5->pTail->pNext = VAR_6;
        VAR_5->pTail = VAR_6;
    }
    return VAR_2;
}
