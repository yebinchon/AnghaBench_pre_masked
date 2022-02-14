
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pHead; } ;
typedef TYPE_1__ DRV_SPI_SYS_QUEUE_QUEUE_DATA ;
typedef scalar_t__ DRV_SPI_SYS_QUEUE_HANDLE ;



bool FUNC_0(DRV_SPI_SYS_QUEUE_HANDLE VAR_0)
{
    DRV_SPI_SYS_QUEUE_QUEUE_DATA * VAR_1 = (DRV_SPI_SYS_QUEUE_QUEUE_DATA *)VAR_0;
    return VAR_1->pHead == ((void*)0);
}
