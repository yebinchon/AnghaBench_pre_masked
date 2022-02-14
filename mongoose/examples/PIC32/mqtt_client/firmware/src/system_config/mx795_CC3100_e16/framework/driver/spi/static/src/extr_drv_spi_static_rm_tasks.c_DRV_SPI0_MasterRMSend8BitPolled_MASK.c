
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct DRV_SPI_OBJ {int symbolsInProgress; TYPE_1__* currentJob; } ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__ dataLeftToTx; scalar_t__ dummyLeftToTx; int* txBuffer; size_t dataTxed; } ;
typedef TYPE_1__ DRV_SPI_JOB_OBJECT ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

int32_t FUNC_2( struct DRV_SPI_OBJ * VAR_1 )
{
    register DRV_SPI_JOB_OBJECT * VAR_2 = VAR_1->currentJob;


    if (VAR_2->dataLeftToTx + VAR_2->dummyLeftToTx == 0)
    {
        return 0;
    }

    if (!FUNC_1(VAR_0))
    {
        return 0;
    }

    if (VAR_1->symbolsInProgress != 0)
    {
        return 0;
    }
    if (VAR_2->dataLeftToTx != 0)
    {

        FUNC_0(VAR_0, VAR_2->txBuffer[VAR_2->dataTxed]);
        VAR_2->dataTxed++;
        VAR_2->dataLeftToTx--;
    }
    else
    {

        FUNC_0(VAR_0, 0xff);
        VAR_2->dummyLeftToTx--;
    }

    VAR_1->symbolsInProgress = 1;

    return 0;
}
