
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
typedef TYPE_1__ DRV_SPI_JOB_OBJECT ;
typedef scalar_t__ DRV_SPI_BUFFER_HANDLE ;
typedef int DRV_SPI_BUFFER_EVENT ;



DRV_SPI_BUFFER_EVENT FUNC_0 ( DRV_SPI_BUFFER_HANDLE VAR_0 )
{
    DRV_SPI_JOB_OBJECT * VAR_1 = (DRV_SPI_JOB_OBJECT *)VAR_0;

    return VAR_1->status;
}
