
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link_group {int * lnk; int vlan_id; int smcd; scalar_t__ is_smcd; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct smc_link_group*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct smc_link_group*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct smc_link_group *VAR_1)
{
 FUNC_2(VAR_1);
 if (VAR_1->is_smcd)
  FUNC_1(VAR_1->smcd, VAR_1->vlan_id);
 else
  FUNC_3(&VAR_1->lnk[VAR_0]);
 FUNC_0(VAR_1);
}
