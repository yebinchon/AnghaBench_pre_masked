
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_3__* sk; } ;
struct sockaddr {int dummy; } ;
struct smc_sock {TYPE_2__* clcsock; } ;
struct TYPE_6__ {scalar_t__ sk_state; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* getname ) (TYPE_2__*,struct sockaddr*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct smc_sock* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_3, struct sockaddr *VAR_4,
         int VAR_5)
{
 struct smc_sock *VAR_6;

 if (VAR_5 && (VAR_3->sk->sk_state != VAR_1) &&
     (VAR_3->sk->sk_state != VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3->sk);

 return VAR_6->clcsock->ops->getname(VAR_6->clcsock, VAR_4, VAR_5);
}
