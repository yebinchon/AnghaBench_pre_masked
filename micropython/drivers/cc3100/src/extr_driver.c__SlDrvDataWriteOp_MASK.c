
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int _SlSd_t ;
typedef int _SlReturnVal_t ;
typedef int _SlCmdExt_t ;
typedef int _SlCmdCtrl_t ;
struct TYPE_3__ {scalar_t__ TxPoolCnt; int TxLockObj; int TxSyncObj; } ;
struct TYPE_4__ {int SocketTXFailure; int SocketNonBlocking; int GlobalLockObj; TYPE_1__ FlowContCB; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* VAR_4 ;
 int FUNC_5 (int *) ;

_SlReturnVal_t FUNC_6(
    _SlSd_t VAR_5,
    _SlCmdCtrl_t *VAR_6 ,
    void *VAR_7 ,
    _SlCmdExt_t *VAR_8)
{
    _SlReturnVal_t VAR_9 = VAR_2;
    while( 1 )
    {

    FUNC_2(&VAR_4->FlowContCB.TxLockObj);




        FUNC_5(&VAR_4->FlowContCB.TxSyncObj);


        if(VAR_4->SocketTXFailure & (1<<(VAR_5 & VAR_0)))
        {
  FUNC_3(&VAR_4->FlowContCB.TxLockObj);
            return VAR_3;
        }
        if(VAR_4->FlowContCB.TxPoolCnt <= VAR_1 + 1)
        {


            if( VAR_4->SocketNonBlocking & (1<< (VAR_5 & VAR_0)))
            {
            FUNC_3(&VAR_4->FlowContCB.TxLockObj);
                return VAR_9;
            }


        FUNC_4(&VAR_4->FlowContCB.TxSyncObj);
        }
        if(VAR_4->FlowContCB.TxPoolCnt > VAR_1 + 1 )
        {
            break;
        }
        else
        {
   FUNC_3(&VAR_4->FlowContCB.TxLockObj);
        }
    }

    FUNC_2(&VAR_4->GlobalLockObj);


    FUNC_0(VAR_4->FlowContCB.TxPoolCnt > VAR_1 + 1 );
    VAR_4->FlowContCB.TxPoolCnt--;

    FUNC_3(&VAR_4->FlowContCB.TxLockObj);


    VAR_9 = FUNC_1(VAR_6, VAR_8, VAR_7);

    FUNC_3(&VAR_4->GlobalLockObj);

    return VAR_9;
}
