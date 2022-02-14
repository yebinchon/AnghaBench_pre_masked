
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct DRV_SPI_DRIVER_OBJECT {size_t symbolsInProgress; int txEnabled; int rxEnabled; TYPE_1__* currentJob; int spiId; } ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__ dataLeftToTx; size_t* txBuffer; size_t dataTxed; scalar_t__ dummyLeftToTx; } ;
typedef int SPI_MODULE_ID ;
typedef TYPE_1__ DRV_SPI_JOB_OBJECT ;


 size_t FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (scalar_t__,size_t) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 size_t FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_6( struct DRV_SPI_DRIVER_OBJECT * VAR_2 )
{
    register SPI_MODULE_ID VAR_3 = VAR_2->spiId;
    register DRV_SPI_JOB_OBJECT * VAR_4 = VAR_2->currentJob;


        uint8_t VAR_5 = FUNC_0(VAR_2->symbolsInProgress, FUNC_3(VAR_3, VAR_1));
        uint8_t VAR_6 = FUNC_5(VAR_3) - VAR_5;

    size_t VAR_7 = FUNC_1(VAR_4->dataLeftToTx, VAR_6);

    size_t VAR_8;

    if (VAR_7 != 0)
    {

        VAR_6 -= VAR_7;
        VAR_4->dataLeftToTx -= VAR_7;

        uint8_t *VAR_9 = &(VAR_4->txBuffer[VAR_4->dataTxed]);
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
        {

            FUNC_2(VAR_3, VAR_9[VAR_8]);
        }

        VAR_4->dataTxed += VAR_7;

        VAR_2->symbolsInProgress += VAR_7;
    }
    size_t VAR_10 = FUNC_1(VAR_4->dummyLeftToTx, VAR_6);
    if (VAR_10 != 0)
    {
        VAR_4->dummyLeftToTx -= VAR_10;

        VAR_2->symbolsInProgress += VAR_10;
        for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
        {
            FUNC_2(VAR_3, 0xff);
        }
    }
    if (VAR_4->dataLeftToTx + VAR_4->dummyLeftToTx == 0)
    {

        FUNC_4(VAR_3, VAR_0);
        VAR_2->txEnabled = 0;


        VAR_2->rxEnabled = 1;
    }
    return 0;
}
