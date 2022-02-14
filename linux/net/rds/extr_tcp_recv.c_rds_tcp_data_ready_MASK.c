
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {void (* sk_data_ready ) (struct sock*) ;int sk_callback_lock; struct rds_conn_path* sk_user_data; } ;
struct rds_tcp_connection {void (* t_orig_data_ready ) (struct sock*) ;} ;
struct rds_conn_path {int cp_recv_w; int cp_conn; struct rds_tcp_connection* cp_transport_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rds_conn_path*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (char*,struct sock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;

void FUNC_9(struct sock *VAR_4)
{
 void (*VAR_5)(struct sock *VAR_6);
 struct rds_conn_path *VAR_7;
 struct rds_tcp_connection *VAR_8;

 FUNC_6("data ready sk %p\n", VAR_4);

 FUNC_7(&VAR_4->sk_callback_lock);
 VAR_7 = VAR_4->sk_user_data;
 if (!VAR_7) {
  VAR_5 = VAR_4->sk_data_ready;
  goto out;
 }

 VAR_8 = VAR_7->cp_transport_data;
 VAR_5 = VAR_8->t_orig_data_ready;
 FUNC_5(VAR_3);

 if (FUNC_4(VAR_7, VAR_1) == -VAR_0) {
  FUNC_1();
  if (!FUNC_3(VAR_7->cp_conn))
   FUNC_0(VAR_2, &VAR_7->cp_recv_w, 0);
  FUNC_2();
 }
out:
 FUNC_8(&VAR_4->sk_callback_lock);
 VAR_5(VAR_4);
}
