
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct pep_sock {int tx_credits; } ;


 int FUNC_0 (int *) ;
 struct pep_sock* FUNC_1 (struct sock*) ;

int FUNC_2(struct sock *VAR_0)
{
 struct pep_sock *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_1->tx_credits);
}
