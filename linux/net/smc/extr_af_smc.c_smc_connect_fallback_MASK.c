
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sk_state; } ;
struct smc_sock {int fallback_rsn; TYPE_1__ sk; scalar_t__ connect_nonblock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct smc_sock*) ;
 int FUNC_1 (struct smc_sock*) ;

__attribute__((used)) static int FUNC_2(struct smc_sock *VAR_2, int VAR_3)
{
 FUNC_1(VAR_2);
 VAR_2->fallback_rsn = VAR_3;
 FUNC_0(VAR_2);
 VAR_2->connect_nonblock = 0;
 if (VAR_2->sk.sk_state == VAR_1)
  VAR_2->sk.sk_state = VAR_0;
 return 0;
}
