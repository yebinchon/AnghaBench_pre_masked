
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ieee802154_mlme_ops {TYPE_1__* llsec; } ;
struct ieee802154_llsec_seclevel {int dummy; } ;
struct genl_info {int dummy; } ;
struct TYPE_2__ {int (* add_seclevel ) (struct net_device*,struct ieee802154_llsec_seclevel*) ;} ;


 int VAR_0 ;
 struct ieee802154_mlme_ops* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct genl_info*,struct ieee802154_llsec_seclevel*) ;
 int FUNC_2 (struct net_device*,struct ieee802154_llsec_seclevel*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct genl_info *VAR_2)
{
 struct ieee802154_mlme_ops *VAR_3 = FUNC_0(VAR_1);
 struct ieee802154_llsec_seclevel VAR_4;

 if (FUNC_1(VAR_2, &VAR_4))
  return -VAR_0;

 return VAR_3->llsec->add_seclevel(VAR_1, &VAR_4);
}
