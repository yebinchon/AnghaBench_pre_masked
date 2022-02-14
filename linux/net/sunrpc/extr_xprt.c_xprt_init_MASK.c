
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int xprt_net; int backlog; int sending; int pending; int binding; scalar_t__ bind_index; int cwnd; int last_used; int xprt_switch; int bc_pa_list; int bc_pa_lock; int xmit_queue; int recv_queue; int free; int queue_lock; int reserve_lock; int transport_lock; int kref; } ;
struct net {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_7(struct rpc_xprt *VAR_3, struct net *VAR_4)
{
 FUNC_2(&VAR_3->kref);

 FUNC_5(&VAR_3->transport_lock);
 FUNC_5(&VAR_3->reserve_lock);
 FUNC_5(&VAR_3->queue_lock);

 FUNC_0(&VAR_3->free);
 VAR_3->recv_queue = VAR_0;
 FUNC_0(&VAR_3->xmit_queue);




 FUNC_0(&VAR_3->xprt_switch);

 VAR_3->last_used = VAR_2;
 VAR_3->cwnd = VAR_1;
 VAR_3->bind_index = 0;

 FUNC_4(&VAR_3->binding, "xprt_binding");
 FUNC_4(&VAR_3->pending, "xprt_pending");
 FUNC_4(&VAR_3->sending, "xprt_sending");
 FUNC_3(&VAR_3->backlog, "xprt_backlog");

 FUNC_6(VAR_3);

 VAR_3->xprt_net = FUNC_1(VAR_4);
}
