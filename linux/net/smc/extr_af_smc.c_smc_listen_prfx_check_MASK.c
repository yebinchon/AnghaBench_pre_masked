
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct smc_sock {struct socket* clcsock; } ;
struct smc_clc_msg_proposal_prefix {int dummy; } ;
struct smc_clc_msg_proposal {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct socket*,struct smc_clc_msg_proposal_prefix*) ;
 struct smc_clc_msg_proposal_prefix* FUNC_1 (struct smc_clc_msg_proposal*) ;

__attribute__((used)) static int FUNC_2(struct smc_sock *VAR_1,
     struct smc_clc_msg_proposal *VAR_2)
{
 struct smc_clc_msg_proposal_prefix *VAR_3;
 struct socket *VAR_4 = VAR_1->clcsock;

 VAR_3 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_4, VAR_3))
  return VAR_0;

 return 0;
}
