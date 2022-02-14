
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ sk_kern_sock; } ;
struct rxrpc_sock {TYPE_1__ sk; } ;
struct rxrpc_net {int nr_calls; } ;
struct rxrpc_call {unsigned int debug_id; int tx_total_len; int next_rx_timo; int next_req_timo; int tx_winsize; int rx_expect_next; int cong_cwnd; void* rxtx_buffer; struct rxrpc_net* rxnet; scalar_t__ cong_ssthresh; int rx_winsize; int sock_node; int usage; int state_lock; int input_lock; int notify_lock; int lock; int waitq; int sock_link; int recvmsg_link; int accept_link; int chan_wait_link; int link; int processor; int timer; int user_mutex; void* rxtx_annotations; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,struct rxrpc_call*) ;
 struct rxrpc_call* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rxrpc_net* FUNC_13 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int ) ;

struct rxrpc_call *FUNC_17(struct rxrpc_sock *VAR_7, gfp_t VAR_8,
        unsigned int VAR_9)
{
 struct rxrpc_call *VAR_10;
 struct rxrpc_net *VAR_11 = FUNC_13(FUNC_14(&VAR_7->sk));

 VAR_10 = FUNC_8(VAR_2, VAR_8);
 if (!VAR_10)
  return ((void*)0);

 VAR_10->rxtx_buffer = FUNC_5(VAR_1,
        sizeof(struct sk_buff *),
        VAR_8);
 if (!VAR_10->rxtx_buffer)
  goto nomem;

 VAR_10->rxtx_annotations = FUNC_5(VAR_1, sizeof(u8), VAR_8);
 if (!VAR_10->rxtx_annotations)
  goto nomem_2;

 FUNC_11(&VAR_10->user_mutex);




 if (VAR_7->sk.sk_kern_sock)
  FUNC_9(&VAR_10->user_mutex,
      &VAR_4);

 FUNC_16(&VAR_10->timer, VAR_3, 0);
 FUNC_1(&VAR_10->processor, &VAR_5);
 FUNC_0(&VAR_10->link);
 FUNC_0(&VAR_10->chan_wait_link);
 FUNC_0(&VAR_10->accept_link);
 FUNC_0(&VAR_10->recvmsg_link);
 FUNC_0(&VAR_10->sock_link);
 FUNC_4(&VAR_10->waitq);
 FUNC_15(&VAR_10->lock);
 FUNC_15(&VAR_10->notify_lock);
 FUNC_15(&VAR_10->input_lock);
 FUNC_12(&VAR_10->state_lock);
 FUNC_3(&VAR_10->usage, 1);
 VAR_10->debug_id = VAR_9;
 VAR_10->tx_total_len = -1;
 VAR_10->next_rx_timo = 20 * VAR_0;
 VAR_10->next_req_timo = 1 * VAR_0;

 FUNC_10(&VAR_10->sock_node, 0xed, sizeof(VAR_10->sock_node));


 VAR_10->rx_winsize = VAR_6;
 VAR_10->tx_winsize = 16;
 VAR_10->rx_expect_next = 1;

 VAR_10->cong_cwnd = 2;
 VAR_10->cong_ssthresh = VAR_1 - 1;

 VAR_10->rxnet = VAR_11;
 FUNC_2(&VAR_11->nr_calls);
 return VAR_10;

nomem_2:
 FUNC_6(VAR_10->rxtx_buffer);
nomem:
 FUNC_7(VAR_2, VAR_10);
 return ((void*)0);
}
