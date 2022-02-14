
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ MessageType; int * Data; } ;
struct TYPE_3__ {scalar_t__ MessageType; int * Data; } ;
union lpc_message {TYPE_2__ msg; TYPE_1__ msg64; } ;
typedef int * PHANDLE ;
typedef scalar_t__ NTSTATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_2__*,int,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(union lpc_message *VAR_3, PHANDLE VAR_4)
{
    NTSTATUS VAR_5;

    if (VAR_2)
    {
        FUNC_0(VAR_3->msg64.MessageType == VAR_0,
           "Expected LPC_CONNECTION_REQUEST, got %d\n", VAR_3->msg64.MessageType);
        FUNC_0(!*VAR_3->msg64.Data, "Expected empty string!\n");
    }
    else
    {
        FUNC_0(VAR_3->msg.MessageType == VAR_0,
           "Expected LPC_CONNECTION_REQUEST, got %d\n", VAR_3->msg.MessageType);
        FUNC_0(!*VAR_3->msg.Data, "Expected empty string!\n");
    }

    VAR_5 = FUNC_1(VAR_4, 0, &VAR_3->msg, 1, ((void*)0), ((void*)0));
    FUNC_0(VAR_5 == VAR_1, "Expected STATUS_SUCCESS, got %x\n", VAR_5);

    VAR_5 = FUNC_2(*VAR_4);
    FUNC_0(VAR_5 == VAR_1, "Expected STATUS_SUCCESS, got %x\n", VAR_5);
}
