
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct smcd_dev {int dummy; } ;
struct smc_link_group {scalar_t__ peer_gid; struct smcd_dev* smcd; } ;



__attribute__((used)) static bool FUNC_0(struct smc_link_group *VAR_0,
      struct smcd_dev *VAR_1, u64 VAR_2)
{
 return VAR_0->peer_gid == VAR_2 && VAR_0->smcd == VAR_1;
}
