
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct smc_sock {TYPE_2__* clcsock; scalar_t__ use_fallback; int fallback_rsn; int connect_nonblock; } ;
struct msghdr {int msg_flags; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* sendmsg ) (TYPE_2__*,struct msghdr*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct smc_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct smc_sock*) ;
 int FUNC_4 (struct smc_sock*,struct msghdr*,size_t) ;
 int FUNC_5 (TYPE_2__*,struct msghdr*,size_t) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_7, struct msghdr *VAR_8, size_t VAR_9)
{
 struct sock *VAR_10 = VAR_7->sk;
 struct smc_sock *VAR_11;
 int VAR_12 = -VAR_1;

 VAR_11 = FUNC_2(VAR_10);
 FUNC_0(VAR_10);
 if ((VAR_10->sk_state != VAR_3) &&
     (VAR_10->sk_state != VAR_4) &&
     (VAR_10->sk_state != VAR_6))
  goto out;

 if (VAR_8->msg_flags & VAR_2) {
  if (VAR_10->sk_state == VAR_6 && !VAR_11->connect_nonblock) {
   FUNC_3(VAR_11);
   VAR_11->fallback_rsn = VAR_5;
  } else {
   VAR_12 = -VAR_0;
   goto out;
  }
 }

 if (VAR_11->use_fallback)
  VAR_12 = VAR_11->clcsock->ops->sendmsg(VAR_11->clcsock, VAR_8, VAR_9);
 else
  VAR_12 = FUNC_4(VAR_11, VAR_8, VAR_9);
out:
 FUNC_1(VAR_10);
 return VAR_12;
}
