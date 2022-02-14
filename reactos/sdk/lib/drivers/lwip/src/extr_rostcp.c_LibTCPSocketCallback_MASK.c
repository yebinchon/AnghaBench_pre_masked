
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ NewPcb; } ;
struct TYPE_7__ {TYPE_2__ Socket; } ;
struct TYPE_8__ {int Arg; } ;
struct TYPE_5__ {TYPE_4__ Socket; } ;
struct lwip_callback_msg {int Event; TYPE_3__ Output; TYPE_1__ Input; } ;


 int FUNC_0 (struct lwip_callback_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static
void
FUNC_5(void *VAR_3)
{
    struct lwip_callback_msg *VAR_4 = VAR_3;

    FUNC_0(VAR_4);

    VAR_4->Output.Socket.NewPcb = FUNC_4();

    if (VAR_4->Output.Socket.NewPcb)
    {
        FUNC_2(VAR_4->Output.Socket.NewPcb, VAR_4->Input.Socket.Arg);
        FUNC_3(VAR_4->Output.Socket.NewPcb, VAR_2);
    }

    FUNC_1(&VAR_4->Event, VAR_1, VAR_0);
}
