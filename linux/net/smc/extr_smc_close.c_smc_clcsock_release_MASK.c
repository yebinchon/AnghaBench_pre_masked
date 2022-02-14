
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct smc_sock {int clcsock_release_lock; struct socket* clcsock; int smc_listen_work; scalar_t__ listen_smc; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct socket*) ;

void FUNC_5(struct smc_sock *VAR_0)
{
 struct socket *VAR_1;

 if (VAR_0->listen_smc && FUNC_1() != &VAR_0->smc_listen_work)
  FUNC_0(&VAR_0->smc_listen_work);
 FUNC_2(&VAR_0->clcsock_release_lock);
 if (VAR_0->clcsock) {
  VAR_1 = VAR_0->clcsock;
  VAR_0->clcsock = ((void*)0);
  FUNC_4(VAR_1);
 }
 FUNC_3(&VAR_0->clcsock_release_lock);
}
