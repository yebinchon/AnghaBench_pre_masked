
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ Error; scalar_t__ Information; } ;
struct TYPE_10__ {TYPE_4__ Send; } ;
struct TYPE_7__ {scalar_t__ DataLength; TYPE_1__* Connection; int Data; } ;
struct TYPE_8__ {TYPE_2__ Send; } ;
struct lwip_callback_msg {int Event; TYPE_5__ Output; TYPE_3__ Input; } ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;
struct TYPE_6__ {scalar_t__ SocketContext; scalar_t__ SendShutdown; } ;
typedef scalar_t__ PTCP_PCB ;


 int FUNC_0 (struct lwip_callback_msg*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static
void
FUNC_5(void *VAR_8)
{
    struct lwip_callback_msg *VAR_9 = VAR_8;
    PTCP_PCB VAR_10 = VAR_9->Input.Send.Connection->SocketContext;
    ULONG VAR_11;
    UCHAR VAR_12;

    FUNC_0(VAR_9);

    if (!VAR_9->Input.Send.Connection->SocketContext)
    {
        VAR_9->Output.Send.Error = VAR_0;
        goto done;
    }

    if (VAR_9->Input.Send.Connection->SendShutdown)
    {
        VAR_9->Output.Send.Error = VAR_0;
        goto done;
    }

    VAR_12 = VAR_6;
    VAR_11 = VAR_9->Input.Send.DataLength;
    if (FUNC_3(VAR_10) == 0)
    {

        VAR_9->Output.Send.Error = VAR_1;
        goto done;
    }
    else if (FUNC_3(VAR_10) < VAR_11)
    {

        VAR_11 = FUNC_3(VAR_10);


        VAR_12 |= VAR_7;
    }

    VAR_9->Output.Send.Error = FUNC_4(VAR_10,
                                       VAR_9->Input.Send.Data,
                                       VAR_11,
                                       VAR_12);
    if (VAR_9->Output.Send.Error == VAR_3)
    {

        FUNC_2((PTCP_PCB)VAR_9->Input.Send.Connection->SocketContext);
        VAR_9->Output.Send.Information = VAR_11;
    }
    else if (VAR_9->Output.Send.Error == VAR_2)
    {

        VAR_9->Output.Send.Error = VAR_1;
    }

done:
    FUNC_1(&VAR_9->Event, VAR_5, VAR_4);
}
