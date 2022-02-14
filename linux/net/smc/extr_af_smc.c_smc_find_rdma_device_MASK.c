
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_sock {TYPE_1__* clcsock; } ;
struct smc_init_info {int ib_dev; } ;
struct TYPE_2__ {int sk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct smc_init_info*) ;

__attribute__((used)) static int FUNC_1(struct smc_sock *VAR_1, struct smc_init_info *VAR_2)
{




 FUNC_0(VAR_1->clcsock->sk, VAR_2);
 if (!VAR_2->ib_dev)
  return VAR_0;
 return 0;
}
