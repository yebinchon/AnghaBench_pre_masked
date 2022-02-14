
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct DRV_SPI_DRIVER_OBJECT {size_t symbolsInProgress; TYPE_1__* currentJob; int spiId; } ;
typedef int int32_t ;
struct TYPE_2__ {size_t dataLeftToRx; size_t* rxBuffer; size_t dataRxed; size_t dummyLeftToRx; } ;
typedef int SPI_MODULE_ID ;
typedef TYPE_1__ DRV_SPI_JOB_OBJECT ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 size_t FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_5( struct DRV_SPI_DRIVER_OBJECT * VAR_2 )
{
    register SPI_MODULE_ID VAR_3 = VAR_2->spiId;
    register DRV_SPI_JOB_OBJECT * VAR_4 = VAR_2->currentJob;


    uint8_t VAR_5 = FUNC_2(VAR_3, VAR_1);

    size_t VAR_6 = FUNC_0(VAR_4->dataLeftToRx, VAR_5);
    size_t VAR_7;

    if (VAR_6 != 0)
    {
        VAR_5 -= VAR_6;
        VAR_4->dataLeftToRx -= VAR_6;

        uint8_t *VAR_8 = &(VAR_4->rxBuffer[VAR_4->dataRxed]);
        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
        {

            VAR_8[VAR_7] = FUNC_1(VAR_3);
        }

        VAR_4->dataRxed += VAR_6;

        VAR_2->symbolsInProgress -= VAR_6;
    }


    size_t VAR_9 = FUNC_0(VAR_4->dummyLeftToRx, VAR_5);
    if (VAR_9 != 0)
    {

        VAR_4->dummyLeftToRx -= VAR_9;
        VAR_2->symbolsInProgress -= VAR_9;
        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
        {




            FUNC_1(VAR_3);
        }
    }


    size_t VAR_10 = VAR_4->dataLeftToRx + VAR_4->dummyLeftToRx;


    if (VAR_10 < FUNC_4(VAR_3))
    {
        FUNC_3(VAR_3, VAR_0);
    }
    return 0;
}
