
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* fptrIntChange ) (scalar_t__,int) ;int * pNext; int * pQueueManager; } ;
typedef int DRV_SPI_SYS_QUEUE_RESULT ;
typedef int DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA ;
typedef TYPE_1__ DRV_SPI_SYS_QUEUE_QUEUE_DATA ;
typedef int DRV_SPI_SYS_QUEUE_MANAGER_HANDLE ;
typedef scalar_t__ DRV_SPI_SYS_QUEUE_HANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;

DRV_SPI_SYS_QUEUE_RESULT FUNC_2(DRV_SPI_SYS_QUEUE_HANDLE VAR_3, bool VAR_4)
{
    if ((VAR_3 <= 0) && (VAR_3 >= VAR_1))
    {
        return VAR_0;
    }

    DRV_SPI_SYS_QUEUE_QUEUE_DATA * VAR_5 = (DRV_SPI_SYS_QUEUE_QUEUE_DATA *)VAR_3;
    DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA * VAR_6 = VAR_5->pQueueManager;

    if (VAR_5->pNext != ((void*)0))
    {
        return VAR_0;
    }

    if (VAR_4)
    {
        return FUNC_0((DRV_SPI_SYS_QUEUE_MANAGER_HANDLE)VAR_6);
    }
    else
    {
        if (VAR_5->fptrIntChange != ((void*)0))
        {
            (*VAR_5->fptrIntChange)(VAR_3, 1);
        }
    }

    return VAR_2;
}
