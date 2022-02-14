
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* lgr; } ;
struct smc_sock {TYPE_2__ conn; } ;
struct smc_clc_msg_accept_confirm {int dummy; } ;
struct TYPE_3__ {scalar_t__ is_smcd; } ;


 int FUNC_0 (struct smc_sock*,struct smc_clc_msg_accept_confirm*) ;
 int FUNC_1 (struct smc_sock*,struct smc_clc_msg_accept_confirm*) ;

__attribute__((used)) static void FUNC_2(struct smc_sock *VAR_0,
        struct smc_clc_msg_accept_confirm *VAR_1)
{
 if (VAR_0->conn.lgr->is_smcd)
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
