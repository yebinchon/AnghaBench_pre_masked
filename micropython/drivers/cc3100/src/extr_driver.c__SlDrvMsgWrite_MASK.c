
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ _u8 ;
typedef int _SlReturnVal_t ;
struct TYPE_15__ {int RxPayloadLen; scalar_t__ TxPayloadLen; scalar_t__* pRxPayload; scalar_t__* pTxPayload; } ;
typedef TYPE_3__ _SlCmdExt_t ;
struct TYPE_16__ {scalar_t__ TxDescLen; int Opcode; } ;
typedef TYPE_4__ _SlCmdCtrl_t ;
struct TYPE_18__ {int Short; int Long; } ;
struct TYPE_14__ {scalar_t__ Len; int Opcode; } ;
struct TYPE_13__ {scalar_t__* pTxRxDescBuff; TYPE_3__* pCmdExt; TYPE_4__* pCmdCtrl; } ;
struct TYPE_17__ {int FD; TYPE_2__ TempProtocolHeader; TYPE_1__ FunctionParams; } ;
struct TYPE_12__ {int Write; } ;


 scalar_t__ VAR_0 ;
 TYPE_11__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 TYPE_6__ VAR_6 ;
 TYPE_5__* VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

_SlReturnVal_t FUNC_8(_SlCmdCtrl_t *VAR_8,_SlCmdExt_t *VAR_9, _u8 *VAR_10)
{
    _u8 VAR_11 = VAR_0;
    FUNC_1(((void*)0) != VAR_8);

    VAR_7->FunctionParams.pCmdCtrl = VAR_8;
    VAR_7->FunctionParams.pTxRxDescBuff = VAR_10;
    VAR_7->FunctionParams.pCmdExt = VAR_9;

    VAR_7->TempProtocolHeader.Opcode = VAR_8->Opcode;
    VAR_7->TempProtocolHeader.Len = FUNC_5(VAR_8, VAR_9);

    if (VAR_9 && VAR_9->RxPayloadLen < 0 && VAR_9->TxPayloadLen)
    {
        VAR_9->RxPayloadLen = VAR_9->RxPayloadLen * (-1);
        VAR_11 = VAR_4;
        VAR_7->TempProtocolHeader.Len = VAR_7->TempProtocolHeader.Len + VAR_9->RxPayloadLen;
    }
    FUNC_0(VAR_7->FD, (_u8 *)&VAR_6.Short, VAR_3);



    FUNC_0(VAR_7->FD, (_u8 *)&VAR_7->TempProtocolHeader, VAR_5);


    if (VAR_10 && VAR_8->TxDescLen > 0)
    {
     FUNC_0(VAR_7->FD, VAR_10,
                           FUNC_4(VAR_8->TxDescLen));
    }




    if (VAR_11 == VAR_4 )
    {
      FUNC_0(VAR_7->FD, VAR_9->pRxPayload,
                           FUNC_4(VAR_9->RxPayloadLen));
    }


    if (VAR_9 && VAR_9->TxPayloadLen > 0)
    {


        FUNC_1(FUNC_3(VAR_8->TxDescLen));

     FUNC_0(VAR_7->FD, VAR_9->pTxPayload,
                           FUNC_4(VAR_9->TxPayloadLen));
    }


    FUNC_2(VAR_1.Write);





    return VAR_2;
}
