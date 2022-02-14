
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * NewPcb; } ;
struct TYPE_9__ {TYPE_3__ Listen; } ;
struct TYPE_6__ {int Backlog; TYPE_5__* Connection; } ;
struct TYPE_7__ {TYPE_1__ Listen; } ;
struct lwip_callback_msg {int Event; TYPE_4__ Output; TYPE_2__ Input; } ;
struct TYPE_10__ {scalar_t__ SocketContext; } ;
typedef int PTCP_PCB ;


 int FUNC_0 (struct lwip_callback_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static
void
FUNC_4(void *VAR_3)
{
    struct lwip_callback_msg *VAR_4 = VAR_3;

    FUNC_0(VAR_4);

    if (!VAR_4->Input.Listen.Connection->SocketContext)
    {
        VAR_4->Output.Listen.NewPcb = ((void*)0);
        goto done;
    }

    VAR_4->Output.Listen.NewPcb = FUNC_3((PTCP_PCB)VAR_4->Input.Listen.Connection->SocketContext, VAR_4->Input.Listen.Backlog);

    if (VAR_4->Output.Listen.NewPcb)
    {
        FUNC_2(VAR_4->Output.Listen.NewPcb, VAR_2);
    }

done:
    FUNC_1(&VAR_4->Event, VAR_1, VAR_0);
}
