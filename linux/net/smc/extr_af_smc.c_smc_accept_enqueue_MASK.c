
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct smc_sock {int accept_q_lock; int accept_q; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct sock*) ;
 struct smc_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0, struct sock *VAR_1)
{
 struct smc_sock *VAR_2 = FUNC_2(VAR_0);

 FUNC_3(VAR_1);
 FUNC_4(&VAR_2->accept_q_lock);
 FUNC_0(&FUNC_2(VAR_1)->accept_q, &VAR_2->accept_q);
 FUNC_5(&VAR_2->accept_q_lock);
 FUNC_1(VAR_0);
}
