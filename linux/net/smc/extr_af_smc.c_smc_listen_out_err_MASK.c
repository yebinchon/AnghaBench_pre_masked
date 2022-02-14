
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct smc_sock {int conn; struct sock sk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct smc_sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct smc_sock *VAR_2)
{
 struct sock *VAR_3 = &VAR_2->sk;

 if (VAR_3->sk_state == VAR_1)
  FUNC_2(&VAR_2->sk);
 VAR_3->sk_state = VAR_0;
 FUNC_0(&VAR_2->conn);

 FUNC_1(VAR_2);
}
