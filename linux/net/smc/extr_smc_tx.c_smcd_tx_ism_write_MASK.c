
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct smc_ism_position {int signal; scalar_t__ offset; int index; int token; } ;
struct TYPE_5__ {int peer_conn_abort; } ;
struct TYPE_6__ {TYPE_2__ conn_state_flags; } ;
struct smc_connection {TYPE_3__ local_tx_ctrl; TYPE_1__* lgr; scalar_t__ tx_off; int peer_rmbe_idx; int peer_token; } ;
typedef int pos ;
struct TYPE_4__ {int smcd; } ;


 int FUNC_0 (struct smc_ism_position*,int ,int) ;
 int FUNC_1 (int ,struct smc_ism_position*,void*,size_t) ;

int FUNC_2(struct smc_connection *VAR_0, void *VAR_1, size_t VAR_2,
        u32 VAR_3, int VAR_4)
{
 struct smc_ism_position VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.token = VAR_0->peer_token;
 VAR_5.index = VAR_0->peer_rmbe_idx;
 VAR_5.offset = VAR_0->tx_off + VAR_3;
 VAR_5.signal = VAR_4;
 VAR_6 = FUNC_1(VAR_0->lgr->smcd, &VAR_5, VAR_1, VAR_2);
 if (VAR_6)
  VAR_0->local_tx_ctrl.conn_state_flags.peer_conn_abort = 1;
 return VAR_6;
}
