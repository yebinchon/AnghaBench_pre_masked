
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct cfg80211_nan_conf {int bands; int master_pref; } ;
struct TYPE_4__ {struct cfg80211_nan_conf conf; } ;
struct TYPE_5__ {TYPE_1__ nan; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; int local; TYPE_3__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,struct ieee80211_sub_if_data*,struct cfg80211_nan_conf*,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_5,
         struct wireless_dev *VAR_6,
         struct cfg80211_nan_conf *VAR_7,
         u32 VAR_8)
{
 struct ieee80211_sub_if_data *VAR_9 = FUNC_0(VAR_6);
 struct cfg80211_nan_conf VAR_10;
 int VAR_11 = 0;

 if (VAR_9->vif.type != VAR_4)
  return -VAR_3;

 if (!FUNC_2(VAR_9))
  return -VAR_2;

 VAR_10 = VAR_9->u.nan.conf;

 if (VAR_8 & VAR_1)
  VAR_10.master_pref = VAR_7->master_pref;

 if (VAR_8 & VAR_0)
  VAR_10.bands = VAR_7->bands;

 VAR_11 = FUNC_1(VAR_9->local, VAR_9, &VAR_10, VAR_8);
 if (!VAR_11)
  VAR_9->u.nan.conf = VAR_10;

 return VAR_11;
}
