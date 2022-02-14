
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_link_group {scalar_t__ role; } ;
struct smc_link {TYPE_1__* smcibdev; } ;
struct TYPE_2__ {int roce_cq_recv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct smc_link_group* FUNC_1 (struct smc_link*) ;
 int FUNC_2 (struct smc_link*) ;
 int FUNC_3 (struct smc_link*) ;
 int FUNC_4 (struct smc_link*) ;
 int FUNC_5 (struct smc_link*) ;
 int FUNC_6 (struct smc_link*) ;

int FUNC_7(struct smc_link *VAR_2)
{
 struct smc_link_group *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = 0;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  goto out;
 FUNC_5(VAR_2);
 VAR_4 = FUNC_0(VAR_2->smcibdev->roce_cq_recv,
         VAR_0);
 if (VAR_4)
  goto out;
 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4)
  goto out;
 FUNC_5(VAR_2);

 if (VAR_3->role == VAR_1) {
  VAR_4 = FUNC_4(VAR_2);
  if (VAR_4)
   goto out;
  FUNC_5(VAR_2);
 }
out:
 return VAR_4;
}
