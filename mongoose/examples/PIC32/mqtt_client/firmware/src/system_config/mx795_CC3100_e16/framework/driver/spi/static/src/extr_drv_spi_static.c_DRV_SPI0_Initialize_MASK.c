
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int maxElements; int reserveElements; } ;
struct TYPE_5__ {int numTrfsSmPolled; int * operationEnded; int * operationStarting; int queue; } ;
typedef int SYS_MODULE_OBJ ;
typedef TYPE_1__ DRV_SPI_OBJ ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_19 (int,char*) ;
 int FUNC_20 (int ) ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;

SYS_MODULE_OBJ FUNC_21(void)
{
    DRV_SPI_OBJ *VAR_14 = (DRV_SPI_OBJ*)((void*)0);

    VAR_14 = &VAR_10;


    FUNC_7 ( VAR_5 );


    FUNC_14 ( VAR_5 );
    FUNC_16(VAR_5, VAR_8);


    FUNC_18( VAR_5 );


    FUNC_5( VAR_5, VAR_3 );
    FUNC_15( VAR_5, VAR_7 );


    FUNC_13 ( VAR_5, VAR_6);


    FUNC_6 ( VAR_5, VAR_4 );


    FUNC_3( VAR_5 , FUNC_20(VAR_0), 10000000 );


    FUNC_12( VAR_5 );
    FUNC_4( VAR_5 );
    FUNC_17 ( VAR_5 );


    if (FUNC_1(&VAR_13, &VAR_11) != VAR_2)
    {
        FUNC_19(0, "\r\nSPI Driver: Could not create queuing system.");
        return VAR_9;
    }


    VAR_12.maxElements = 10;
    VAR_12.reserveElements = 1;


    if (FUNC_0(VAR_11, &VAR_12, &VAR_14->queue) != VAR_2)
    {
        FUNC_19(0, "\r\nSPI Driver: Could not set up driver instance queue.");
        return VAR_9;

    }


    VAR_14->operationStarting = ((void*)0);
    VAR_14->operationEnded = ((void*)0);
    VAR_14->numTrfsSmPolled = 16;


    FUNC_8(VAR_5);

    return (SYS_MODULE_OBJ)VAR_1 ;
}
