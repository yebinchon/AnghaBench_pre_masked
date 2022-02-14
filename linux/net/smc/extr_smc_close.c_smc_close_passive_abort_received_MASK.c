
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct smc_cdc_conn_state_flags {int peer_done_writing; } ;
struct TYPE_3__ {struct smc_cdc_conn_state_flags conn_state_flags; } ;
struct TYPE_4__ {TYPE_1__ local_tx_ctrl; } ;
struct smc_sock {TYPE_2__ conn; struct sock sk; } ;






 void* VAR_0 ;






 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct smc_sock *VAR_1)
{
 struct smc_cdc_conn_state_flags *VAR_2 =
  &VAR_1->conn.local_tx_ctrl.conn_state_flags;
 struct sock *VAR_3 = &VAR_1->sk;

 switch (VAR_3->sk_state) {
 case 133:
 case 137:
 case 136:
  VAR_3->sk_state = 128;
  FUNC_1(VAR_3);
  break;
 case 134:
  VAR_3->sk_state = 128;
  break;
 case 131:
 case 130:
  if (VAR_2->peer_done_writing &&
      !FUNC_0(&VAR_1->conn))

   VAR_3->sk_state = 128;
  else
   VAR_3->sk_state = VAR_0;
  FUNC_1(VAR_3);
  break;
 case 135:
 case 129:
  VAR_3->sk_state = VAR_0;
  FUNC_1(VAR_3);
  break;
 case 132:
  VAR_3->sk_state = VAR_0;
  break;
 case 128:

  break;
 }
}
