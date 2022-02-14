
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {long sk_lingertime; int sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct smc_cdc_conn_state_flags {int peer_done_writing; } ;
struct TYPE_5__ {struct smc_cdc_conn_state_flags conn_state_flags; } ;
struct smc_connection {int tx_work; TYPE_1__ local_tx_ctrl; } ;
struct smc_sock {int tcp_listen_work; TYPE_3__* clcsock; struct sock sk; struct smc_connection conn; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {TYPE_2__* sk; } ;
struct TYPE_6__ {int (* sk_data_ready ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;







 long VAR_2 ;





 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_4__* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct smc_connection*) ;
 int FUNC_6 (struct smc_connection*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct smc_connection*) ;
 int FUNC_9 (struct smc_connection*) ;
 int FUNC_10 (struct smc_sock*,long) ;
 scalar_t__ FUNC_11 (struct sock*,int ) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct sock*) ;

int FUNC_16(struct smc_sock *VAR_5)
{
 struct smc_cdc_conn_state_flags *VAR_6 =
  &VAR_5->conn.local_tx_ctrl.conn_state_flags;
 struct smc_connection *VAR_7 = &VAR_5->conn;
 struct sock *VAR_8 = &VAR_5->sk;
 int VAR_9;
 long VAR_10;
 int VAR_11 = 0;

 VAR_10 = VAR_4->flags & VAR_0 ?
    0 : FUNC_11(VAR_8, VAR_3) ?
        VAR_8->sk_lingertime : VAR_2;

 VAR_9 = VAR_8->sk_state;
again:
 switch (VAR_8->sk_state) {
 case 134:
  VAR_8->sk_state = 135;
  break;
 case 133:
  VAR_8->sk_state = 135;
  VAR_8->sk_state_change(VAR_8);
  if (VAR_5->clcsock && VAR_5->clcsock->sk) {
   VAR_11 = FUNC_2(VAR_5->clcsock, VAR_1);

   VAR_5->clcsock->sk->sk_data_ready(VAR_5->clcsock->sk);
  }
  FUNC_7(VAR_8);
  FUNC_4(VAR_8);
  FUNC_1(&VAR_5->tcp_listen_work);
  FUNC_3(VAR_8);
  break;
 case 139:
  FUNC_10(VAR_5, VAR_10);
  FUNC_4(VAR_8);
  FUNC_0(&VAR_7->tx_work);
  FUNC_3(VAR_8);
  if (VAR_8->sk_state == 139) {

   VAR_11 = FUNC_8(VAR_7);
   if (VAR_11)
    break;
   VAR_8->sk_state = 131;
  } else {

   goto again;
  }
  break;
 case 136:

  if (VAR_6->peer_done_writing &&
      !FUNC_9(VAR_7)) {

   VAR_11 = FUNC_8(VAR_7);
   if (VAR_11)
    break;
  }
  VAR_8->sk_state = 135;
  break;
 case 138:
 case 137:
  if (!FUNC_5(VAR_7))
   FUNC_10(VAR_5, VAR_10);
  FUNC_4(VAR_8);
  FUNC_0(&VAR_7->tx_work);
  FUNC_3(VAR_8);
  if (VAR_8->sk_state != 138 &&
      VAR_8->sk_state != 137)
   goto again;

  VAR_11 = FUNC_8(VAR_7);
  if (VAR_11)
   break;
  if (FUNC_5(VAR_7)) {

   VAR_8->sk_state = 135;
   FUNC_12(VAR_8);
  } else {

   VAR_8->sk_state = 129;
  }
  break;
 case 131:
 case 130:
  if (VAR_6->peer_done_writing &&
      !FUNC_9(VAR_7)) {

   VAR_11 = FUNC_8(VAR_7);
   if (VAR_11)
    break;
  }

  break;
 case 129:

  break;
 case 128:
  FUNC_6(VAR_7);
  VAR_8->sk_state = 135;
  break;
 case 132:
 case 135:

  break;
 }

 if (VAR_9 != VAR_8->sk_state)
  VAR_8->sk_state_change(VAR_8);
 return VAR_11;
}
