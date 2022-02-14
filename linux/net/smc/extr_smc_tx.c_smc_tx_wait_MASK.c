
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_shutdown; scalar_t__ sk_err; TYPE_3__* sk_socket; } ;
struct TYPE_4__ {scalar_t__ peer_done_writing; } ;
struct TYPE_5__ {TYPE_1__ conn_state_flags; } ;
struct smc_connection {int urg_tx_pend; int sndbuf_space; TYPE_2__ local_tx_ctrl; } ;
struct smc_sock {struct sock sk; struct smc_connection conn; } ;
struct TYPE_6__ {int flags; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,struct sock*) ;
 int FUNC_7 (int ,struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,long*,int,int *) ;
 scalar_t__ FUNC_10 (struct smc_connection*) ;
 int FUNC_11 (long) ;
 long FUNC_12 (struct sock*,int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_13(struct smc_sock *VAR_10, int VAR_11)
{
 FUNC_0(VAR_8, VAR_9);
 struct smc_connection *VAR_12 = &VAR_10->conn;
 struct sock *VAR_13 = &VAR_10->sk;
 long VAR_14;
 int VAR_15 = 0;


 VAR_14 = FUNC_12(VAR_13, VAR_11 & VAR_3);
 FUNC_1(FUNC_8(VAR_13), &VAR_8);
 while (1) {
  FUNC_7(VAR_5, VAR_13);
  if (VAR_13->sk_err ||
      (VAR_13->sk_shutdown & VAR_4) ||
      VAR_12->local_tx_ctrl.conn_state_flags.peer_done_writing) {
   VAR_15 = -VAR_2;
   break;
  }
  if (FUNC_10(VAR_12)) {
   VAR_15 = -VAR_1;
   break;
  }
  if (!VAR_14) {

   FUNC_4(VAR_6, &VAR_13->sk_socket->flags);
   VAR_15 = -VAR_0;
   break;
  }
  if (FUNC_5(VAR_7)) {
   VAR_15 = FUNC_11(VAR_14);
   break;
  }
  FUNC_6(VAR_5, VAR_13);
  if (FUNC_2(&VAR_12->sndbuf_space) && !VAR_12->urg_tx_pend)
   break;
  FUNC_4(VAR_6, &VAR_13->sk_socket->flags);
  FUNC_9(VAR_13, &VAR_14,
         VAR_13->sk_err ||
         (VAR_13->sk_shutdown & VAR_4) ||
         FUNC_10(VAR_12) ||
         (FUNC_2(&VAR_12->sndbuf_space) &&
          !VAR_12->urg_tx_pend),
         &VAR_8);
 }
 FUNC_3(FUNC_8(VAR_13), &VAR_8);
 return VAR_15;
}
