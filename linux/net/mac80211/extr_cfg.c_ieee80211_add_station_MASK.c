
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_parameters {int sta_flags_set; struct net_device* vlan; } ;
struct TYPE_8__ {int tdls; } ;
struct sta_info {TYPE_4__ sta; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int associated; } ;
struct TYPE_7__ {TYPE_2__ mgd; } ;
struct TYPE_5__ {scalar_t__ type; int addr; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;
struct ieee80211_local {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sub_if_data* FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int const*,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct sta_info*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct ieee80211_local*,struct sta_info*,struct station_parameters*) ;
 struct sta_info* FUNC_7 (struct ieee80211_sub_if_data*,int const*,int ) ;
 int FUNC_8 (struct ieee80211_local*,struct sta_info*) ;
 int FUNC_9 (struct sta_info*) ;
 scalar_t__ FUNC_10 (struct sta_info*,int ) ;
 struct ieee80211_local* FUNC_11 (struct wiphy*) ;

__attribute__((used)) static int FUNC_12(struct wiphy *VAR_9, struct net_device *VAR_10,
     const u8 *VAR_11,
     struct station_parameters *VAR_12)
{
 struct ieee80211_local *VAR_13 = FUNC_11(VAR_9);
 struct sta_info *VAR_14;
 struct ieee80211_sub_if_data *VAR_15;
 int VAR_16;

 if (VAR_12->vlan) {
  VAR_15 = FUNC_1(VAR_12->vlan);

  if (VAR_15->vif.type != VAR_4 &&
      VAR_15->vif.type != VAR_3)
   return -VAR_0;
 } else
  VAR_15 = FUNC_1(VAR_10);

 if (FUNC_2(VAR_11, VAR_15->vif.addr))
  return -VAR_0;

 if (!FUNC_3(VAR_11))
  return -VAR_0;

 if (VAR_12->sta_flags_set & FUNC_0(VAR_6) &&
     VAR_15->vif.type == VAR_5 &&
     !VAR_15->u.mgd.associated)
  return -VAR_0;

 VAR_14 = FUNC_7(VAR_15, VAR_11, VAR_2);
 if (!VAR_14)
  return -VAR_1;

 if (VAR_12->sta_flags_set & FUNC_0(VAR_6))
  VAR_14->sta.tdls = 1;

 VAR_16 = FUNC_6(VAR_13, VAR_14, VAR_12);
 if (VAR_16) {
  FUNC_8(VAR_13, VAR_14);
  return VAR_16;
 }






 if (!FUNC_10(VAR_14, VAR_8) &&
     FUNC_10(VAR_14, VAR_7))
  FUNC_4(VAR_14);

 VAR_16 = FUNC_9(VAR_14);
 if (VAR_16) {
  FUNC_5();
  return VAR_16;
 }

 FUNC_5();

 return 0;
}
