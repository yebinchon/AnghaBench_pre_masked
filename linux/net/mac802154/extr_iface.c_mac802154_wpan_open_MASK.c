
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_dev {int iftype; } ;
struct net_device {int dummy; } ;
struct ieee802154_sub_if_data {struct wpan_dev wpan_dev; } ;


 struct ieee802154_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee802154_sub_if_data*,int ) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 int VAR_1;
 struct ieee802154_sub_if_data *VAR_2 = FUNC_0(VAR_0);
 struct wpan_dev *VAR_3 = &VAR_2->wpan_dev;

 VAR_1 = FUNC_1(VAR_2, VAR_3->iftype);
 if (VAR_1 < 0)
  return VAR_1;

 return FUNC_2(VAR_0);
}
