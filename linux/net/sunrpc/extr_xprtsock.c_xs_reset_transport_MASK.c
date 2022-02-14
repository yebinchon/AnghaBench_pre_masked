
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct rpc_xprt {int swapper; } ;
struct sock_xprt {int recv_mutex; struct file* file; struct socket* sock; struct sock* inet; struct rpc_xprt xprt; } ;
struct sock {int sk_callback_lock; int * sk_user_data; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct rpc_xprt*,struct socket*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct rpc_xprt*) ;
 int FUNC_10 (struct rpc_xprt*) ;
 int FUNC_11 (struct sock_xprt*,struct sock*) ;
 int FUNC_12 (struct rpc_xprt*) ;
 int FUNC_13 (struct sock_xprt*) ;

__attribute__((used)) static void FUNC_14(struct sock_xprt *VAR_1)
{
 struct socket *VAR_2 = VAR_1->sock;
 struct sock *VAR_3 = VAR_1->inet;
 struct rpc_xprt *VAR_4 = &VAR_1->xprt;
 struct file *VAR_5 = VAR_1->file;

 if (VAR_3 == ((void*)0))
  return;

 if (FUNC_0(&VAR_1->xprt.swapper))
  FUNC_5(VAR_3);

 FUNC_2(VAR_2, VAR_0);

 FUNC_3(&VAR_1->recv_mutex);
 FUNC_7(&VAR_3->sk_callback_lock);
 VAR_1->inet = ((void*)0);
 VAR_1->sock = ((void*)0);
 VAR_1->file = ((void*)0);

 VAR_3->sk_user_data = ((void*)0);

 FUNC_11(VAR_1, VAR_3);
 FUNC_9(VAR_4);
 FUNC_8(&VAR_3->sk_callback_lock);
 FUNC_12(VAR_4);

 FUNC_13(VAR_1);
 FUNC_4(&VAR_1->recv_mutex);

 FUNC_6(VAR_4, VAR_2);
 FUNC_1(VAR_5);

 FUNC_10(VAR_4);
}
