
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct DRV_SPI_OBJ {scalar_t__ numTrfsSmPolled; TYPE_1__* currentJob; int queue; int (* operationEnded ) (int ,int ,int ) ;int (* operationStarting ) (int ,int ,int ) ;scalar_t__ symbolsInProgress; } ;
typedef int int32_t ;
struct TYPE_3__ {scalar_t__ dataLeftToTx; scalar_t__ dummyLeftToTx; size_t dataLeftToRx; size_t dummyLeftToRx; int context; int (* completeCB ) (int ,int ,int ) ;int status; } ;
typedef TYPE_1__ DRV_SPI_JOB_OBJECT ;
typedef int DRV_SPI_BUFFER_HANDLE ;


 int FUNC_0 (struct DRV_SPI_OBJ*) ;
 int FUNC_1 (struct DRV_SPI_OBJ*) ;
 int FUNC_2 (struct DRV_SPI_OBJ*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,void*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;

int32_t FUNC_10 ( struct DRV_SPI_OBJ * VAR_4 )
{
    volatile bool VAR_5;
    uint8_t VAR_6 = 0;
    uint8_t VAR_7 = VAR_4->numTrfsSmPolled;
    uint8_t VAR_8 = 0;
    do {

        DRV_SPI_JOB_OBJECT * VAR_9 = VAR_4->currentJob;


        if (VAR_4->currentJob == ((void*)0))
        {
            if (FUNC_3(VAR_4->queue, (void *)&(VAR_4->currentJob)) != VAR_2)
            {
                FUNC_6(0, "\r\nSPI Driver: Error in dequeing.");
                return 0;
            }
            if (VAR_4->currentJob == ((void*)0))
            {
                return 0;
            }
            VAR_9 = VAR_4->currentJob;

            VAR_4->symbolsInProgress = 0;


            if (VAR_4->operationStarting != ((void*)0))
            {
                (*VAR_4->operationStarting)(VAR_1, (DRV_SPI_BUFFER_HANDLE)VAR_9, VAR_9->context);
            }


            VAR_9->status = VAR_1;

            FUNC_5(VAR_3);
        }


        VAR_5 = 0;


            if
            (VAR_9->dataLeftToTx +VAR_9->dummyLeftToTx != 0)
        {
            FUNC_1(VAR_4);
        }

        FUNC_2(VAR_4);


        volatile size_t VAR_10 = VAR_9->dataLeftToRx + VAR_9->dummyLeftToRx;


        if (VAR_10 != 0)
        {
            FUNC_0(VAR_4);
            VAR_10 = VAR_9->dataLeftToRx + VAR_9->dummyLeftToRx;
        }
        if (VAR_10 == 0)
        {

                    VAR_9->status = VAR_0;

                    if (VAR_9->completeCB != ((void*)0))
                    {
                        (*VAR_9->completeCB)(VAR_0, (DRV_SPI_BUFFER_HANDLE)VAR_9, VAR_9->context);
                    }




                    if (VAR_4->operationEnded != ((void*)0))
                    {
                        (*VAR_4->operationEnded)(VAR_0, (DRV_SPI_BUFFER_HANDLE)VAR_9, VAR_9->context);
                    }


                    if (FUNC_4(VAR_4->queue, VAR_9) != VAR_2)
                    {
                        FUNC_6(0, "\r\nSPI Driver: Queue free element error.");
                        return 0;
                    }

                    VAR_4->currentJob = ((void*)0);
                }


        VAR_6 ++;
        if ((VAR_6 < VAR_7) && (VAR_8 != 0))
        {
            VAR_5 = 1;
        }

    } while(VAR_5);
    return 0;
}
