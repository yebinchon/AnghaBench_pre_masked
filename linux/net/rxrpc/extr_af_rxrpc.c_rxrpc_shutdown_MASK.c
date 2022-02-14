
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {int lock; } ;
struct sock {scalar_t__ sk_state; TYPE_1__ sk_receive_queue; int sk_shutdown; } ;
struct rxrpc_sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,struct sock*,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct rxrpc_sock*) ;
 struct rxrpc_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_5->sk;
 struct rxrpc_sock *VAR_8 = FUNC_4(VAR_7);
 int VAR_9 = 0;

 FUNC_0("%p,%d", VAR_7, VAR_6);

 if (VAR_6 != VAR_4)
  return -VAR_0;
 if (VAR_7->sk_state == VAR_2)
  return -VAR_1;

 FUNC_1(VAR_7);

 FUNC_5(&VAR_7->sk_receive_queue.lock);
 if (VAR_7->sk_state < VAR_2) {
  VAR_7->sk_state = VAR_2;
  VAR_7->sk_shutdown = VAR_3;
 } else {
  VAR_9 = -VAR_1;
 }
 FUNC_6(&VAR_7->sk_receive_queue.lock);

 FUNC_3(VAR_8);

 FUNC_2(VAR_7);
 return VAR_9;
}
