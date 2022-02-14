
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_sock {int dummy; } ;
struct smc_init_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct smc_sock*,int) ;
 int FUNC_1 (struct smc_sock*,struct smc_init_info*) ;

__attribute__((used)) static int FUNC_2(struct smc_sock *VAR_1,
    struct smc_init_info *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;


 if (FUNC_0(VAR_1, 0))
  return VAR_0;

 return 0;
}
