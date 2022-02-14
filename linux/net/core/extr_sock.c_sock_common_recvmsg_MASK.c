
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct msghdr {int msg_namelen; } ;
struct TYPE_2__ {int (* recvmsg ) (struct sock*,struct msghdr*,size_t,int,int,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct msghdr*,size_t,int,int,int*) ;

int FUNC_1(struct socket *VAR_1, struct msghdr *VAR_2, size_t VAR_3,
   int VAR_4)
{
 struct sock *VAR_5 = VAR_1->sk;
 int VAR_6 = 0;
 int VAR_7;

 VAR_7 = VAR_5->sk_prot->recvmsg(VAR_5, VAR_2, VAR_3, VAR_4 & VAR_0,
       VAR_4 & ~VAR_0, &VAR_6);
 if (VAR_7 >= 0)
  VAR_2->msg_namelen = VAR_6;
 return VAR_7;
}
