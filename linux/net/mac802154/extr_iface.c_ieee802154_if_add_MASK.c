
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int name; TYPE_2__* ieee802154_ptr; int type; int perm_addr; int dev_addr; scalar_t__ needed_headroom; } ;
struct TYPE_6__ {TYPE_4__* wpan_phy; } ;
struct ieee802154_sub_if_data {int list; struct ieee802154_local* local; TYPE_2__ wpan_dev; struct net_device* dev; int name; } ;
struct TYPE_7__ {TYPE_4__* phy; scalar_t__ extra_tx_headroom; } ;
struct ieee802154_local {int iflist_mtx; int interfaces; TYPE_3__ hw; TYPE_1__* phy; } ;
typedef enum nl802154_iftype { ____Placeholder_nl802154_iftype } nl802154_iftype ;
typedef int __le64 ;
struct TYPE_8__ {int perm_extended_addr; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;


 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int,char const*,unsigned char,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct ieee802154_sub_if_data*,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct ieee802154_sub_if_data* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (TYPE_4__*) ;

struct net_device *
FUNC_17(struct ieee802154_local *VAR_8, const char *VAR_9,
    unsigned char VAR_10, enum nl802154_iftype VAR_11,
    __le64 VAR_12)
{
 struct net_device *VAR_13 = ((void*)0);
 struct ieee802154_sub_if_data *VAR_14 = ((void*)0);
 int VAR_15 = -VAR_3;

 FUNC_0();

 VAR_13 = FUNC_3(sizeof(*VAR_14), VAR_9,
       VAR_10, VAR_7);
 if (!VAR_13)
  return FUNC_1(-VAR_3);

 VAR_13->needed_headroom = VAR_8->hw.extra_tx_headroom +
    VAR_5;

 VAR_15 = FUNC_4(VAR_13, VAR_13->name);
 if (VAR_15 < 0)
  goto err;

 FUNC_8(VAR_13->perm_addr,
    &VAR_8->hw.phy->perm_extended_addr);
 switch (VAR_11) {
 case 128:
  VAR_13->type = VAR_0;
  if (FUNC_7(VAR_12))
   FUNC_8(VAR_13->dev_addr, &VAR_12);
  else
   FUNC_11(VAR_13->dev_addr, VAR_13->perm_addr,
          VAR_4);
  break;
 case 129:
  VAR_13->type = VAR_1;
  break;
 default:
  VAR_15 = -VAR_2;
  goto err;
 }


 FUNC_2(VAR_13, &VAR_8->phy->dev);
 FUNC_5(VAR_13, FUNC_16(VAR_8->hw.phy));
 VAR_14 = FUNC_14(VAR_13);
 VAR_13->ieee802154_ptr = &VAR_14->wpan_dev;
 FUNC_11(VAR_14->name, VAR_13->name, VAR_6);
 VAR_14->dev = VAR_13;
 VAR_14->wpan_dev.wpan_phy = VAR_8->hw.phy;
 VAR_14->local = VAR_8;


 VAR_15 = FUNC_9(VAR_14, VAR_11);
 if (VAR_15)
  goto err;

 VAR_15 = FUNC_15(VAR_13);
 if (VAR_15 < 0)
  goto err;

 FUNC_12(&VAR_8->iflist_mtx);
 FUNC_10(&VAR_14->list, &VAR_8->interfaces);
 FUNC_13(&VAR_8->iflist_mtx);

 return VAR_13;

err:
 FUNC_6(VAR_13);
 return FUNC_1(VAR_15);
}
