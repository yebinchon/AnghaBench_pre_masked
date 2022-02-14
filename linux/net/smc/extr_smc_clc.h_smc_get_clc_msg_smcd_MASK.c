
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_clc_msg_smcd {int dummy; } ;
struct smc_clc_msg_proposal {int iparea_offset; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct smc_clc_msg_smcd *
FUNC_1(struct smc_clc_msg_proposal *VAR_0)
{
 if (FUNC_0(VAR_0->iparea_offset) != sizeof(struct smc_clc_msg_smcd))
  return ((void*)0);

 return (struct smc_clc_msg_smcd *)(VAR_0 + 1);
}
