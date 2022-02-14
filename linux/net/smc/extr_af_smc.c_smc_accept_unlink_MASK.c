
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct smc_sock {int sk; int accept_q_lock; } ;
struct TYPE_2__ {struct smc_sock* listen_smc; int accept_q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0)
{
 struct smc_sock *VAR_1 = FUNC_2(VAR_0)->listen_smc;

 FUNC_4(&VAR_1->accept_q_lock);
 FUNC_0(&FUNC_2(VAR_0)->accept_q);
 FUNC_5(&VAR_1->accept_q_lock);
 FUNC_1(&FUNC_2(VAR_0)->listen_smc->sk);
 FUNC_3(VAR_0);
}
