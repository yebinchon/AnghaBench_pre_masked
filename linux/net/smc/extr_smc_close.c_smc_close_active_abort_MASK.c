
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_state; int (* sk_state_change ) (struct sock*) ;void* sk_err; } ;
struct smc_cdc_conn_state_flags {int peer_conn_closed; } ;
struct TYPE_5__ {struct smc_cdc_conn_state_flags conn_state_flags; } ;
struct TYPE_8__ {int tx_work; TYPE_1__ local_tx_ctrl; } ;
struct smc_sock {TYPE_4__ conn; TYPE_2__* clcsock; struct sock sk; } ;
struct TYPE_7__ {int (* sk_state_change ) (TYPE_3__*) ;void* sk_err; } ;
struct TYPE_6__ {TYPE_3__* sk; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct smc_sock *VAR_2)
{
 struct sock *VAR_3 = &VAR_2->sk;

 struct smc_cdc_conn_state_flags *VAR_4 =
  &VAR_2->conn.local_tx_ctrl.conn_state_flags;

 if (VAR_3->sk_state != 133 && VAR_2->clcsock && VAR_2->clcsock->sk) {
  VAR_3->sk_err = VAR_0;
  if (VAR_2->clcsock && VAR_2->clcsock->sk) {
   VAR_2->clcsock->sk->sk_err = VAR_0;
   VAR_2->clcsock->sk->sk_state_change(VAR_2->clcsock->sk);
  }
 }
 switch (VAR_3->sk_state) {
 case 138:
  VAR_3->sk_state = 132;
  FUNC_2(VAR_3);
  FUNC_0(&VAR_2->conn.tx_work);
  FUNC_1(VAR_3);
  FUNC_4(VAR_3);
  break;
 case 137:
 case 136:
  if (!FUNC_3(&VAR_2->conn))
   VAR_3->sk_state = 132;
  else
   VAR_3->sk_state = 134;
  FUNC_2(VAR_3);
  FUNC_0(&VAR_2->conn.tx_work);
  FUNC_1(VAR_3);
  break;
 case 131:
 case 130:
  if (!VAR_4->peer_conn_closed) {

   VAR_3->sk_state = 132;
  } else {
   VAR_3->sk_state = 134;
  }
  FUNC_4(VAR_3);
  break;
 case 128:
 case 135:
  VAR_3->sk_state = 134;
  break;
 case 129:
  FUNC_4(VAR_3);
  break;
 case 133:
 case 132:
 case 134:
  break;
 }

 FUNC_5(VAR_3, VAR_1);
 VAR_3->sk_state_change(VAR_3);
}
