
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ MessageType; scalar_t__ Data; } ;
struct TYPE_3__ {scalar_t__ MessageType; scalar_t__ Data; } ;
union lpc_message {TYPE_2__ msg; TYPE_1__ msg64; } ;
typedef scalar_t__ NTSTATUS ;
typedef int LPSTR ;
typedef int HANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(HANDLE VAR_5, union lpc_message *VAR_6)
{
    NTSTATUS VAR_7;

    if (VAR_4)
    {
        FUNC_0(VAR_6->msg64.MessageType == VAR_0,
           "Expected LPC_REQUEST, got %d\n", VAR_6->msg64.MessageType);
        FUNC_0(!FUNC_2((LPSTR)VAR_6->msg64.Data, VAR_2),
           "Expected %s, got %s\n", VAR_2, VAR_6->msg64.Data);
        FUNC_3((LPSTR)VAR_6->msg64.Data, VAR_1);

        VAR_7 = FUNC_1(VAR_5, &VAR_6->msg);
        FUNC_0(VAR_7 == VAR_3, "Expected STATUS_SUCCESS, got %x\n", VAR_7);
        FUNC_0(VAR_6->msg64.MessageType == VAR_0,
           "Expected LPC_REQUEST, got %d\n", VAR_6->msg64.MessageType);
        FUNC_0(!FUNC_2((LPSTR)VAR_6->msg64.Data, VAR_1),
           "Expected %s, got %s\n", VAR_1, VAR_6->msg64.Data);
    }
    else
    {
        FUNC_0(VAR_6->msg.MessageType == VAR_0,
           "Expected LPC_REQUEST, got %d\n", VAR_6->msg.MessageType);
        FUNC_0(!FUNC_2((LPSTR)VAR_6->msg.Data, VAR_2),
           "Expected %s, got %s\n", VAR_2, VAR_6->msg.Data);
        FUNC_3((LPSTR)VAR_6->msg.Data, VAR_1);

        VAR_7 = FUNC_1(VAR_5, &VAR_6->msg);
        FUNC_0(VAR_7 == VAR_3, "Expected STATUS_SUCCESS, got %x\n", VAR_7);
        FUNC_0(VAR_6->msg.MessageType == VAR_0,
           "Expected LPC_REQUEST, got %d\n", VAR_6->msg.MessageType);
        FUNC_0(!FUNC_2((LPSTR)VAR_6->msg.Data, VAR_1),
           "Expected %s, got %s\n", VAR_1, VAR_6->msg.Data);
    }
}
