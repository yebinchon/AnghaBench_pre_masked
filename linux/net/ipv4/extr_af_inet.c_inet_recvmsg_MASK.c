
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct msghdr {int msg_namelen; } ;
struct TYPE_2__ {int recvmsg; } ;


 int FUNC_0 (int ,int ,int ,struct sock*,struct msghdr*,size_t,int,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(struct socket *VAR_4, struct msghdr *VAR_5, size_t VAR_6,
   int VAR_7)
{
 struct sock *VAR_8 = VAR_4->sk;
 int VAR_9 = 0;
 int VAR_10;

 if (FUNC_1(!(VAR_7 & VAR_1)))
  FUNC_2(VAR_8);

 VAR_10 = FUNC_0(VAR_8->sk_prot->recvmsg, VAR_2, VAR_3,
         VAR_8, VAR_5, VAR_6, VAR_7 & VAR_0,
         VAR_7 & ~VAR_0, &VAR_9);
 if (VAR_10 >= 0)
  VAR_5->msg_namelen = VAR_9;
 return VAR_10;
}
