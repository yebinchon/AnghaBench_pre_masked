
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_link_group {TYPE_1__* lnk; scalar_t__ is_smcd; } ;
struct smc_connection {int sndbuf_desc; struct smc_link_group* lgr; } ;
struct TYPE_2__ {int smcibdev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct smc_connection *VAR_2)
{
 struct smc_link_group *VAR_3 = VAR_2->lgr;

 if (!VAR_2->lgr || VAR_2->lgr->is_smcd)
  return;
 FUNC_0(VAR_3->lnk[VAR_1].smcibdev,
      VAR_2->sndbuf_desc, VAR_0);
}
