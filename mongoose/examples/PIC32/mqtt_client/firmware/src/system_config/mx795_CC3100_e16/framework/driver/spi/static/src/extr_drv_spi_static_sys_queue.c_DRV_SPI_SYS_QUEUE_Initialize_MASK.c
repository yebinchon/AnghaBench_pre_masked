
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_9__ {struct TYPE_9__* pNext; } ;
struct TYPE_8__ {scalar_t__ type; int numQueues; int elementSize; size_t bufferLen; int * pBuffer; } ;
struct TYPE_7__ {TYPE_1__* pQueueManager; struct TYPE_7__* pNext; } ;
struct TYPE_6__ {size_t numFreeElements; size_t freeElementsLW; TYPE_4__* pFreeElementTail; TYPE_4__* pElementArea; TYPE_4__* pFreeElementHead; TYPE_2__* pFreeQueueTail; TYPE_2__* pFreeQueueHead; TYPE_2__* pQueueArea; } ;
typedef int DRV_SPI_SYS_QUEUE_RESULT ;
typedef TYPE_1__ DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA ;
typedef TYPE_2__ DRV_SPI_SYS_QUEUE_QUEUE_DATA ;
typedef TYPE_3__ DRV_SPI_SYS_QUEUE_MANAGER_SETUP ;
typedef scalar_t__ DRV_SPI_SYS_QUEUE_MANAGER_HANDLE ;
typedef TYPE_4__ DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,size_t) ;

DRV_SPI_SYS_QUEUE_RESULT FUNC_1(DRV_SPI_SYS_QUEUE_MANAGER_SETUP * VAR_4, DRV_SPI_SYS_QUEUE_MANAGER_HANDLE * VAR_5)
{
    if (VAR_4 == ((void*)0) || VAR_4->pBuffer == ((void*)0) || VAR_5 == ((void*)0))
    {
        return VAR_1;
    }

    if (VAR_4->type != VAR_0)
    {
        return VAR_1;
    }

    size_t VAR_6 = (sizeof(DRV_SPI_SYS_QUEUE_QUEUE_DATA) *
                        VAR_4->numQueues) +
                        sizeof(DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA) +
                        (sizeof(DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA) +
                        VAR_4->elementSize);

    if (VAR_4->bufferLen < VAR_6)
    {
        return VAR_2;
    }


    FUNC_0(VAR_4->pBuffer, 0, VAR_4->bufferLen);


    DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA * VAR_7 = (DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA *)VAR_4->pBuffer;
    VAR_7->pQueueArea = (DRV_SPI_SYS_QUEUE_QUEUE_DATA*)((uint32_t)VAR_7 + sizeof(DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA));
    VAR_7->pElementArea = (DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA*)((uint32_t)VAR_7->pQueueArea + (sizeof(DRV_SPI_SYS_QUEUE_QUEUE_DATA) * VAR_4->numQueues) );


    DRV_SPI_SYS_QUEUE_QUEUE_DATA * VAR_8 = VAR_7->pQueueArea;
    VAR_7->pFreeQueueHead = VAR_8;
    VAR_7->pFreeQueueTail = VAR_8;
    VAR_8->pQueueManager = VAR_7;
    uint8_t VAR_9;
    for (VAR_9 = 1; VAR_9 < VAR_4->numQueues; VAR_9++)
    {
        VAR_7->pFreeQueueTail->pNext = &(VAR_8[VAR_9]);
        VAR_7->pFreeQueueTail = &(VAR_8[VAR_9]);
        VAR_8[VAR_9].pQueueManager = VAR_7;
    }


    size_t VAR_10 = VAR_4->bufferLen -
            sizeof(DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA) -
            (sizeof(DRV_SPI_SYS_QUEUE_QUEUE_DATA) * VAR_4->numQueues);
    size_t VAR_11 = VAR_10 /
            (sizeof(DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA) + VAR_4->elementSize );

    DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA * VAR_12 = VAR_7->pElementArea;
    VAR_7->pFreeElementHead = VAR_12;
    VAR_7->pFreeElementTail = VAR_12;

    for (VAR_9 = 1; VAR_9 < VAR_11; VAR_9 ++)
    {
        VAR_12 = (DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA *)
              ((uint32_t)VAR_7->pElementArea +
               (sizeof(DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA) +
                VAR_4->elementSize) *
               VAR_9);
        VAR_7->pFreeElementTail->pNext = VAR_12;
        VAR_7->pFreeElementTail = VAR_12;
    }
    VAR_7->numFreeElements = VAR_11;



    *VAR_5 = (DRV_SPI_SYS_QUEUE_MANAGER_HANDLE)VAR_7;
    return VAR_3;
}
