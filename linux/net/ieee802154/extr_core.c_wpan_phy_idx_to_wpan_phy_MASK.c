
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy {int dummy; } ;
struct cfg802154_registered_device {struct wpan_phy wpan_phy; } ;


 int FUNC_0 () ;
 struct cfg802154_registered_device* FUNC_1 (int) ;

struct wpan_phy *FUNC_2(int VAR_0)
{
 struct cfg802154_registered_device *VAR_1;

 FUNC_0();

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return ((void*)0);
 return &VAR_1->wpan_phy;
}
