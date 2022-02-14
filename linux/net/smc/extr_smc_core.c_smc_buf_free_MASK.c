
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link_group {scalar_t__ is_smcd; } ;
struct smc_buf_desc {int dummy; } ;


 int FUNC_0 (struct smc_link_group*,int,struct smc_buf_desc*) ;
 int FUNC_1 (struct smc_link_group*,int,struct smc_buf_desc*) ;

__attribute__((used)) static void FUNC_2(struct smc_link_group *VAR_0, bool VAR_1,
    struct smc_buf_desc *VAR_2)
{
 if (VAR_0->is_smcd)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
