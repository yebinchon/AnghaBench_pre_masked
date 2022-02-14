
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smcd_cdc_msg {int dummy; } ;
struct TYPE_2__ {int peer_rmbe_idx; int peer_rmbe_size; int tx_off; int peer_rmbe_space; int peer_token; } ;
struct smc_sock {TYPE_1__ conn; } ;
struct smc_clc_msg_accept_confirm {int dmbe_idx; int token; int dmbe_size; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct smc_sock *VAR_0,
         struct smc_clc_msg_accept_confirm *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->dmbe_size);

 VAR_0->conn.peer_rmbe_idx = VAR_1->dmbe_idx;
 VAR_0->conn.peer_token = VAR_1->token;

 VAR_0->conn.peer_rmbe_size = VAR_2 - sizeof(struct smcd_cdc_msg);
 FUNC_0(&VAR_0->conn.peer_rmbe_space, VAR_0->conn.peer_rmbe_size);
 VAR_0->conn.tx_off = VAR_2 * VAR_0->conn.peer_rmbe_idx;
}
