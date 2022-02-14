
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct smc_sock {TYPE_2__* clcsock; } ;
struct TYPE_6__ {TYPE_1__* sk_prot; } ;
struct TYPE_5__ {TYPE_3__* sk; } ;
struct TYPE_4__ {int (* keepalive ) (TYPE_3__*,int) ;} ;


 struct smc_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0, int VAR_1)
{
 struct smc_sock *VAR_2 = FUNC_0(VAR_0);

 VAR_2->clcsock->sk->sk_prot->keepalive(VAR_2->clcsock->sk, VAR_1);
}
