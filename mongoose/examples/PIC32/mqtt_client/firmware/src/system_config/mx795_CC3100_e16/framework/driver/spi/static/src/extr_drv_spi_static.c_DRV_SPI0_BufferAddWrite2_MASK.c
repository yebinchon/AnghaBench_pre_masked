
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t dataLeftToTx; size_t dummyLeftToRx; int status; void* context; int completeCB; void* txBuffer; } ;
struct TYPE_5__ {int queue; } ;
typedef TYPE_1__ DRV_SPI_OBJ ;
typedef TYPE_2__ DRV_SPI_JOB_OBJECT ;
typedef scalar_t__ DRV_SPI_BUFFER_HANDLE ;
typedef int DRV_SPI_BUFFER_EVENT_HANDLER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void**) ;
 scalar_t__ FUNC_1 (int ,void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

DRV_SPI_BUFFER_HANDLE FUNC_4 ( void *VAR_3, size_t VAR_4, DRV_SPI_BUFFER_EVENT_HANDLER VAR_5, void * VAR_6, DRV_SPI_BUFFER_HANDLE * VAR_7 )
{
    DRV_SPI_OBJ *VAR_8 = (DRV_SPI_OBJ*)((void*)0);

    VAR_8 = &VAR_2;

    DRV_SPI_JOB_OBJECT * VAR_9 = ((void*)0);
    if (FUNC_0(VAR_8->queue, (void **)&VAR_9) != VAR_1)
    {
        FUNC_2(0, "\r\nSPI Driver: Error trying to get a free entry.");
        return (DRV_SPI_BUFFER_HANDLE)((void*)0);
    }

    FUNC_3(VAR_9, 0, sizeof(DRV_SPI_JOB_OBJECT));
    VAR_9->txBuffer = VAR_3;
    VAR_9->dataLeftToTx = VAR_4;
    VAR_9->dummyLeftToRx = VAR_4;
    VAR_9->completeCB = VAR_5;
    VAR_9->context = VAR_6;
    VAR_9->status = VAR_0;

    if (VAR_7 != ((void*)0) )
    {
        *VAR_7 = (DRV_SPI_BUFFER_HANDLE)VAR_9;
    }

    if (FUNC_1(VAR_8->queue, (void*)VAR_9) != VAR_1)
    {
        FUNC_2(0, "\r\nSPI Driver: Error enqueing new job.");
        return (DRV_SPI_BUFFER_HANDLE)((void*)0);
    }

    return (DRV_SPI_BUFFER_HANDLE)VAR_9;
}
