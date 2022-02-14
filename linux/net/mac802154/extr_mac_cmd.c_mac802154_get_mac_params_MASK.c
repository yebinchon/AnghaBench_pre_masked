
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpan_dev {int lbt; int frame_retries; int csma_retries; int max_be; int min_be; TYPE_1__* wpan_phy; } ;
struct net_device {int dummy; } ;
struct ieee802154_sub_if_data {struct wpan_dev wpan_dev; } ;
struct ieee802154_mac_params {int lbt; int frame_retries; int csma_retries; int max_be; int min_be; int cca_ed_level; int cca; int transmit_power; } ;
struct TYPE_2__ {int cca_ed_level; int cca; int transmit_power; } ;


 int FUNC_0 () ;
 struct ieee802154_sub_if_data* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
         struct ieee802154_mac_params *VAR_1)
{
 struct ieee802154_sub_if_data *VAR_2 = FUNC_1(VAR_0);
 struct wpan_dev *VAR_3 = &VAR_2->wpan_dev;

 FUNC_0();


 VAR_1->transmit_power = VAR_3->wpan_phy->transmit_power;
 VAR_1->cca = VAR_3->wpan_phy->cca;
 VAR_1->cca_ed_level = VAR_3->wpan_phy->cca_ed_level;


 VAR_1->min_be = VAR_3->min_be;
 VAR_1->max_be = VAR_3->max_be;
 VAR_1->csma_retries = VAR_3->csma_retries;
 VAR_1->frame_retries = VAR_3->frame_retries;
 VAR_1->lbt = VAR_3->lbt;
}
