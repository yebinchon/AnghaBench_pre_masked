
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct DRV_SPI_DRIVER_OBJECT {int baudRate; int currentBaudRate; } ;
typedef int int32_t ;
struct TYPE_3__ {int clockMode; scalar_t__ spiMode; int spiProtocolType; int frameSyncPulse; int framePulseWidth; int framePulseEdge; int framePulsePolarity; int framePulseDirection; int baudRate; int spiClk; int commWidth; scalar_t__ spiSlaveSSPin; int inputSamplePhase; scalar_t__ allowIdleRun; int spiId; } ;
typedef int SPI_MODULE_ID ;
typedef TYPE_1__ DRV_SPI_INIT ;






 scalar_t__ VAR_0 ;



 int FUNC_0 (int const,int ,int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int ) ;
 int FUNC_3 (int const,int ) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int const) ;
 int FUNC_9 (int const) ;
 int FUNC_10 (int const) ;
 int FUNC_11 (int const,int ) ;
 int FUNC_12 (int const,int ) ;
 int FUNC_13 (int const,int ) ;
 int FUNC_14 (int const,int ) ;
 int FUNC_15 (int const,int ) ;
 int FUNC_16 (int const,int ) ;
 int FUNC_17 (int const) ;
 int FUNC_18 (int const) ;
 int FUNC_19 (int const,int ) ;
 int FUNC_20 (int const) ;
 int FUNC_21 (int const,int ) ;
 int FUNC_22 (int const,int ) ;
 int FUNC_23 (int const,int ) ;
 int FUNC_24 (int const) ;
 int FUNC_25 (int const) ;
 int FUNC_26 (int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_27 (int,char*) ;
 int FUNC_28 (int ) ;

int32_t FUNC_29(struct DRV_SPI_DRIVER_OBJECT * VAR_8, const DRV_SPI_INIT * const VAR_9)
{
    const register SPI_MODULE_ID VAR_10 = VAR_9->spiId;


    FUNC_4(VAR_10);


    FUNC_20 ( VAR_10 );


    if (VAR_9->allowIdleRun)
    {
        FUNC_25( VAR_10 );
    }
    else
    {
        FUNC_26( VAR_10 );
    }


    switch(VAR_9->clockMode)
    {
        case 131:
            FUNC_2( VAR_10, VAR_2 );
            FUNC_21( VAR_10, VAR_6 );
            break;
        case 132:
            FUNC_2( VAR_10, VAR_2 );
            FUNC_21( VAR_10, VAR_5 );
            break;
        case 134:
            FUNC_2( VAR_10, VAR_1 );
            FUNC_21( VAR_10, VAR_6 );
            break;
        case 133:
            FUNC_2( VAR_10, VAR_1 );
            FUNC_21( VAR_10, VAR_5 );
            break;
        default:
             FUNC_27(0, "\r\nInvalid SPI Configuration.");
            return -1;
    }


    FUNC_19 ( VAR_10, VAR_9->inputSamplePhase);


    if(VAR_9->spiMode == VAR_0 && (VAR_9->spiProtocolType == 129 || VAR_9->spiSlaveSSPin))
    {
        FUNC_23(VAR_10, VAR_7);
    }
    else
    {
        FUNC_22(VAR_10, VAR_7);
    }


    FUNC_3 ( VAR_10, VAR_9->commWidth );


    FUNC_0( VAR_10 , FUNC_28(VAR_9->spiClk), VAR_9->baudRate );
    VAR_8->currentBaudRate = VAR_9->baudRate;
    VAR_8->baudRate = VAR_9->baudRate;

    switch (VAR_9->spiProtocolType)
    {
        case 128:
             FUNC_17( VAR_10 );
             break;

        case 129:
            FUNC_18( VAR_10 );
            break;

        case 130:
             FUNC_17( VAR_10 );

             {
                 FUNC_27(0, "\r\nInvalid SPI Configuration.");
                return -1;
             }
             break;
        default:
             FUNC_27(0, "\r\nInvalid SPI Configuration.");
            return -1;
    }

    FUNC_10( VAR_10 );
    FUNC_11(VAR_10, VAR_4);
    FUNC_11(VAR_10, VAR_3);

    FUNC_1( VAR_10 );
    FUNC_24 ( VAR_10 );


    return 0;
}
