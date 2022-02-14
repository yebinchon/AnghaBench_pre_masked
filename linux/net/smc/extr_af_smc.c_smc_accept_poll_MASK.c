
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct smc_sock {int accept_q_lock; int accept_q; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct smc_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct sock *VAR_2)
{
 struct smc_sock *VAR_3 = FUNC_1(VAR_2);
 __poll_t VAR_4 = 0;

 FUNC_2(&VAR_3->accept_q_lock);
 if (!FUNC_0(&VAR_3->accept_q))
  VAR_4 = VAR_0 | VAR_1;
 FUNC_3(&VAR_3->accept_q_lock);

 return VAR_4;
}
