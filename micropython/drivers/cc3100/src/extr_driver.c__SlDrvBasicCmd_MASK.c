
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int _i16 ;
typedef int _SlOpcode_t ;
struct TYPE_9__ {int RxDescLen; scalar_t__ TxDescLen; int Opcode; } ;
typedef TYPE_3__ _SlCmdCtrl_t ;
struct TYPE_8__ {int status; } ;
struct TYPE_7__ {int member_1; int member_0; } ;
struct TYPE_10__ {TYPE_2__ Rsp; TYPE_1__ member_0; } ;
typedef TYPE_4__ _SlBasicCmdMsg_u ;
typedef int _BasicResponse_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,int *) ;

_i16 FUNC_2(_SlOpcode_t VAR_0)
{
    _SlBasicCmdMsg_u VAR_1 = {{0, 0}};
    _SlCmdCtrl_t VAR_2;

    VAR_2.Opcode = VAR_0;
    VAR_2.TxDescLen = 0;
    VAR_2.RxDescLen = sizeof(_BasicResponse_t);


    FUNC_0(FUNC_1((_SlCmdCtrl_t *)&VAR_2, &VAR_1, ((void*)0)));

    return (_i16)VAR_1.Rsp.status;
}
