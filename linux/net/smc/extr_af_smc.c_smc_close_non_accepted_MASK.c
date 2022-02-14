
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_lingertime; } ;
struct smc_sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct smc_sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct smc_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

void FUNC_5(struct sock *VAR_1)
{
 struct smc_sock *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_1);
 if (!VAR_1->sk_lingertime)

  VAR_1->sk_lingertime = VAR_0;
 FUNC_0(VAR_2);
 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
}
