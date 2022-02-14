
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int * ops; } ;
struct sock {int sk_protocol; int sk_destruct; } ;
struct rds_sock {int rs_item; int * rs_conn; scalar_t__ rs_tos; scalar_t__ rs_rx_traces; int rs_rdma_keys; int rs_rdma_lock; int rs_zcookie_queue; int rs_cong_list; int rs_notify_queue; int rs_recv_queue; int rs_send_queue; int rs_recv_lock; int rs_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct rds_sock* FUNC_3 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct socket*,struct sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_6, struct sock *VAR_7, int VAR_8)
{
 struct rds_sock *VAR_9;

 FUNC_5(VAR_6, VAR_7);
 VAR_6->ops = &VAR_1;
 VAR_7->sk_protocol = VAR_8;
 VAR_7->sk_destruct = VAR_3;

 VAR_9 = FUNC_3(VAR_7);
 FUNC_7(&VAR_9->rs_lock);
 FUNC_4(&VAR_9->rs_recv_lock);
 FUNC_0(&VAR_9->rs_send_queue);
 FUNC_0(&VAR_9->rs_recv_queue);
 FUNC_0(&VAR_9->rs_notify_queue);
 FUNC_0(&VAR_9->rs_cong_list);
 FUNC_2(&VAR_9->rs_zcookie_queue);
 FUNC_7(&VAR_9->rs_rdma_lock);
 VAR_9->rs_rdma_keys = VAR_0;
 VAR_9->rs_rx_traces = 0;
 VAR_9->rs_tos = 0;
 VAR_9->rs_conn = ((void*)0);

 FUNC_6(&VAR_5);
 FUNC_1(&VAR_9->rs_item, &VAR_4);
 VAR_2++;
 FUNC_8(&VAR_5);

 return 0;
}
