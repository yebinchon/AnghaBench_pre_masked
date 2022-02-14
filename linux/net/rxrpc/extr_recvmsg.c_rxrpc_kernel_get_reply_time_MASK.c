
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rxrpc_call {scalar_t__ rx_hard_ack; int user_mutex; struct sk_buff** rxtx_buffer; int rx_top; int state; } ;
typedef scalar_t__ rxrpc_seq_t ;
typedef int ktime_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int *) ;

bool FUNC_6(struct socket *VAR_2, struct rxrpc_call *VAR_3,
     ktime_t *VAR_4)
{
 struct sk_buff *VAR_5;
 rxrpc_seq_t VAR_6, VAR_7, VAR_8;
 bool VAR_9 = 0;

 FUNC_2(&VAR_3->user_mutex);

 if (FUNC_0(VAR_3->state) != VAR_0)
  goto out;

 VAR_6 = VAR_3->rx_hard_ack;
 if (VAR_6 != 0)
  goto out;

 VAR_8 = VAR_6 + 1;
 VAR_7 = FUNC_5(&VAR_3->rx_top);
 if (FUNC_1(VAR_8, VAR_7))
  goto out;

 VAR_5 = VAR_3->rxtx_buffer[VAR_8 & VAR_1];
 if (!VAR_5)
  goto out;

 *VAR_4 = FUNC_4(VAR_5);
 VAR_9 = 1;

out:
 FUNC_3(&VAR_3->user_mutex);
 return VAR_9;
}
