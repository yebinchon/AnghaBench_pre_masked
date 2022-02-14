
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pNext; scalar_t__ numReserved; TYPE_1__* pQueueManager; } ;
struct TYPE_3__ {scalar_t__ numReserveElements; int reserveElementsLW; int numQueues; int numQueueDestroyOps; TYPE_2__* pFreeQueueHead; TYPE_2__* pFreeQueueTail; } ;
typedef int DRV_SPI_SYS_QUEUE_RESULT ;
typedef TYPE_1__ DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA ;
typedef TYPE_2__ DRV_SPI_SYS_QUEUE_QUEUE_DATA ;
typedef scalar_t__ DRV_SPI_SYS_QUEUE_HANDLE ;


 int FUNC_0 (scalar_t__,void**) ;
 int FUNC_1 (scalar_t__,void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

DRV_SPI_SYS_QUEUE_RESULT FUNC_2(DRV_SPI_SYS_QUEUE_HANDLE VAR_3)
{
    if ((VAR_3 <= 0) && (VAR_3 >= VAR_1))
    {
        return VAR_0;
    }

    DRV_SPI_SYS_QUEUE_QUEUE_DATA * VAR_4 = (DRV_SPI_SYS_QUEUE_QUEUE_DATA *)VAR_3;
    DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA * VAR_5 = VAR_4->pQueueManager;

    if (VAR_4->pNext != ((void*)0))
    {
        return VAR_0;
    }


    void * VAR_6 = ((void*)0);
    FUNC_0(VAR_3, &VAR_6);
    while (VAR_6 != ((void*)0))
    {
        FUNC_1(VAR_3, VAR_6);
        FUNC_0(VAR_3, &VAR_6);
    }

    VAR_5->numReserveElements -= VAR_4->numReserved;
    if (VAR_5->pFreeQueueTail == ((void*)0))
    {
        VAR_5->pFreeQueueTail = VAR_4;
        VAR_5->pFreeQueueHead = VAR_4;
    }
    else
    {
        VAR_4->pNext = VAR_5->pFreeQueueHead;
        VAR_5->pFreeQueueHead = VAR_4;
    }







    return VAR_2;
}
