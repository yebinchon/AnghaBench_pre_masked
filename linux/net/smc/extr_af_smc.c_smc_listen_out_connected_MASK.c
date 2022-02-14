
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct smc_sock {struct sock sk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct smc_sock*) ;

__attribute__((used)) static void FUNC_2(struct smc_sock *VAR_2)
{
 struct sock *VAR_3 = &VAR_2->sk;

 FUNC_0(VAR_3);
 if (VAR_3->sk_state == VAR_1)
  VAR_3->sk_state = VAR_0;

 FUNC_1(VAR_2);
}
