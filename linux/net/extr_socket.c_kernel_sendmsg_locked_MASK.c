
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct sock {struct socket* sk_socket; } ;
struct msghdr {int msg_iter; } ;
struct kvec {int dummy; } ;
struct TYPE_2__ {int (* sendmsg_locked ) (struct sock*,struct msghdr*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct kvec*,size_t,size_t) ;
 int FUNC_1 (struct msghdr*) ;
 int FUNC_2 (struct sock*,struct msghdr*,size_t) ;
 int FUNC_3 (struct sock*,struct msghdr*,int ) ;

int FUNC_4(struct sock *VAR_1, struct msghdr *VAR_2,
     struct kvec *VAR_3, size_t VAR_4, size_t VAR_5)
{
 struct socket *VAR_6 = VAR_1->sk_socket;

 if (!VAR_6->ops->sendmsg_locked)
  return FUNC_2(VAR_1, VAR_2, VAR_5);

 FUNC_0(&VAR_2->msg_iter, VAR_0, VAR_3, VAR_4, VAR_5);

 return VAR_6->ops->sendmsg_locked(VAR_1, VAR_2, FUNC_1(VAR_2));
}
