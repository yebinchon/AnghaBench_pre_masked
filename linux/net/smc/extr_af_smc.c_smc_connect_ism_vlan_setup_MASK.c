
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_sock {int dummy; } ;
struct smc_init_info {scalar_t__ vlan_id; int ism_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct smc_sock *VAR_1,
          struct smc_init_info *VAR_2)
{
 if (VAR_2->vlan_id && FUNC_0(VAR_2->ism_dev, VAR_2->vlan_id))
  return VAR_0;
 return 0;
}
