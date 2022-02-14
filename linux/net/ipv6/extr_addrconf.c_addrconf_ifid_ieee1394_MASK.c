
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uniq_id; } ;
union fwnet_hwaddr {TYPE_1__ uc; } ;
typedef int u8 ;
struct net_device {scalar_t__ addr_len; scalar_t__ dev_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int *,int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1, struct net_device *VAR_2)
{
 union fwnet_hwaddr *VAR_3;

 if (VAR_2->addr_len != VAR_0)
  return -1;

 VAR_3 = (union fwnet_hwaddr *)VAR_2->dev_addr;

 FUNC_0(VAR_1, &VAR_3->uc.uniq_id, sizeof(VAR_3->uc.uniq_id));
 VAR_1[0] ^= 2;
 return 0;
}
