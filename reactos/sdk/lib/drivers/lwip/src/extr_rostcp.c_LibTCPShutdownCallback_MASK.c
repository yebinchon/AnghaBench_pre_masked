
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* Connection; scalar_t__ shut_tx; scalar_t__ shut_rx; } ;
struct TYPE_9__ {TYPE_3__ Shutdown; } ;
struct TYPE_6__ {void* Error; } ;
struct TYPE_7__ {TYPE_1__ Shutdown; } ;
struct lwip_callback_msg {int Event; TYPE_4__ Input; TYPE_2__ Output; } ;
struct TYPE_10__ {int * SocketContext; void* SendShutdown; void* ReceiveShutdown; int ReceiveShutdownStatus; } ;
typedef int * PTCP_PCB ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,void*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*,void*) ;
 void* VAR_4 ;
 int FUNC_2 (int *,int *) ;
 void* FUNC_3 (int *,void*,void*) ;

__attribute__((used)) static
void
FUNC_4(void *VAR_5)
{
    struct lwip_callback_msg *VAR_6 = VAR_5;
    PTCP_PCB VAR_7 = VAR_6->Input.Shutdown.Connection->SocketContext;

    if (!VAR_6->Input.Shutdown.Connection->SocketContext)
    {
        VAR_6->Output.Shutdown.Error = VAR_0;
        goto done;
    }







    if (VAR_6->Input.Shutdown.shut_rx) {
        VAR_6->Output.Shutdown.Error = FUNC_3(VAR_7, VAR_4, VAR_1);
    }
    if (VAR_6->Input.Shutdown.shut_tx) {
        VAR_6->Output.Shutdown.Error = FUNC_3(VAR_7, VAR_1, VAR_4);
    }

    if (!VAR_6->Output.Shutdown.Error)
    {
        if (VAR_6->Input.Shutdown.shut_rx)
        {
            VAR_6->Input.Shutdown.Connection->ReceiveShutdown = VAR_4;
            VAR_6->Input.Shutdown.Connection->ReceiveShutdownStatus = VAR_3;
        }

        if (VAR_6->Input.Shutdown.shut_tx)
            VAR_6->Input.Shutdown.Connection->SendShutdown = VAR_4;

        if (VAR_6->Input.Shutdown.Connection->ReceiveShutdown &&
            VAR_6->Input.Shutdown.Connection->SendShutdown)
        {

            VAR_6->Input.Shutdown.Connection->SocketContext = ((void*)0);
            FUNC_2(VAR_7, ((void*)0));
            FUNC_1(VAR_6->Input.Shutdown.Connection, VAR_0);
        }
    }

done:
    FUNC_0(&VAR_6->Event, VAR_2, VAR_1);
}
