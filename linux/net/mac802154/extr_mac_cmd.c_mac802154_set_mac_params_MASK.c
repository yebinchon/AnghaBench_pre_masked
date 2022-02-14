
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpan_dev {int lbt; int frame_retries; int csma_retries; int max_be; int min_be; TYPE_1__* wpan_phy; } ;
struct net_device {int dummy; } ;
struct ieee802154_sub_if_data {struct wpan_dev wpan_dev; struct ieee802154_local* local; } ;
struct ieee802154_mac_params {int cca_ed_level; int cca; int transmit_power; int lbt; int frame_retries; int csma_retries; int max_be; int min_be; } ;
struct TYPE_6__ {TYPE_2__* phy; } ;
struct ieee802154_local {TYPE_3__ hw; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int cca_ed_level; int cca; int transmit_power; } ;


 int FUNC_0 () ;
 struct ieee802154_sub_if_data* FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ieee802154_local*,int ) ;
 int FUNC_3 (struct ieee802154_local*,int *) ;
 int FUNC_4 (struct ieee802154_local*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
        const struct ieee802154_mac_params *VAR_4)
{
 struct ieee802154_sub_if_data *VAR_5 = FUNC_1(VAR_3);
 struct ieee802154_local *VAR_6 = VAR_5->local;
 struct wpan_dev *VAR_7 = &VAR_5->wpan_dev;
 int VAR_8;

 FUNC_0();


 VAR_7->wpan_phy->transmit_power = VAR_4->transmit_power;
 VAR_7->wpan_phy->cca = VAR_4->cca;
 VAR_7->wpan_phy->cca_ed_level = VAR_4->cca_ed_level;


 VAR_7->min_be = VAR_4->min_be;
 VAR_7->max_be = VAR_4->max_be;
 VAR_7->csma_retries = VAR_4->csma_retries;
 VAR_7->frame_retries = VAR_4->frame_retries;
 VAR_7->lbt = VAR_4->lbt;

 if (VAR_6->hw.phy->flags & VAR_2) {
  VAR_8 = FUNC_4(VAR_6, VAR_4->transmit_power);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_6->hw.phy->flags & VAR_1) {
  VAR_8 = FUNC_3(VAR_6, &VAR_4->cca);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_6->hw.phy->flags & VAR_0) {
  VAR_8 = FUNC_2(VAR_6, VAR_4->cca_ed_level);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
