
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ peer_conn_closed; scalar_t__ peer_conn_abort; } ;
struct TYPE_4__ {TYPE_1__ conn_state_flags; } ;
struct smc_connection {TYPE_2__ local_tx_ctrl; } ;



__attribute__((used)) static inline bool FUNC_0(struct smc_connection *VAR_0)
{
 return VAR_0->local_tx_ctrl.conn_state_flags.peer_conn_abort ||
        VAR_0->local_tx_ctrl.conn_state_flags.peer_conn_closed;
}
