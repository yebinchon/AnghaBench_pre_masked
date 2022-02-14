
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct msghdr {int dummy; } ;
struct TYPE_2__ {int (* sendmsg ) (struct sock*,struct msghdr*,size_t) ;} ;


 int FUNC_0 (struct sock*,struct msghdr*,size_t) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_0, struct msghdr *VAR_1,
       size_t VAR_2)
{
 struct sock *VAR_3 = VAR_0->sk;

 return VAR_3->sk_prot->sendmsg(VAR_3, VAR_1, VAR_2);
}
