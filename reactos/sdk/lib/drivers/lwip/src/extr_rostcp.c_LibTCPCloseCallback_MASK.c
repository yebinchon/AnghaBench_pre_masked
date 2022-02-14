
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* Connection; scalar_t__ Callback; } ;
struct TYPE_10__ {TYPE_3__ Close; } ;
struct TYPE_7__ {void* Error; } ;
struct TYPE_8__ {TYPE_1__ Close; } ;
struct lwip_callback_msg {int Event; TYPE_4__ Input; TYPE_2__ Output; } ;
struct TYPE_11__ {scalar_t__ Closing; int * SocketContext; } ;
typedef int * PTCP_PCB ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *) ;

__attribute__((used)) static
void
FUNC_5(void *VAR_5)
{
    struct lwip_callback_msg *VAR_6 = VAR_5;
    PTCP_PCB VAR_7 = VAR_6->Input.Close.Connection->SocketContext;


    FUNC_1(VAR_6->Input.Close.Connection);


    if (VAR_6->Input.Close.Connection->Closing)
    {
        VAR_6->Output.Close.Error = VAR_1;
        goto done;
    }


    if (VAR_6->Input.Close.Callback)
        VAR_6->Input.Close.Connection->Closing = VAR_4;


    if (!VAR_6->Input.Close.Connection->SocketContext)
    {
        VAR_6->Output.Close.Error = VAR_1;
        goto done;
    }


    VAR_6->Input.Close.Connection->SocketContext = ((void*)0);
    FUNC_3(VAR_7, ((void*)0));



    VAR_6->Output.Close.Error = FUNC_4(VAR_7);

    if (VAR_6->Output.Close.Error)
    {

        VAR_6->Input.Close.Connection->SocketContext = VAR_7;
        VAR_6->Input.Close.Connection->Closing = VAR_2;
    }
    else if (VAR_6->Input.Close.Callback)
    {
        FUNC_2(VAR_6->Input.Close.Connection, VAR_0);
    }

done:
    FUNC_0(&VAR_6->Event, VAR_3, VAR_2);
}
