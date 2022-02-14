
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int peer_conn_abort; int peer_conn_closed; } ;
struct TYPE_4__ {TYPE_1__ conn_state_flags; } ;
struct smc_connection {TYPE_2__ local_tx_ctrl; int bytes_to_rcv; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct smc_connection*) ;

__attribute__((used)) static int FUNC_2(struct smc_connection *VAR_0)
{
 if (FUNC_0(&VAR_0->bytes_to_rcv))
  VAR_0->local_tx_ctrl.conn_state_flags.peer_conn_abort = 1;
 else
  VAR_0->local_tx_ctrl.conn_state_flags.peer_conn_closed = 1;

 return FUNC_1(VAR_0);
}
