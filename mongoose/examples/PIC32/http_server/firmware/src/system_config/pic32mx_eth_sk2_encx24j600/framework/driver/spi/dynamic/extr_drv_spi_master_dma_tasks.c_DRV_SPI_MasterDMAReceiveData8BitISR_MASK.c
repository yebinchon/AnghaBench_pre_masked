
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct DRV_SPI_DRIVER_OBJECT {int rxInterruptSource; int rxDmaChannelHandle; int spiId; TYPE_1__* currentJob; } ;
struct TYPE_2__ {scalar_t__ dataLeftToRx; size_t dataRxed; int rxDMAProgressStage; int * rxBuffer; } ;
typedef scalar_t__ SYS_DMA_TRANSFER_EVENT ;
typedef int SYS_DMA_CHANNEL_HANDLE ;
typedef TYPE_1__ DRV_SPI_JOB_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,int,int *,scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;

void FUNC_4(SYS_DMA_TRANSFER_EVENT VAR_5, SYS_DMA_CHANNEL_HANDLE VAR_6, uintptr_t VAR_7)
{
    if (VAR_5 != VAR_4)
    {

        return;
    }
    struct DRV_SPI_DRIVER_OBJECT * VAR_8 = (struct DRV_SPI_DRIVER_OBJECT *)VAR_7;
    DRV_SPI_JOB_OBJECT * VAR_9 = VAR_8->currentJob;
    if (VAR_9->dataLeftToRx != 0)
    {
            uint8_t * VAR_10 = &(VAR_9->rxBuffer[VAR_9->dataRxed]);
            uint32_t VAR_11 = FUNC_0(FUNC_0(VAR_3, VAR_9->dataLeftToRx), VAR_2);
            void * VAR_12 = FUNC_1(VAR_8->spiId);
            FUNC_2(VAR_8->rxDmaChannelHandle, VAR_12, 1, VAR_10, VAR_11, 1);
            VAR_9->rxDMAProgressStage = VAR_1;
            VAR_9->dataLeftToRx -= VAR_11;
            VAR_9->dataRxed += VAR_11;
    }
    else
    {

        VAR_9->rxDMAProgressStage = VAR_0;
        FUNC_3(VAR_8->rxInterruptSource);
    }
}
