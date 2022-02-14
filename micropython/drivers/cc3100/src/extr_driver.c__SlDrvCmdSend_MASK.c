
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int _u8 ;
typedef int _SlReturnVal_t ;
typedef int _SlFunctionParams_t ;
typedef int _SlCmdExt_t ;
typedef int _SlCmdCtrl_t ;
struct TYPE_2__ {int FunctionParams; int IsCmdRespWaited; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,int *,void*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int *,int *,int) ;

_SlReturnVal_t FUNC_3(
    _SlCmdCtrl_t *VAR_4 ,
    void *VAR_5 ,
    _SlCmdExt_t *VAR_6)
{
    _SlReturnVal_t VAR_7;
    _u8 VAR_8;

    _SlFunctionParams_t VAR_9;


    VAR_8 = VAR_3->IsCmdRespWaited;


    FUNC_2(&VAR_9, &VAR_3->FunctionParams, sizeof(_SlFunctionParams_t));

    VAR_3->IsCmdRespWaited = VAR_1;

    FUNC_0(VAR_0, VAR_2, "_SlDrvCmdSend: call _SlDrvMsgWrite");


    VAR_7 = FUNC_1(VAR_4, VAR_6, VAR_5);


    VAR_3->IsCmdRespWaited = VAR_8;


    FUNC_2(&VAR_3->FunctionParams, &VAR_9, sizeof(_SlFunctionParams_t));

    return VAR_7;


}
