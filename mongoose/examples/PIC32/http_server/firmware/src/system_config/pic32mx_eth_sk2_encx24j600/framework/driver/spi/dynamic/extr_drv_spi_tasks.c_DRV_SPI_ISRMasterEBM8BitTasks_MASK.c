
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct DRV_SPI_DRIVER_OBJECT {int txEnabled; scalar_t__ currentBaudRate; int rxEnabled; int txInterruptSource; int rxInterruptSource; int errInterruptSource; TYPE_1__* currentJob; int queue; int spiClk; scalar_t__ symbolsInProgress; int spiId; } ;
typedef int int32_t ;
struct TYPE_5__ {scalar_t__ baudRate; int (* operationEnded ) (int ,int ,int ) ;int (* operationStarting ) (int ,int ,int ) ;} ;
struct TYPE_4__ {scalar_t__ dataLeftToTx; scalar_t__ dummyLeftToTx; size_t dataLeftToRx; size_t dummyLeftToRx; int context; scalar_t__ pClient; int (* completeCB ) (int ,int ,int ) ;int status; } ;
typedef int SPI_MODULE_ID ;
typedef TYPE_1__ DRV_SPI_JOB_OBJECT ;
typedef TYPE_2__ DRV_SPI_CLIENT_OBJECT ;
typedef int DRV_SPI_BUFFER_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct DRV_SPI_DRIVER_OBJECT*) ;
 int FUNC_1 (struct DRV_SPI_DRIVER_OBJECT*) ;
 int FUNC_2 (struct DRV_SPI_DRIVER_OBJECT*) ;
 scalar_t__ FUNC_3 (int ,void*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ,int ) ;

int32_t FUNC_19 ( struct DRV_SPI_DRIVER_OBJECT * VAR_5 )
{
    volatile bool VAR_6;


    FUNC_12(VAR_5->rxInterruptSource);
    FUNC_12(VAR_5->txInterruptSource);
    FUNC_12(VAR_5->errInterruptSource);
    do {

        DRV_SPI_JOB_OBJECT * VAR_7 = VAR_5->currentJob;
        SPI_MODULE_ID VAR_8 = VAR_5->spiId;

        if (VAR_5->currentJob == ((void*)0))
        {
            if (FUNC_3(VAR_5->queue, (void *)&(VAR_5->currentJob)) != VAR_2)
            {
                FUNC_10(0, "\r\nSPI Driver: Error in dequeing.");
                return 0;
            }
            if (VAR_5->currentJob == ((void*)0))
            {
                VAR_5->txEnabled = 0;
                return 0;
            }
            VAR_7 = VAR_5->currentJob;

            VAR_5->symbolsInProgress = 0;


            DRV_SPI_CLIENT_OBJECT * VAR_9 = (DRV_SPI_CLIENT_OBJECT*)VAR_7->pClient;
            if (VAR_9->operationStarting != ((void*)0))
            {
                (*VAR_9->operationStarting)(VAR_1, (DRV_SPI_BUFFER_HANDLE)VAR_7, VAR_7->context);
            }

            if (VAR_9->baudRate != VAR_5->currentBaudRate)
            {
                FUNC_6( VAR_8 , FUNC_11(VAR_5->spiClk), VAR_9->baudRate );
                VAR_5->currentBaudRate = VAR_9->baudRate;
            }


            VAR_7->status = VAR_1;
            if (VAR_7->dataLeftToTx +VAR_7->dummyLeftToTx > FUNC_9(VAR_8))
            {
                FUNC_8(VAR_8, VAR_4);
                FUNC_8(VAR_8, VAR_3);
            }

            FUNC_7(VAR_8);
        }


        VAR_6 = 0;

             if
            (VAR_7->dataLeftToTx +VAR_7->dummyLeftToTx != 0)
        {
            FUNC_2(VAR_5);
        }

        FUNC_0(VAR_5);


        volatile size_t VAR_10 = VAR_7->dataLeftToRx + VAR_7->dummyLeftToRx;


        if (VAR_10 != 0)
        {
            FUNC_1(VAR_5);
            VAR_10 = VAR_7->dataLeftToRx + VAR_7->dummyLeftToRx;
        }

        if (VAR_10 == 0)
        {

                    VAR_5->rxEnabled = 0;

                    VAR_7->status = VAR_0;

                    if (VAR_7->completeCB != ((void*)0))
                    {
                        (*VAR_7->completeCB)(VAR_0, (DRV_SPI_BUFFER_HANDLE)VAR_7, VAR_7->context);
                    }




                    DRV_SPI_CLIENT_OBJECT * VAR_11 = (DRV_SPI_CLIENT_OBJECT*)VAR_7->pClient;
                    if (VAR_11->operationEnded != ((void*)0))
                    {
                        (*VAR_11->operationEnded)(VAR_0, (DRV_SPI_BUFFER_HANDLE)VAR_7, VAR_7->context);
                    }

                    if (FUNC_4(VAR_5->queue, VAR_7) != VAR_2)
                    {
                        FUNC_10(0, "\r\nSPI Driver: Queue free element error.");
                        return 0;
                    }

                    VAR_5->currentJob = ((void*)0);
                    if (!FUNC_5(VAR_5->queue))
                    {
                        VAR_6 = 1;
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }




        if (VAR_5->currentJob != ((void*)0))
        {

            FUNC_14(VAR_5->rxInterruptSource);
            FUNC_14(VAR_5->txInterruptSource);
            FUNC_14(VAR_5->errInterruptSource);

            if ((FUNC_15(VAR_5->rxInterruptSource)) ||
                (FUNC_15(VAR_5->txInterruptSource)) ||
                (FUNC_15(VAR_5->errInterruptSource)))
            {

                VAR_6 = 1;
                continue;
            }

            FUNC_13(VAR_5->rxInterruptSource);
            FUNC_13(VAR_5->txInterruptSource);

            return 0;
        }

    } while(VAR_6);

    FUNC_14(VAR_5->rxInterruptSource);
    FUNC_14(VAR_5->txInterruptSource);
    return 0;
}
