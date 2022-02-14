
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smc_clc_msg_proposal_prefix {int dummy; } ;
struct smc_clc_msg_proposal {int iparea_offset; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct smc_clc_msg_proposal_prefix *
FUNC_1(struct smc_clc_msg_proposal *VAR_0)
{
 return (struct smc_clc_msg_proposal_prefix *)
        ((u8 *)VAR_0 + sizeof(*VAR_0) + FUNC_0(VAR_0->iparea_offset));
}
