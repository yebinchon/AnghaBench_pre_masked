
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int _SlSpawnEntryFunc_t ;
typedef int _SlReturnVal_t ;
struct TYPE_5__ {scalar_t__ RxMsgClass; int * pAsyncBuf; } ;
struct TYPE_6__ {TYPE_1__ AsyncExt; } ;
struct TYPE_7__ {scalar_t__ IsCmdRespWaited; int GlobalLockObj; int CmdSyncObj; TYPE_2__ FunctionParams; int RxDoneCnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_3__* VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int *) ;

_SlReturnVal_t FUNC_9(void)
{







    while (VAR_4 == VAR_6->IsCmdRespWaited)
    {
        if(FUNC_1(VAR_6))
        {
            FUNC_0(FUNC_3());
            VAR_6->RxDoneCnt++;

            if (VAR_1 == VAR_6->FunctionParams.AsyncExt.RxMsgClass)
            {
                VAR_6->IsCmdRespWaited = VAR_2;



                FUNC_8(&VAR_6->CmdSyncObj);
            }
            else if (VAR_0 == VAR_6->FunctionParams.AsyncExt.RxMsgClass)
            {






                FUNC_2();



                FUNC_6(VAR_6->FunctionParams.AsyncExt.pAsyncBuf);



            }
        }
        else
        {

             FUNC_5(&VAR_6->CmdSyncObj);
        }
    }







    FUNC_4(&VAR_6->GlobalLockObj);

    if(FUNC_1(VAR_6))
    {
        FUNC_7((_SlSpawnEntryFunc_t)VAR_5, ((void*)0), 0);
    }

    return VAR_3;
}
