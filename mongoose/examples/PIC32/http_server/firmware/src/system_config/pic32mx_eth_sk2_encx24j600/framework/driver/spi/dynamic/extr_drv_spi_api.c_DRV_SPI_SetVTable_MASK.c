
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct DRV_SPI_DRIVER_OBJECT {int vfMainTask; } ;
typedef int int32_t ;
struct TYPE_3__ {scalar_t__ spiMode; int taskMode; scalar_t__ bufferType; scalar_t__ commWidth; } ;
typedef TYPE_1__ DRV_SPI_INIT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

int32_t FUNC_1(struct DRV_SPI_DRIVER_OBJECT * VAR_8, const DRV_SPI_INIT * const VAR_9)
{
    uint8_t VAR_10 = 0;
    if (VAR_9->spiMode == VAR_2)
    {
        VAR_10 = VAR_7;
    }
    else
    {
        FUNC_0(0, "\r\nInvalid SPI Configuration.");
        return -1;
    }

    if (VAR_9->taskMode == VAR_3)
    {
        VAR_10 |= VAR_3;
    }
    else
    {
        FUNC_0(0, "\r\nInvalid SPI Configuration.");
        return -1;
    }

    if (VAR_9->bufferType == VAR_0)
    {
        VAR_10 |= VAR_6;
    }
    else
    {
        FUNC_0(0, "\r\nInvalid SPI Configuration.");
        return -1;
    }

    if (VAR_9->commWidth == VAR_4)
    {
        VAR_10 |= VAR_5;
    }
    else
    {
        FUNC_0(0, "\r\nInvalid SPI Configuration.");
        return -1;
    }
    switch (VAR_10)
    {
    case 128:
        VAR_8->vfMainTask = VAR_1;
        break;
    default:
        FUNC_0(0, "\r\nInvalid SPI Configuration.");
        return -1;
    }
    return 0;
}
