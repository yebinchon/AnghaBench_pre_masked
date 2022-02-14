
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpan_dev {int extended_addr; int pan_id; } ;
struct net_device {int dummy; } ;
struct ieee802154_sub_if_data {struct wpan_dev wpan_dev; } ;
struct ieee802154_mlme_ops {TYPE_1__* llsec; } ;
struct ieee802154_llsec_params {int hwaddr; int pan_id; } ;
struct TYPE_2__ {int (* set_params ) (struct net_device*,struct ieee802154_llsec_params*,int) ;} ;


 struct ieee802154_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ieee802154_mlme_ops* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct ieee802154_llsec_params*,int) ;

int FUNC_3(struct net_device *VAR_2)
{
 struct ieee802154_sub_if_data *VAR_3 = FUNC_0(VAR_2);
 struct ieee802154_mlme_ops *VAR_4 = FUNC_1(VAR_2);
 struct wpan_dev *VAR_5 = &VAR_3->wpan_dev;
 int VAR_6 = 0;

 if (VAR_4->llsec) {
  struct ieee802154_llsec_params VAR_7;
  int VAR_8 = 0;

  VAR_7.pan_id = VAR_5->pan_id;
  VAR_8 |= VAR_1;

  VAR_7.hwaddr = VAR_5->extended_addr;
  VAR_8 |= VAR_0;

  VAR_6 = VAR_4->llsec->set_params(VAR_2, &VAR_7, VAR_8);
 }

 return VAR_6;
}
