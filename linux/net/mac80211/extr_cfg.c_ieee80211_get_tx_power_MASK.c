
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct TYPE_10__ {int txpower; } ;
struct TYPE_9__ {TYPE_5__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_4__ vif; } ;
struct TYPE_7__ {int power_level; } ;
struct TYPE_8__ {TYPE_2__ conf; } ;
struct ieee80211_local {TYPE_3__ hw; int use_chanctx; TYPE_1__* ops; } ;
struct TYPE_6__ {scalar_t__ get_txpower; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int*) ;
 struct ieee80211_local* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0,
      struct wireless_dev *VAR_1,
      int *VAR_2)
{
 struct ieee80211_local *VAR_3 = FUNC_2(VAR_0);
 struct ieee80211_sub_if_data *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->ops->get_txpower)
  return FUNC_1(VAR_3, VAR_4, VAR_2);

 if (!VAR_3->use_chanctx)
  *VAR_2 = VAR_3->hw.conf.power_level;
 else
  *VAR_2 = VAR_4->vif.bss_conf.txpower;

 return 0;
}
