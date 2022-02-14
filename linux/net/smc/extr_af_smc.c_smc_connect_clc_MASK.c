
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_sock {int dummy; } ;
struct smc_init_info {int dummy; } ;
struct smc_clc_msg_accept_confirm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smc_sock*,int,struct smc_init_info*) ;
 int FUNC_1 (struct smc_sock*,struct smc_clc_msg_accept_confirm*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct smc_sock *VAR_2, int VAR_3,
      struct smc_clc_msg_accept_confirm *VAR_4,
      struct smc_init_info *VAR_5)
{
 int VAR_6 = 0;


 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_2, VAR_4, sizeof(*VAR_4), VAR_1,
    VAR_0);
}
