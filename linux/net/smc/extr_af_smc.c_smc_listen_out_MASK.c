
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int (* sk_data_ready ) (struct sock*) ;} ;
struct smc_sock {struct sock sk; struct smc_sock* listen_smc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct smc_sock *VAR_2)
{
 struct smc_sock *VAR_3 = VAR_2->listen_smc;
 struct sock *VAR_4 = &VAR_2->sk;

 if (VAR_3->sk.sk_state == VAR_1) {
  FUNC_0(&VAR_3->sk, VAR_0);
  FUNC_2(&VAR_3->sk, VAR_4);
  FUNC_1(&VAR_3->sk);
 } else {
  FUNC_3(VAR_4);
 }


 VAR_3->sk.sk_data_ready(&VAR_3->sk);
 FUNC_4(&VAR_3->sk);
}
