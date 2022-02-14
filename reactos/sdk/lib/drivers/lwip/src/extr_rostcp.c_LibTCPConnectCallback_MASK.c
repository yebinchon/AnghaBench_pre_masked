
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ Error; } ;
struct TYPE_10__ {TYPE_4__ Connect; } ;
struct TYPE_7__ {int Port; int IpAddress; TYPE_1__* Connection; } ;
struct TYPE_8__ {TYPE_2__ Connect; } ;
struct lwip_callback_msg {int Event; TYPE_5__ Output; TYPE_3__ Input; } ;
typedef scalar_t__ err_t ;
struct TYPE_6__ {scalar_t__ SocketContext; } ;
typedef int PTCP_PCB ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static
void
FUNC_6(void *VAR_8)
{
    struct lwip_callback_msg *VAR_9 = VAR_8;
    err_t VAR_10;

    FUNC_0(VAR_8);

    if (!VAR_9->Input.Connect.Connection->SocketContext)
    {
        VAR_9->Output.Connect.Error = VAR_0;
        goto done;
    }

    FUNC_4((PTCP_PCB)VAR_9->Input.Connect.Connection->SocketContext, VAR_6);
    FUNC_5((PTCP_PCB)VAR_9->Input.Connect.Connection->SocketContext, VAR_7);

    VAR_10 = FUNC_3((PTCP_PCB)VAR_9->Input.Connect.Connection->SocketContext,
                        VAR_9->Input.Connect.IpAddress, FUNC_2(VAR_9->Input.Connect.Port),
                        VAR_5);

    VAR_9->Output.Connect.Error = VAR_10 == VAR_2 ? VAR_1 : VAR_10;

done:
    FUNC_1(&VAR_9->Event, VAR_4, VAR_3);
}
