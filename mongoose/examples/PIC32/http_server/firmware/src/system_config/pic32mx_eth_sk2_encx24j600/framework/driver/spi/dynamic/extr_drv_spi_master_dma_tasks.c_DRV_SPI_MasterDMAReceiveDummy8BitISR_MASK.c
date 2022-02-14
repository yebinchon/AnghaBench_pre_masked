
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct DRV_SPI_DRIVER_OBJECT {int rxInterruptSource; int rxDmaChannelHandle; int spiId; TYPE_1__* currentJob; } ;
struct TYPE_2__ {scalar_t__ dummyLeftToRx; int rxDMAProgressStage; } ;
typedef scalar_t__ SYS_DMA_TRANSFER_EVENT ;
typedef int SYS_DMA_CHANNEL_HANDLE ;
typedef TYPE_1__ DRV_SPI_JOB_OBJECT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,int,int *,scalar_t__,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int * VAR_6 ;

void FUNC_4(SYS_DMA_TRANSFER_EVENT VAR_7, SYS_DMA_CHANNEL_HANDLE VAR_8, uintptr_t VAR_9)
{
    if (VAR_7 != VAR_5)
    {

        return;
    }
    struct DRV_SPI_DRIVER_OBJECT * VAR_10 = (struct DRV_SPI_DRIVER_OBJECT *)VAR_9;
    DRV_SPI_JOB_OBJECT * VAR_11 = VAR_10->currentJob;
    if (VAR_11->dummyLeftToRx != 0)
    {
            uint8_t * VAR_12 = VAR_6;
            uint32_t VAR_13 = FUNC_0(FUNC_0(FUNC_0(VAR_4, VAR_11->dummyLeftToRx), VAR_3), VAR_1);
            void * VAR_14 = FUNC_1(VAR_10->spiId);
            FUNC_2(VAR_10->rxDmaChannelHandle, VAR_14, 1, VAR_12, VAR_13, 1);
            VAR_11->rxDMAProgressStage = VAR_2;
            VAR_11->dummyLeftToRx -= VAR_13;
    }
    else
    {

        VAR_11->rxDMAProgressStage = VAR_0;
        FUNC_3(VAR_10->rxInterruptSource);
    }
}
