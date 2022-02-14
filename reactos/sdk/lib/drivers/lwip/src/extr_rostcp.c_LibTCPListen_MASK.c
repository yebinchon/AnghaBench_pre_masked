
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8_t ;
struct TYPE_6__ {int * NewPcb; } ;
struct TYPE_7__ {TYPE_2__ Listen; } ;
struct TYPE_8__ {int Backlog; int Connection; } ;
struct TYPE_5__ {TYPE_4__ Listen; } ;
struct lwip_callback_msg {TYPE_3__ Output; int Event; TYPE_1__ Input; } ;
typedef int * PTCP_PCB ;
typedef int PCONNECTION_ENDPOINT ;


 struct lwip_callback_msg* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lwip_callback_msg*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,struct lwip_callback_msg*,int) ;

PTCP_PCB
FUNC_5(PCONNECTION_ENDPOINT VAR_4, const u8_t VAR_5)
{
    struct lwip_callback_msg *VAR_6;
    PTCP_PCB VAR_7;

    VAR_6 = FUNC_0(&VAR_2);
    if (VAR_6)
    {
        FUNC_2(&VAR_6->Event, VAR_3, VAR_0);
        VAR_6->Input.Listen.Connection = VAR_4;
        VAR_6->Input.Listen.Backlog = VAR_5;

        FUNC_4(VAR_1, VAR_6, 1);

        if (FUNC_3(&VAR_6->Event))
            VAR_7 = VAR_6->Output.Listen.NewPcb;
        else
            VAR_7 = ((void*)0);

        FUNC_1(&VAR_2, VAR_6);

        return VAR_7;
    }

    return ((void*)0);
}
