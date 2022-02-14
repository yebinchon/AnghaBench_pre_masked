
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int Port; int IpAddress; TYPE_4__* Connection; } ;
struct TYPE_12__ {TYPE_3__ Bind; } ;
struct TYPE_8__ {int Error; } ;
struct TYPE_9__ {TYPE_1__ Bind; } ;
struct lwip_callback_msg {int Event; TYPE_5__ Input; TYPE_2__ Output; } ;
struct TYPE_13__ {int so_options; } ;
struct TYPE_11__ {TYPE_6__* SocketContext; } ;
typedef TYPE_6__* PTCP_PCB ;


 int FUNC_0 (struct lwip_callback_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*,int ,int ) ;

__attribute__((used)) static
void
FUNC_4(void *VAR_4)
{
    struct lwip_callback_msg *VAR_5 = VAR_4;
    PTCP_PCB VAR_6 = VAR_5->Input.Bind.Connection->SocketContext;

    FUNC_0(VAR_5);

    if (!VAR_5->Input.Bind.Connection->SocketContext)
    {
        VAR_5->Output.Bind.Error = VAR_0;
        goto done;
    }


    VAR_6->so_options |= VAR_3;

    VAR_5->Output.Bind.Error = FUNC_3(VAR_6,
                                      VAR_5->Input.Bind.IpAddress,
                                      FUNC_2(VAR_5->Input.Bind.Port));

done:
    FUNC_1(&VAR_5->Event, VAR_2, VAR_1);
}
