
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct rxrpc_sock {int recvmsg_q; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct rxrpc_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct file*,struct socket*,int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_4, struct socket *VAR_5,
          poll_table *VAR_6)
{
 struct sock *VAR_7 = VAR_5->sk;
 struct rxrpc_sock *VAR_8 = FUNC_1(VAR_7);
 __poll_t VAR_9;

 FUNC_3(VAR_4, VAR_5, VAR_6);
 VAR_9 = 0;



 if (!FUNC_0(&VAR_8->recvmsg_q))
  VAR_9 |= VAR_0 | VAR_2;




 if (FUNC_2(VAR_7))
  VAR_9 |= VAR_1 | VAR_3;

 return VAR_9;
}
