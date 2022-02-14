
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct DRV_SPI_DRIVER_OBJECT {TYPE_1__* currentJob; } ;
struct TYPE_2__ {int txDMAProgressStage; } ;
typedef int SYS_DMA_TRANSFER_EVENT ;
typedef int SYS_DMA_CHANNEL_HANDLE ;
typedef TYPE_1__ DRV_SPI_JOB_OBJECT ;




 int FUNC_0 (int ,int ,uintptr_t) ;
 int FUNC_1 (int ,int ,uintptr_t) ;

void FUNC_2(SYS_DMA_TRANSFER_EVENT VAR_0, SYS_DMA_CHANNEL_HANDLE VAR_1, uintptr_t VAR_2)
{
    struct DRV_SPI_DRIVER_OBJECT * VAR_3 = (struct DRV_SPI_DRIVER_OBJECT * )VAR_2;
    register DRV_SPI_JOB_OBJECT * VAR_4 = VAR_3->currentJob;

    switch(VAR_4->txDMAProgressStage)
    {
        case 129:
            FUNC_0(VAR_0, VAR_1, VAR_2);
            break;
        case 128:
            FUNC_1(VAR_0, VAR_1, VAR_2);
            break;
        default:
            break;
    }
}
