
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int ieee80211_ptr; } ;
struct TYPE_5__ {int powersave; int req_smps; } ;
struct TYPE_6__ {TYPE_2__ mgd; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;
struct ieee80211_local {int dynamic_ps_forced_timeout; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ieee80211_local*,int ) ;
 int FUNC_5 (struct ieee80211_local*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_local* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct wiphy *VAR_5, struct net_device *VAR_6,
        bool VAR_7, int VAR_8)
{
 struct ieee80211_sub_if_data *VAR_9 = FUNC_0(VAR_6);
 struct ieee80211_local *VAR_10 = FUNC_9(VAR_6->ieee80211_ptr);

 if (VAR_9->vif.type != VAR_2)
  return -VAR_0;

 if (!FUNC_3(&VAR_10->hw, VAR_4))
  return -VAR_0;

 if (VAR_7 == VAR_9->u.mgd.powersave &&
     VAR_8 == VAR_10->dynamic_ps_forced_timeout)
  return 0;

 VAR_9->u.mgd.powersave = VAR_7;
 VAR_10->dynamic_ps_forced_timeout = VAR_8;


 FUNC_7(VAR_9);
 FUNC_1(VAR_9, VAR_9->u.mgd.req_smps);
 FUNC_8(VAR_9);

 if (FUNC_3(&VAR_10->hw, VAR_3))
  FUNC_4(VAR_10, VAR_1);

 FUNC_5(VAR_10);
 FUNC_6(VAR_9);
 FUNC_2(VAR_9);

 return 0;
}
