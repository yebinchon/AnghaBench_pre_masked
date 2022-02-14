
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int state; int * ops; } ;
struct sock {int sk_destruct; scalar_t__ sk_max_ack_backlog; int sk_write_space; int sk_state; } ;
struct rxrpc_sock {int family; int sk; int srx; int call_lock; int recvmsg_lock; int recvmsg_q; int to_be_accepted; int sock_calls; int incoming_lock; int calls; } ;
struct rxrpc_net {int peer_keepalive_timer; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char*,struct socket*,int) ;
 int FUNC_3 (char*,struct rxrpc_sock*) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 struct rxrpc_net* FUNC_6 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 struct rxrpc_sock* FUNC_7 (struct sock*) ;
 int VAR_16 ;
 int VAR_17 ;
 struct sock* FUNC_8 (struct net*,int ,int ,int *,int) ;
 int FUNC_9 (struct socket*,struct sock*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sock*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct net *VAR_18, struct socket *VAR_19, int VAR_20,
   int VAR_21)
{
 struct rxrpc_net *VAR_22;
 struct rxrpc_sock *VAR_23;
 struct sock *VAR_24;

 FUNC_2("%p,%d", VAR_19, VAR_20);


 if (VAR_20 != VAR_5 &&
     FUNC_1(VAR_0) && VAR_20 != VAR_6)
  return -VAR_2;

 if (VAR_19->type != VAR_10)
  return -VAR_3;

 VAR_19->ops = &VAR_15;
 VAR_19->state = VAR_12;

 VAR_24 = FUNC_8(VAR_18, VAR_7, VAR_4, &VAR_14, VAR_21);
 if (!VAR_24)
  return -VAR_1;

 FUNC_9(VAR_19, VAR_24);
 FUNC_11(VAR_24, VAR_11);
 VAR_24->sk_state = VAR_9;
 VAR_24->sk_write_space = VAR_17;
 VAR_24->sk_max_ack_backlog = 0;
 VAR_24->sk_destruct = VAR_16;

 VAR_23 = FUNC_7(VAR_24);
 VAR_23->family = VAR_20;
 VAR_23->calls = VAR_8;

 FUNC_12(&VAR_23->incoming_lock);
 FUNC_0(&VAR_23->sock_calls);
 FUNC_0(&VAR_23->to_be_accepted);
 FUNC_0(&VAR_23->recvmsg_q);
 FUNC_5(&VAR_23->recvmsg_lock);
 FUNC_5(&VAR_23->call_lock);
 FUNC_4(&VAR_23->srx, 0, sizeof(VAR_23->srx));

 VAR_22 = FUNC_6(FUNC_10(&VAR_23->sk));
 FUNC_13(&VAR_22->peer_keepalive_timer, VAR_13 + 1);

 FUNC_3(" = 0 [%p]", VAR_23);
 return 0;
}
