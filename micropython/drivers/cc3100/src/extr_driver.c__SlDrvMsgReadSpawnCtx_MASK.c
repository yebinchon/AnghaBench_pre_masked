
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ _i16 ;
typedef int _SlReturnVal_t ;
struct TYPE_5__ {int RxMsgClass; int * pAsyncBuf; } ;
struct TYPE_6__ {TYPE_1__ AsyncExt; } ;
struct TYPE_7__ {scalar_t__ IsCmdRespWaited; int GlobalLockObj; TYPE_2__ FunctionParams; int RxDoneCnt; int CmdSyncObj; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_3__* VAR_4 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;

_SlReturnVal_t FUNC_10(void *VAR_5)
{
    FUNC_5(&VAR_4->GlobalLockObj);





    if(VAR_0 == (FUNC_2(VAR_4)))
    {
        FUNC_6(&VAR_4->GlobalLockObj);

        return VAR_2;
    }

    FUNC_1(FUNC_4());

    VAR_4->RxDoneCnt++;

    switch(VAR_4->FunctionParams.AsyncExt.RxMsgClass)
    {
    case 131:


        FUNC_0(((void*)0) != VAR_4->FunctionParams.AsyncExt.pAsyncBuf);

        FUNC_3();


        FUNC_8(VAR_4->FunctionParams.AsyncExt.pAsyncBuf);



        break;
    case 129:
    case 128:

        break;
    case 130:


    default:
        FUNC_0(0);
    }

    FUNC_6(&VAR_4->GlobalLockObj);

    return(VAR_2);
}
