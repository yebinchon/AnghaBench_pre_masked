
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcp_pcb {int dummy; } ;
struct TYPE_5__ {struct tcp_pcb* NewPcb; } ;
struct TYPE_6__ {TYPE_1__ Socket; } ;
struct TYPE_7__ {void* Arg; } ;
struct TYPE_8__ {TYPE_3__ Socket; } ;
struct lwip_callback_msg {TYPE_2__ Output; int Event; TYPE_4__ Input; } ;


 struct lwip_callback_msg* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lwip_callback_msg*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,struct lwip_callback_msg*,int) ;

struct tcp_pcb *
FUNC_5(void *VAR_4)
{
    struct lwip_callback_msg *VAR_5 = FUNC_0(&VAR_2);
    struct tcp_pcb *VAR_6;

    if (VAR_5)
    {
        FUNC_2(&VAR_5->Event, VAR_3, VAR_0);
        VAR_5->Input.Socket.Arg = VAR_4;

        FUNC_4(VAR_1, VAR_5, 1);

        if (FUNC_3(&VAR_5->Event))
            VAR_6 = VAR_5->Output.Socket.NewPcb;
        else
            VAR_6 = ((void*)0);

        FUNC_1(&VAR_2, VAR_5);

        return VAR_6;
    }

    return ((void*)0);
}
