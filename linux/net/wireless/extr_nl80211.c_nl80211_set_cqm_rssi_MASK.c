
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {scalar_t__ iftype; struct cfg80211_cqm_config* cqm_config; } ;
struct net_device {int wiphy; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_cqm_config {int n_rssi_thresholds; int rssi_thresholds; int rssi_hyst; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {scalar_t__ set_cqm_rssi_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;
 struct cfg80211_cqm_config* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,scalar_t__ const*,int) ;
 int FUNC_4 (struct net_device*,struct net_device*,scalar_t__ const,int ) ;
 int FUNC_5 (struct wireless_dev*) ;
 int FUNC_6 (struct wireless_dev*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct genl_info *VAR_8,
    const s32 *VAR_9, int VAR_10,
    u32 VAR_11)
{
 struct cfg80211_registered_device *VAR_12 = VAR_8->user_ptr[0];
 struct net_device *VAR_13 = VAR_8->user_ptr[1];
 struct wireless_dev *VAR_14 = VAR_13->ieee80211_ptr;
 int VAR_15, VAR_16;
 s32 VAR_17 = VAR_7;


 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  if (VAR_9[VAR_15] > 0 || VAR_9[VAR_15] <= VAR_17)
   return -VAR_0;

  VAR_17 = VAR_9[VAR_15];
 }

 if (VAR_14->iftype != VAR_6 &&
     VAR_14->iftype != VAR_5)
  return -VAR_2;

 FUNC_5(VAR_14);
 FUNC_0(VAR_14);
 FUNC_6(VAR_14);

 if (VAR_10 <= 1 && VAR_12->ops->set_cqm_rssi_config) {
  if (VAR_10 == 0 || VAR_9[0] == 0)
   return FUNC_4(VAR_12, VAR_13, 0, 0);

  return FUNC_4(VAR_12, VAR_13,
      VAR_9[0], VAR_11);
 }

 if (!FUNC_7(&VAR_12->wiphy,
         VAR_4))
  return -VAR_2;

 if (VAR_10 == 1 && VAR_9[0] == 0)
  VAR_10 = 0;

 FUNC_5(VAR_14);
 if (VAR_10) {
  struct cfg80211_cqm_config *VAR_18;

  VAR_18 = FUNC_2(sizeof(struct cfg80211_cqm_config) +
         VAR_10 * sizeof(s32), VAR_3);
  if (!VAR_18) {
   VAR_16 = -VAR_1;
   goto unlock;
  }

  VAR_18->rssi_hyst = VAR_11;
  VAR_18->n_rssi_thresholds = VAR_10;
  FUNC_3(VAR_18->rssi_thresholds, VAR_9,
         VAR_10 * sizeof(s32));

  VAR_14->cqm_config = VAR_18;
 }

 VAR_16 = FUNC_1(VAR_12, VAR_13);

unlock:
 FUNC_6(VAR_14);

 return VAR_16;
}
