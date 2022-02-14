
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct DRV_SPI_OBJ {scalar_t__ symbolsInProgress; TYPE_1__* currentJob; } ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__ dataLeftToRx; size_t dataRxed; int dummyLeftToRx; int * rxBuffer; } ;
typedef TYPE_1__ DRV_SPI_JOB_OBJECT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

int32_t FUNC_2( struct DRV_SPI_OBJ * VAR_1 )
{
    register DRV_SPI_JOB_OBJECT * VAR_2 = VAR_1->currentJob;

    if (VAR_2 == ((void*)0))
    {
        return 0;
    }
    if (FUNC_1(VAR_0))
    {

        if (VAR_2->dataLeftToRx != 0)
        {

            VAR_2->rxBuffer[VAR_2->dataRxed] = FUNC_0(VAR_0);
            VAR_2->dataRxed++;
            VAR_2->dataLeftToRx --;
        }
        else
        {




            FUNC_0(VAR_0);

            VAR_2->dummyLeftToRx--;
        }

        VAR_1->symbolsInProgress = 0;
    }

    return 0;
}
