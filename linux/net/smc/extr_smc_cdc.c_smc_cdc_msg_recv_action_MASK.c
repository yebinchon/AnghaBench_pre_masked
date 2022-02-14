
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef union smc_host_cursor {int dummy; } smc_host_cursor ;
struct TYPE_23__ {int sk_shutdown; int sk_err; int (* sk_write_space ) (TYPE_8__*) ;int (* sk_data_ready ) (TYPE_8__*) ;} ;
struct TYPE_19__ {int peer_conn_abort; } ;
struct TYPE_20__ {TYPE_4__ conn_state_flags; } ;
struct TYPE_18__ {scalar_t__ peer_conn_abort; } ;
struct TYPE_17__ {scalar_t__ urg_data_pending; scalar_t__ cons_curs_upd_req; scalar_t__ write_blocked; scalar_t__ urg_data_present; } ;
struct TYPE_15__ {TYPE_3__ conn_state_flags; TYPE_2__ prod_flags; int prod; int cons; } ;
struct smc_connection {scalar_t__ peer_rmbe_size; int urg_tx_pend; int close_work; TYPE_5__ local_tx_ctrl; TYPE_14__ local_rx_ctrl; int peer_rmbe_space; int urg_state; int bytes_to_rcv; TYPE_1__* rmb_desc; } ;
struct smc_sock {TYPE_8__ sk; TYPE_7__* clcsock; struct smc_connection conn; } ;
struct smc_cdc_msg {int dummy; } ;
struct TYPE_22__ {TYPE_6__* sk; } ;
struct TYPE_21__ {int sk_shutdown; } ;
struct TYPE_16__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smc_sock*,int*) ;
 int FUNC_4 (TYPE_14__*,struct smc_cdc_msg*,struct smc_connection*) ;
 scalar_t__ FUNC_5 (struct smc_connection*) ;
 int FUNC_6 (union smc_host_cursor*,int *,struct smc_connection*) ;
 int FUNC_7 (scalar_t__,union smc_host_cursor*,int *) ;
 scalar_t__ FUNC_8 (struct smc_connection*) ;
 int FUNC_9 (struct smc_connection*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_8__*) ;
 int FUNC_13 (TYPE_8__*) ;
 int FUNC_14 (TYPE_8__*,int ) ;
 int FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (TYPE_8__*) ;
 int FUNC_17 (TYPE_8__*) ;

__attribute__((used)) static void FUNC_18(struct smc_sock *VAR_4,
        struct smc_cdc_msg *VAR_5)
{
 union smc_host_cursor VAR_6, VAR_7;
 struct smc_connection *VAR_8 = &VAR_4->conn;
 int VAR_9, VAR_10;

 FUNC_6(&VAR_7, &VAR_8->local_rx_ctrl.prod, VAR_8);
 FUNC_6(&VAR_6, &VAR_8->local_rx_ctrl.cons, VAR_8);
 FUNC_4(&VAR_8->local_rx_ctrl, VAR_5, VAR_8);

 VAR_9 = FUNC_7(VAR_8->peer_rmbe_size, &VAR_6,
      &VAR_8->local_rx_ctrl.cons);
 if (VAR_9) {



  FUNC_11();
  FUNC_0(VAR_9, &VAR_8->peer_rmbe_space);

  FUNC_10();
 }

 VAR_10 = FUNC_7(VAR_8->rmb_desc->len, &VAR_7,
      &VAR_8->local_rx_ctrl.prod);
 if (VAR_10) {
  if (VAR_8->local_rx_ctrl.prod_flags.urg_data_present)
   FUNC_3(VAR_4, &VAR_10);

  FUNC_11();
  FUNC_0(VAR_10, &VAR_8->bytes_to_rcv);

  FUNC_10();
  VAR_4->sk.sk_data_ready(&VAR_4->sk);
 } else {
  if (VAR_8->local_rx_ctrl.prod_flags.write_blocked)
   VAR_4->sk.sk_data_ready(&VAR_4->sk);
  if (VAR_8->local_rx_ctrl.prod_flags.urg_data_pending)
   VAR_8->urg_state = VAR_2;
 }


 if ((VAR_9 && FUNC_8(VAR_8)) ||
     VAR_8->local_rx_ctrl.prod_flags.cons_curs_upd_req ||
     VAR_8->local_rx_ctrl.prod_flags.urg_data_pending)
  FUNC_9(VAR_8);

 if (VAR_9 && VAR_8->urg_tx_pend &&
     FUNC_1(&VAR_8->peer_rmbe_space) == VAR_8->peer_rmbe_size) {

  VAR_8->urg_tx_pend = 0;
  VAR_4->sk.sk_write_space(&VAR_4->sk);
 }

 if (VAR_8->local_rx_ctrl.conn_state_flags.peer_conn_abort) {
  VAR_4->sk.sk_err = VAR_0;
  VAR_8->local_tx_ctrl.conn_state_flags.peer_conn_abort = 1;
 }
 if (FUNC_5(VAR_8)) {
  VAR_4->sk.sk_shutdown |= VAR_1;
  if (VAR_4->clcsock && VAR_4->clcsock->sk)
   VAR_4->clcsock->sk->sk_shutdown |= VAR_1;
  FUNC_14(&VAR_4->sk, VAR_3);
  FUNC_12(&VAR_4->sk);
  if (!FUNC_2(&VAR_8->close_work))
   FUNC_13(&VAR_4->sk);
 }
}
