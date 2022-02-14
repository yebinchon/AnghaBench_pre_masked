
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int name; TYPE_2__* ieee802154_ptr; } ;
struct ieee802154_sub_if_data {int name; } ;
struct TYPE_4__ {TYPE_1__* wpan_phy; } ;
struct TYPE_3__ {scalar_t__ privid; } ;


 struct ieee802154_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 struct net_device* FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_5,
    unsigned long VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = FUNC_2(VAR_7);
 struct ieee802154_sub_if_data *VAR_9;

 if (VAR_6 != VAR_1)
  return VAR_2;

 if (!VAR_8->ieee802154_ptr || !VAR_8->ieee802154_ptr->wpan_phy)
  return VAR_2;

 if (VAR_8->ieee802154_ptr->wpan_phy->privid != VAR_4)
  return VAR_2;

 VAR_9 = FUNC_0(VAR_8);
 FUNC_1(VAR_9->name, VAR_8->name, VAR_0);

 return VAR_3;
}
