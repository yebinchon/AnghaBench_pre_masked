
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int nonagle; } ;
struct smc_sock {TYPE_1__* clcsock; } ;
struct TYPE_2__ {int sk; } ;


 int VAR_0 ;
 struct tcp_sock* FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct smc_sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_0(VAR_1->clcsock->sk);

 return (VAR_2->nonagle & VAR_0) ? 1 : 0;
}
