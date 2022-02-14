
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {void (* sk_state_change ) (struct sock*) ;int sk_state; int sk_callback_lock; struct rds_conn_path* sk_user_data; } ;
struct rds_tcp_connection {void (* t_orig_state_change ) (struct sock*) ;int t_sock; } ;
struct rds_conn_path {TYPE_1__* cp_conn; struct rds_tcp_connection* cp_transport_data; } ;
struct TYPE_2__ {int c_faddr; int c_laddr; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct rds_conn_path*,int) ;
 int FUNC_2 (struct rds_conn_path*,int ,int ) ;
 int FUNC_3 (struct rds_conn_path*,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct sock *VAR_2)
{
 void (*VAR_3)(struct sock *VAR_4);
 struct rds_conn_path *VAR_5;
 struct rds_tcp_connection *VAR_6;

 FUNC_5(&VAR_2->sk_callback_lock);
 VAR_5 = VAR_2->sk_user_data;
 if (!VAR_5) {
  VAR_3 = VAR_2->sk_state_change;
  goto out;
 }
 VAR_6 = VAR_5->cp_transport_data;
 VAR_3 = VAR_6->t_orig_state_change;

 FUNC_4("sock %p state_change to %d\n", VAR_6->t_sock, VAR_2->sk_state);

 switch (VAR_2->sk_state) {

 case 128:
 case 129:
  break;
 case 130:






  if (FUNC_0(&VAR_5->cp_conn->c_laddr,
     &VAR_5->cp_conn->c_faddr) >= 0 &&
      FUNC_2(VAR_5, VAR_0,
          VAR_1)) {
   FUNC_1(VAR_5, 0);
  } else {
   FUNC_3(VAR_5, VAR_0);
  }
  break;
 case 131:
 case 132:
  FUNC_1(VAR_5, 0);
 default:
  break;
 }
out:
 FUNC_6(&VAR_2->sk_callback_lock);
 VAR_3(VAR_2);
}
