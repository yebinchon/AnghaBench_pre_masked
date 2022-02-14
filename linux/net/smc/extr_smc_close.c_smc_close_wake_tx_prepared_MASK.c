
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* sk_state_change ) (TYPE_1__*) ;} ;
struct smc_sock {TYPE_1__ sk; scalar_t__ wait_close_tx_prepared; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct smc_sock *VAR_0)
{
 if (VAR_0->wait_close_tx_prepared)

  VAR_0->sk.sk_state_change(&VAR_0->sk);
}
