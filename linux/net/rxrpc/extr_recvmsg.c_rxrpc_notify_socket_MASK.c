
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int (* sk_data_ready ) (struct sock*) ;} ;
struct rxrpc_sock {int recvmsg_lock; int recvmsg_q; struct sock sk; } ;
struct rxrpc_call {int recvmsg_link; int notify_lock; int user_call_ID; int (* notify_rx ) (struct sock*,struct rxrpc_call*,int ) ;int socket; int debug_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int (*) (struct sock*)) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct rxrpc_sock* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (struct rxrpc_call*,int ) ;
 int FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sock*,struct rxrpc_call*,int ) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct rxrpc_call *VAR_3)
{
 struct rxrpc_sock *VAR_4;
 struct sock *VAR_5;

 FUNC_1("%d", VAR_3->debug_id);

 if (!FUNC_4(&VAR_3->recvmsg_link))
  return;

 FUNC_6();

 VAR_4 = FUNC_5(VAR_3->socket);
 VAR_5 = &VAR_4->sk;
 if (VAR_4 && VAR_5->sk_state < VAR_0) {
  if (VAR_3->notify_rx) {
   FUNC_10(&VAR_3->notify_lock);
   VAR_3->notify_rx(VAR_5, VAR_3, VAR_3->user_call_ID);
   FUNC_11(&VAR_3->notify_lock);
  } else {
   FUNC_14(&VAR_4->recvmsg_lock);
   if (FUNC_4(&VAR_3->recvmsg_link)) {
    FUNC_8(VAR_3, VAR_2);
    FUNC_3(&VAR_3->recvmsg_link, &VAR_4->recvmsg_q);
   }
   FUNC_15(&VAR_4->recvmsg_lock);

   if (!FUNC_9(VAR_5, VAR_1)) {
    FUNC_0("call %ps", VAR_5->sk_data_ready);
    VAR_5->sk_data_ready(VAR_5);
   }
  }
 }

 FUNC_7();
 FUNC_2("");
}
