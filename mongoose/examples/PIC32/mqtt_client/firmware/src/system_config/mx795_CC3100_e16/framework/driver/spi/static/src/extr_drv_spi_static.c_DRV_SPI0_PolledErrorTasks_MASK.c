
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct DRV_SPI_OBJ {TYPE_1__* currentJob; int queue; int (* operationEnded ) (int ,int ,int ) ;} ;
typedef int int32_t ;
struct TYPE_3__ {int context; int (* completeCB ) (int ,int ,int ) ;int status; } ;
typedef TYPE_1__ DRV_SPI_JOB_OBJECT ;
typedef int DRV_SPI_BUFFER_HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

int32_t FUNC_7(struct DRV_SPI_OBJ * VAR_3)
{

    if (VAR_3->currentJob == ((void*)0))
    {
        return 0;
    }

    register DRV_SPI_JOB_OBJECT * VAR_4 = VAR_3->currentJob;

    if (FUNC_2(VAR_2))
    {
        VAR_4->status = VAR_0;
        if (VAR_4->completeCB != ((void*)0))
        {
            (*VAR_4->completeCB)(VAR_0, (DRV_SPI_BUFFER_HANDLE)VAR_4, VAR_4->context);
        }
        if (VAR_3->operationEnded != ((void*)0))
        {
            (*VAR_3->operationEnded)(VAR_0, (DRV_SPI_BUFFER_HANDLE)VAR_4, VAR_4->context);
        }
        if (FUNC_0(VAR_3->queue, VAR_4) != VAR_1)
        {
            FUNC_4(0, "\r\nSPI Driver: Queue free element error.");
            return 0;
        }
        VAR_3->currentJob = ((void*)0);
        FUNC_1(VAR_2 );
        FUNC_3 (VAR_2 );
    }
    return 0;
}
