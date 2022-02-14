
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DRV_SPI_SYS_QUEUE_RESULT ;
typedef int DRV_SPI_SYS_QUEUE_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

DRV_SPI_SYS_QUEUE_RESULT FUNC_3(DRV_SPI_SYS_QUEUE_HANDLE VAR_1)
{
    DRV_SPI_SYS_QUEUE_RESULT VAR_2;
    DRV_SPI_SYS_QUEUE_RESULT VAR_3;
    VAR_2 = FUNC_1(VAR_1, 1);
    if (VAR_2 != VAR_0)
    {
        return VAR_2;
    }

    VAR_3 = FUNC_0(VAR_1);

    VAR_2 = FUNC_2(VAR_1, 1);
    if (VAR_2 != VAR_0)
    {
        return VAR_2;
    }
    return VAR_3;
}
