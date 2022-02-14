
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smcd_cdc_msg {int dummy; } ;
struct smc_host_cdc_msg {int dummy; } ;
struct smc_connection {TYPE_1__* lgr; } ;
struct smc_cdc_msg {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_smcd; } ;


 int FUNC_0 (struct smc_host_cdc_msg*,struct smcd_cdc_msg*,struct smc_connection*) ;
 int FUNC_1 (struct smc_host_cdc_msg*,struct smc_cdc_msg*,struct smc_connection*) ;

__attribute__((used)) static inline void FUNC_2(struct smc_host_cdc_msg *VAR_0,
           struct smc_cdc_msg *VAR_1,
           struct smc_connection *VAR_2)
{
 if (VAR_2->lgr->is_smcd)
  FUNC_0(VAR_0, (struct smcd_cdc_msg *)VAR_1, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
