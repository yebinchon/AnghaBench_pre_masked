
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int token; } ;
struct TYPE_4__ {int peer_rmbe_idx; int peer_rmbe_size; int tx_off; int peer_rmbe_space; TYPE_1__ local_tx_ctrl; } ;
struct smc_sock {TYPE_2__ conn; } ;
struct smc_clc_msg_accept_confirm {int rmbe_idx; int rmbe_alert_token; int rmbe_size; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct smc_sock *VAR_0,
         struct smc_clc_msg_accept_confirm *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1->rmbe_size);

 VAR_0->conn.peer_rmbe_idx = VAR_1->rmbe_idx;
 VAR_0->conn.local_tx_ctrl.token = FUNC_1(VAR_1->rmbe_alert_token);
 VAR_0->conn.peer_rmbe_size = VAR_2;
 FUNC_0(&VAR_0->conn.peer_rmbe_space, VAR_0->conn.peer_rmbe_size);
 VAR_0->conn.tx_off = VAR_2 * (VAR_0->conn.peer_rmbe_idx - 1);
}
