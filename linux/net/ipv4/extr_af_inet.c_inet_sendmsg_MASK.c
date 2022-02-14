
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct msghdr {int dummy; } ;
struct TYPE_2__ {int sendmsg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct sock*,struct msghdr*,size_t) ;
 int FUNC_1 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct socket *VAR_3, struct msghdr *VAR_4, size_t VAR_5)
{
 struct sock *VAR_6 = VAR_3->sk;

 if (FUNC_2(FUNC_1(VAR_6)))
  return -VAR_0;

 return FUNC_0(VAR_6->sk_prot->sendmsg, VAR_1, VAR_2,
          VAR_6, VAR_4, VAR_5);
}
