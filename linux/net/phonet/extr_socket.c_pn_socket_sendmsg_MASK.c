
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct msghdr {int dummy; } ;
struct TYPE_2__ {int (* sendmsg ) (struct sock*,struct msghdr*,size_t) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int FUNC_1 (struct sock*,struct msghdr*,size_t) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_1, struct msghdr *VAR_2,
        size_t VAR_3)
{
 struct sock *VAR_4 = VAR_1->sk;

 if (FUNC_0(VAR_1))
  return -VAR_0;

 return VAR_4->sk_prot->sendmsg(VAR_4, VAR_2, VAR_3);
}
