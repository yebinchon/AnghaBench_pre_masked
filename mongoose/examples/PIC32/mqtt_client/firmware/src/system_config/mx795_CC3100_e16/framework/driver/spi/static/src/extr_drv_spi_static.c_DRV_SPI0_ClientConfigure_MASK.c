
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {scalar_t__ baudRate; int * operationEnded; int * operationStarting; } ;
struct TYPE_5__ {int * operationEnded; int * operationStarting; } ;
typedef TYPE_1__ DRV_SPI_OBJ ;
typedef TYPE_2__ DRV_SPI_CLIENT_DATA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;

int32_t FUNC_2 ( const DRV_SPI_CLIENT_DATA * VAR_3 )
{
    DRV_SPI_OBJ *VAR_4 = (DRV_SPI_OBJ*)((void*)0);

    VAR_4 = &VAR_2;

    if (VAR_3 == ((void*)0))
    {

        return 0;
    }

    if (VAR_3->operationStarting != ((void*)0))
    {
        VAR_4->operationStarting = VAR_3->operationStarting;
    }

    if (VAR_3->operationEnded != ((void*)0))
    {
        VAR_4->operationEnded = VAR_3->operationEnded;
    }

    if (VAR_3->baudRate != 0)
    {

        FUNC_0 (VAR_1,
                              FUNC_1(VAR_0),
                              VAR_3->baudRate);
    }

    return 0;
}
