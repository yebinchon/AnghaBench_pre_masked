
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {TYPE_3__* wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; scalar_t__ fixed; } ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int bitrate; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct cfg80211_bitrate_mask {TYPE_2__* control; } ;
typedef int mask ;
struct TYPE_6__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_5__ {int legacy; } ;
struct TYPE_4__ {int set_bitrate_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cfg80211_bitrate_mask*,int ,int) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,int *,struct cfg80211_bitrate_mask*) ;
 struct cfg80211_registered_device* FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
     struct iw_request_info *VAR_4,
     struct iw_param *VAR_5, char *VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_3->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_8 = FUNC_2(VAR_7->wiphy);
 struct cfg80211_bitrate_mask VAR_9;
 u32 VAR_10, VAR_11;
 struct ieee80211_supported_band *VAR_12;
 int VAR_13, VAR_14;
 bool VAR_15 = 0;

 if (!VAR_8->ops->set_bitrate_mask)
  return -VAR_1;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 VAR_10 = 0;
 VAR_11 = (u32)-1;

 if (VAR_5->value < 0) {

 } else if (VAR_5->fixed) {
  VAR_10 = VAR_5->value / 100000;
 } else {
  VAR_11 = VAR_5->value / 100000;
 }

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  VAR_12 = VAR_7->wiphy->bands[VAR_13];
  if (VAR_12 == ((void*)0))
   continue;
  for (VAR_14 = 0; VAR_14 < VAR_12->n_bitrates; VAR_14++) {
   struct ieee80211_rate *VAR_16 = &VAR_12->bitrates[VAR_14];
   if (VAR_10 == VAR_16->bitrate) {
    VAR_9.control[VAR_13].legacy = 1 << VAR_14;
    VAR_15 = 1;
    break;
   }
   if (VAR_16->bitrate <= VAR_11) {
    VAR_9.control[VAR_13].legacy |= 1 << VAR_14;
    VAR_15 = 1;
   }
  }
 }

 if (!VAR_15)
  return -VAR_0;

 return FUNC_1(VAR_8, VAR_3, ((void*)0), &VAR_9);
}
