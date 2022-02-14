
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_chan {scalar_t__ state; scalar_t__ mode; TYPE_1__* ops; int tx_credits; scalar_t__ conf_state; } ;
struct TYPE_2__ {int (* ready ) (struct l2cap_chan*) ;int (* suspend ) (struct l2cap_chan*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_2)
{




 if (VAR_2->state == VAR_0)
  return;


 VAR_2->conf_state = 0;
 FUNC_0(VAR_2);

 if (VAR_2->mode == VAR_1 && !VAR_2->tx_credits)
  VAR_2->ops->suspend(VAR_2);

 VAR_2->state = VAR_0;

 VAR_2->ops->ready(VAR_2);
}
