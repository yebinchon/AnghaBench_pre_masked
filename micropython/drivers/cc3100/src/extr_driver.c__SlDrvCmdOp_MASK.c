
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int _u32 ;
typedef scalar_t__ _SlReturnVal_t ;
typedef int _SlCmdExt_t ;
typedef int _SlCmdCtrl_t ;
struct TYPE_2__ {int GlobalLockObj; int IsCmdRespWaited; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

_SlReturnVal_t FUNC_5(
    _SlCmdCtrl_t *VAR_9 ,
    void *VAR_10 ,
    _SlCmdExt_t *VAR_11)
{
    _SlReturnVal_t VAR_12;


    FUNC_3(&VAR_8->GlobalLockObj);

    VAR_8->IsCmdRespWaited = VAR_5;

    FUNC_0(VAR_1, VAR_2, "_SlDrvCmdOp: call _SlDrvMsgWrite");



    VAR_12 = FUNC_2(VAR_9, VAR_11, VAR_10);

    if(VAR_4 == VAR_12)
    {



        if( 0 == VAR_7 )
        {
            volatile _u32 VAR_13 = 0;
            VAR_7 = 1;
            VAR_13 = VAR_0*VAR_6;
            while( VAR_13-- );
        }


        VAR_12 = FUNC_1();
        FUNC_0(VAR_1, VAR_3, "_SlDrvCmdOp: exited _SlDrvMsgReadCmdCtx");
    }
    else
    {
        FUNC_4(&VAR_8->GlobalLockObj);
    }

    return VAR_12;
}
