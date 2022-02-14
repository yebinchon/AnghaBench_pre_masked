
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DRV_SPI_SYS_QUEUE_SETUP ;
typedef scalar_t__ DRV_SPI_SYS_QUEUE_RESULT ;
typedef int DRV_SPI_SYS_QUEUE_MANAGER_HANDLE ;
typedef scalar_t__ DRV_SPI_SYS_QUEUE_HANDLE ;


 scalar_t__ FUNC_0 (int ,int *,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

DRV_SPI_SYS_QUEUE_HANDLE FUNC_3(DRV_SPI_SYS_QUEUE_MANAGER_HANDLE VAR_1, DRV_SPI_SYS_QUEUE_SETUP * VAR_2, DRV_SPI_SYS_QUEUE_HANDLE * VAR_3)
{
    DRV_SPI_SYS_QUEUE_RESULT VAR_4;
    DRV_SPI_SYS_QUEUE_HANDLE VAR_5;
    VAR_4 = FUNC_1(VAR_1);
    if (VAR_4 != VAR_0)
    {
        return VAR_4;
    }

    VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);

    VAR_4 = FUNC_2(VAR_1);
    if (VAR_4 != VAR_0)
    {
        return VAR_4;
    }
    return VAR_5;
}
