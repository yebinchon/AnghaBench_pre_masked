
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union smc_host_cursor {int dummy; } smc_host_cursor ;
struct TYPE_7__ {scalar_t__ write_blocked; scalar_t__ cons_curs_upd_req; } ;
struct TYPE_8__ {TYPE_3__ prod_flags; int prod; } ;
struct TYPE_5__ {int cons; } ;
struct smc_connection {int rmbe_update_limit; TYPE_4__ local_rx_ctrl; int bytes_to_rcv; int tx_work; scalar_t__ alert_token_local; TYPE_2__* rmb_desc; int rx_curs_confirmed; TYPE_1__ local_tx_ctrl; } ;
struct TYPE_6__ {int len; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct smc_connection*) ;
 int FUNC_3 (union smc_host_cursor*,int *,struct smc_connection*) ;
 int FUNC_4 (int,union smc_host_cursor*,union smc_host_cursor*) ;
 int FUNC_5 (int,union smc_host_cursor*,union smc_host_cursor*) ;

void FUNC_6(struct smc_connection *VAR_1, bool VAR_2)
{
 union smc_host_cursor VAR_3, VAR_4, VAR_5;
 int VAR_6 = VAR_1->rmb_desc->len;
 int VAR_7;

 FUNC_3(&VAR_4, &VAR_1->local_tx_ctrl.cons, VAR_1);
 FUNC_3(&VAR_3, &VAR_1->rx_curs_confirmed, VAR_1);
 VAR_7 = FUNC_4(VAR_1->rmb_desc->len, &VAR_3, &VAR_4);
 if (VAR_7 > VAR_1->rmbe_update_limit) {
  FUNC_3(&VAR_5, &VAR_1->local_rx_ctrl.prod, VAR_1);
  VAR_6 = VAR_1->rmb_desc->len -
         FUNC_5(VAR_1->rmb_desc->len,
        &VAR_3, &VAR_5);
 }

 if (VAR_1->local_rx_ctrl.prod_flags.cons_curs_upd_req ||
     VAR_2 ||
     ((VAR_7 > VAR_1->rmbe_update_limit) &&
      ((VAR_6 <= (VAR_1->rmb_desc->len / 2)) ||
       VAR_1->local_rx_ctrl.prod_flags.write_blocked))) {
  if ((FUNC_2(VAR_1) < 0) &&
      VAR_1->alert_token_local) {
   FUNC_1(&VAR_1->tx_work,
           VAR_0);
   return;
  }
 }
 if (VAR_1->local_rx_ctrl.prod_flags.write_blocked &&
     !FUNC_0(&VAR_1->bytes_to_rcv))
  VAR_1->local_rx_ctrl.prod_flags.write_blocked = 0;
}
