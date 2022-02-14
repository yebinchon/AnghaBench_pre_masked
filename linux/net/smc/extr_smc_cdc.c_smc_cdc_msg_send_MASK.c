
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union smc_host_cursor {int dummy; } smc_host_cursor ;
struct smc_wr_tx_pend_priv {int dummy; } ;
struct smc_wr_buf {int dummy; } ;
struct smc_link {int dummy; } ;
struct TYPE_6__ {scalar_t__ cons_curs_upd_req; } ;
struct TYPE_7__ {TYPE_2__ prod_flags; } ;
struct TYPE_5__ {scalar_t__ seqno; } ;
struct smc_connection {TYPE_3__ local_rx_ctrl; int rx_curs_confirmed; scalar_t__ tx_cdc_seq; TYPE_1__ local_tx_ctrl; TYPE_4__* lgr; } ;
struct smc_cdc_tx_pend {int dummy; } ;
struct smc_cdc_msg {int dummy; } ;
struct TYPE_8__ {struct smc_link* lnk; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct smc_connection*,struct smc_cdc_tx_pend*) ;
 int FUNC_1 (int *,union smc_host_cursor*,struct smc_connection*) ;
 int FUNC_2 (struct smc_cdc_msg*,struct smc_connection*,union smc_host_cursor*) ;
 int FUNC_3 (struct smc_link*,struct smc_wr_tx_pend_priv*) ;

int FUNC_4(struct smc_connection *VAR_1,
       struct smc_wr_buf *VAR_2,
       struct smc_cdc_tx_pend *VAR_3)
{
 union smc_host_cursor VAR_4;
 struct smc_link *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_1->lgr->lnk[VAR_0];

 FUNC_0(VAR_1, VAR_3);

 VAR_1->tx_cdc_seq++;
 VAR_1->local_tx_ctrl.seqno = VAR_1->tx_cdc_seq;
 FUNC_2((struct smc_cdc_msg *)VAR_2, VAR_1, &VAR_4);
 VAR_6 = FUNC_3(VAR_5, (struct smc_wr_tx_pend_priv *)VAR_3);
 if (!VAR_6) {
  FUNC_1(&VAR_1->rx_curs_confirmed, &VAR_4, VAR_1);
  VAR_1->local_rx_ctrl.prod_flags.cons_curs_upd_req = 0;
 }

 return VAR_6;
}
