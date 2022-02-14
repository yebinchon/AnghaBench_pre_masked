
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union smc_host_cursor {int dummy; } smc_host_cursor ;
struct TYPE_4__ {int type; } ;
struct smc_host_cdc_msg {int conn_state_flags; int prod_flags; int cons; int prod; int token; int seqno; int len; TYPE_2__ common; } ;
struct smc_connection {struct smc_host_cdc_msg local_tx_ctrl; } ;
struct TYPE_3__ {int type; } ;
struct smc_cdc_msg {int conn_state_flags; int prod_flags; int cons; int prod; int token; int seqno; int len; TYPE_1__ common; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,union smc_host_cursor*,struct smc_connection*) ;

__attribute__((used)) static inline void FUNC_3(struct smc_cdc_msg *VAR_0,
           struct smc_connection *VAR_1,
           union smc_host_cursor *VAR_2)
{
 struct smc_host_cdc_msg *VAR_3 = &VAR_1->local_tx_ctrl;

 VAR_0->common.type = VAR_3->common.type;
 VAR_0->len = VAR_3->len;
 VAR_0->seqno = FUNC_1(VAR_3->seqno);
 VAR_0->token = FUNC_0(VAR_3->token);
 FUNC_2(&VAR_0->prod, &VAR_3->prod, VAR_2, VAR_1);
 FUNC_2(&VAR_0->cons, &VAR_3->cons, VAR_2, VAR_1);
 VAR_0->prod_flags = VAR_3->prod_flags;
 VAR_0->conn_state_flags = VAR_3->conn_state_flags;
}
