
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; } ;
struct smc_sock {TYPE_2__* clcsock; scalar_t__ use_fallback; } ;
struct msghdr {scalar_t__ msg_namelen; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* recvmsg ) (TYPE_2__*,struct msghdr*,size_t,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct smc_sock*,struct msghdr*,int *,size_t,int) ;
 struct smc_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (TYPE_2__*,struct msghdr*,size_t,int) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_6, struct msghdr *VAR_7, size_t VAR_8,
         int VAR_9)
{
 struct sock *VAR_10 = VAR_6->sk;
 struct smc_sock *VAR_11;
 int VAR_12 = -VAR_0;

 VAR_11 = FUNC_3(VAR_10);
 FUNC_0(VAR_10);
 if (VAR_10->sk_state == VAR_2 && (VAR_10->sk_shutdown & VAR_1)) {

  VAR_12 = 0;
  goto out;
 }
 if ((VAR_10->sk_state == VAR_3) ||
     (VAR_10->sk_state == VAR_4) ||
     (VAR_10->sk_state == VAR_2))
  goto out;

 if (VAR_10->sk_state == VAR_5) {
  VAR_12 = 0;
  goto out;
 }

 if (VAR_11->use_fallback) {
  VAR_12 = VAR_11->clcsock->ops->recvmsg(VAR_11->clcsock, VAR_7, VAR_8, VAR_9);
 } else {
  VAR_7->msg_namelen = 0;
  VAR_12 = FUNC_2(VAR_11, VAR_7, ((void*)0), VAR_8, VAR_9);
 }

out:
 FUNC_1(VAR_10);
 return VAR_12;
}
