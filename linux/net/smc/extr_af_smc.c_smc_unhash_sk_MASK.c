
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {TYPE_2__* sk_prot; } ;
struct smc_hashinfo {int lock; } ;
struct TYPE_3__ {struct smc_hashinfo* smc_hash; } ;
struct TYPE_4__ {TYPE_1__ h; } ;


 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct sock *VAR_0)
{
 struct smc_hashinfo *VAR_1 = VAR_0->sk_prot->h.smc_hash;

 FUNC_3(&VAR_1->lock);
 if (FUNC_0(VAR_0))
  FUNC_2(FUNC_1(VAR_0), VAR_0->sk_prot, -1);
 FUNC_4(&VAR_1->lock);
}
