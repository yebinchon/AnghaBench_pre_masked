
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; struct ieee80211_local* local; } ;
struct TYPE_4__ {TYPE_3__* wiphy; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;
struct TYPE_6__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_sub_if_data *VAR_9,
         enum ieee80211_smps_mode VAR_10)
{
 struct ieee80211_local *VAR_11 = VAR_9->local;
 int VAR_12;

 if (!(VAR_11->hw.wiphy->features & VAR_6) &&
     VAR_10 == VAR_4)
  return -VAR_0;


 if (!(VAR_11->hw.wiphy->features & VAR_5) &&
     (VAR_10 == VAR_3 ||
      VAR_10 == VAR_2))
  return -VAR_0;

 if (VAR_9->vif.type != VAR_8 &&
     VAR_9->vif.type != VAR_7)
  return -VAR_1;

 FUNC_2(VAR_9);
 if (VAR_9->vif.type == VAR_8)
  VAR_12 = FUNC_1(VAR_9, VAR_10);
 else
  VAR_12 = FUNC_0(VAR_9, VAR_10);
 FUNC_3(VAR_9);

 return VAR_12;
}
