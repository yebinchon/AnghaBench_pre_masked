
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {void (* sk_write_space ) (struct sock*) ;int sk_sndbuf; TYPE_1__* sk_socket; int sk_callback_lock; int sk_wmem_alloc; struct rds_conn_path* sk_user_data; } ;
struct rds_tcp_connection {void (* t_orig_write_space ) (struct sock*) ;struct rds_tcp_connection* t_last_seen_una; } ;
struct rds_conn_path {int cp_send_w; int cp_conn; struct rds_tcp_connection* cp_transport_data; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rds_conn_path*,struct rds_tcp_connection*,int ) ;
 int VAR_1 ;
 struct rds_tcp_connection* FUNC_5 (struct rds_tcp_connection*) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (char*,struct rds_tcp_connection*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_3 ;
 int FUNC_11 (int ,int *) ;

void FUNC_12(struct sock *VAR_4)
{
 void (*VAR_5)(struct sock *VAR_6);
 struct rds_conn_path *VAR_7;
 struct rds_tcp_connection *VAR_8;

 FUNC_8(&VAR_4->sk_callback_lock);
 VAR_7 = VAR_4->sk_user_data;
 if (!VAR_7) {
  VAR_5 = VAR_4->sk_write_space;
  goto out;
 }

 VAR_8 = VAR_7->cp_transport_data;
 FUNC_7("write_space for tc %p\n", VAR_8);
 VAR_5 = VAR_8->t_orig_write_space;
 FUNC_6(VAR_3);

 FUNC_7("tcp una %u\n", FUNC_5(VAR_8));
 VAR_8->t_last_seen_una = FUNC_5(VAR_8);
 FUNC_4(VAR_7, FUNC_5(VAR_8), VAR_1);

 FUNC_1();
 if ((FUNC_10(&VAR_4->sk_wmem_alloc) << 1) <= VAR_4->sk_sndbuf &&
     !FUNC_3(VAR_7->cp_conn))
  FUNC_0(VAR_2, &VAR_7->cp_send_w, 0);
 FUNC_2();

out:
 FUNC_9(&VAR_4->sk_callback_lock);
 VAR_5(VAR_4);

 if (VAR_4->sk_socket)
  FUNC_11(VAR_0, &VAR_4->sk_socket->flags);
}
