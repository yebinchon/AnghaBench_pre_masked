
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {TYPE_1__* chan; } ;
struct TYPE_10__ {TYPE_6__ chandef; } ;
struct TYPE_11__ {TYPE_4__ ibss; } ;
struct wireless_dev {scalar_t__ ssid_len; int ssid; int * connect_keys; TYPE_5__ wext; TYPE_6__ chandef; int ibss_dfs_possible; int ibss_fixed; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_3__* bitrates; } ;
struct TYPE_8__ {struct ieee80211_supported_band** bands; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; } ;
struct cfg80211_ibss_params {scalar_t__ wep_tx_key; scalar_t__ ssid_len; int ssid; TYPE_6__ chandef; int wep_keys; int userspace_handles_dfs; int channel_fixed; int basic_rates; } ;
struct cfg80211_cached_keys {scalar_t__ def; int params; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_9__ {int flags; } ;
struct TYPE_7__ {int band; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_ibss_params*) ;

int FUNC_7(struct cfg80211_registered_device *VAR_6,
    struct net_device *VAR_7,
    struct cfg80211_ibss_params *VAR_8,
    struct cfg80211_cached_keys *VAR_9)
{
 struct wireless_dev *VAR_10 = VAR_7->ieee80211_ptr;
 int VAR_11;

 FUNC_0();
 FUNC_1(VAR_10);

 if (VAR_10->ssid_len)
  return -VAR_0;

 if (!VAR_8->basic_rates) {





  struct ieee80211_supported_band *VAR_12;
  enum nl80211_band VAR_13;
  u32 VAR_14;
  int VAR_15;

  VAR_13 = VAR_8->chandef.chan->band;
  if (VAR_13 == VAR_4 ||
      VAR_13 == VAR_5)
   VAR_14 = VAR_2;
  else
   VAR_14 = VAR_3;

  VAR_12 = VAR_6->wiphy.bands[VAR_13];
  for (VAR_15 = 0; VAR_15 < VAR_12->n_bitrates; VAR_15++) {
   if (VAR_12->bitrates[VAR_15].flags & VAR_14)
    VAR_8->basic_rates |= FUNC_2(VAR_15);
  }
 }

 if (FUNC_3(VAR_9 && VAR_9->def < 0))
  return -VAR_1;

 if (FUNC_3(VAR_10->connect_keys))
  FUNC_4(VAR_10->connect_keys);
 VAR_10->connect_keys = VAR_9;

 VAR_10->ibss_fixed = VAR_8->channel_fixed;
 VAR_10->ibss_dfs_possible = VAR_8->userspace_handles_dfs;
 VAR_10->chandef = VAR_8->chandef;
 if (VAR_9) {
  VAR_8->wep_keys = VAR_9->params;
  VAR_8->wep_tx_key = VAR_9->def;
 }




 VAR_11 = FUNC_6(VAR_6, VAR_7, VAR_8);
 if (VAR_11) {
  VAR_10->connect_keys = ((void*)0);
  return VAR_11;
 }

 FUNC_5(VAR_10->ssid, VAR_8->ssid, VAR_8->ssid_len);
 VAR_10->ssid_len = VAR_8->ssid_len;

 return 0;
}
