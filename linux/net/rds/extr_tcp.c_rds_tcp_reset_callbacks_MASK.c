
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int sk; } ;
struct rds_tcp_connection {int t_tinc_hdr_rem; scalar_t__ t_tinc_data_rem; TYPE_1__* t_tinc; struct socket* t_sock; } ;
struct rds_header {int dummy; } ;
struct rds_conn_path {int cp_recv_w; int cp_send_w; int cp_flags; int cp_waitq; int cp_state; struct rds_tcp_connection* cp_transport_data; } ;
struct TYPE_2__ {int ti_inc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rds_conn_path*) ;
 int FUNC_5 (struct socket*,struct rds_tcp_connection*) ;
 int FUNC_6 (struct socket*,struct rds_conn_path*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int) ;

void FUNC_11(struct socket *VAR_2,
        struct rds_conn_path *VAR_3)
{
 struct rds_tcp_connection *VAR_4 = VAR_3->cp_transport_data;
 struct socket *VAR_5 = VAR_4->t_sock;

 if (!VAR_5)
  goto newsock;
 FUNC_0(&VAR_3->cp_state, VAR_0);
 FUNC_10(VAR_3->cp_waitq, !FUNC_9(VAR_1, &VAR_3->cp_flags));
 FUNC_2(VAR_5->sk);

 FUNC_1(&VAR_3->cp_send_w);
 FUNC_1(&VAR_3->cp_recv_w);
 if (VAR_4->t_tinc) {
  FUNC_3(&VAR_4->t_tinc->ti_inc);
  VAR_4->t_tinc = ((void*)0);
 }
 VAR_4->t_tinc_hdr_rem = sizeof(struct rds_header);
 VAR_4->t_tinc_data_rem = 0;
 FUNC_5(VAR_5, VAR_4);
 FUNC_7(VAR_5->sk);
 FUNC_8(VAR_5);
newsock:
 FUNC_4(VAR_3);
 FUNC_2(VAR_2->sk);
 FUNC_6(VAR_2, VAR_3);
 FUNC_7(VAR_2->sk);
}
