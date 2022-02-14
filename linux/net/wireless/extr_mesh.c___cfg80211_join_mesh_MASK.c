
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct ieee80211_channel* chan; int center_freq1; int width; } ;
struct wireless_dev {scalar_t__ iftype; int beacon_interval; TYPE_4__ chandef; scalar_t__ mesh_id_len; int ssid; TYPE_4__ preset_chandef; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct mesh_setup {int beacon_interval; TYPE_4__ chandef; scalar_t__ mesh_id_len; int mesh_id; int userspace_handles_dfs; int basic_rates; scalar_t__ is_secure; } ;
struct mesh_config {int dummy; } ;
struct ieee80211_supported_band {int n_channels; int n_bitrates; TYPE_2__* bitrates; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int flags; size_t band; int center_freq; } ;
struct TYPE_10__ {int flags; struct ieee80211_supported_band** bands; } ;
struct cfg80211_registered_device {TYPE_3__ wiphy; TYPE_1__* ops; } ;
typedef enum nl80211_bss_scan_width { ____Placeholder_nl80211_bss_scan_width } nl80211_bss_scan_width ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_9__ {int bitrate; } ;
struct TYPE_8__ {int join_mesh; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,scalar_t__) ;
 int FUNC_6 (struct ieee80211_supported_band*,int) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (struct cfg80211_registered_device*,struct net_device*,struct mesh_config const*,struct mesh_setup*) ;

int FUNC_9(struct cfg80211_registered_device *VAR_13,
    struct net_device *VAR_14,
    struct mesh_setup *VAR_15,
    const struct mesh_config *VAR_16)
{
 struct wireless_dev *VAR_17 = VAR_14->ieee80211_ptr;
 int VAR_18;

 FUNC_2(VAR_7 != VAR_6);

 FUNC_0(VAR_17);

 if (VAR_14->ieee80211_ptr->iftype != VAR_10)
  return -VAR_2;

 if (!(VAR_13->wiphy.flags & VAR_12) &&
       VAR_15->is_secure)
  return -VAR_2;

 if (VAR_17->mesh_id_len)
  return -VAR_0;

 if (!VAR_15->mesh_id_len)
  return -VAR_1;

 if (!VAR_13->ops->join_mesh)
  return -VAR_2;

 if (!VAR_15->chandef.chan) {

  VAR_15->chandef = VAR_17->preset_chandef;
 }

 if (!VAR_15->chandef.chan) {

  enum nl80211_band VAR_19;

  for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++) {
   struct ieee80211_supported_band *VAR_20;
   struct ieee80211_channel *VAR_21;
   int VAR_22;

   VAR_20 = VAR_13->wiphy.bands[VAR_19];
   if (!VAR_20)
    continue;

   for (VAR_22 = 0; VAR_22 < VAR_20->n_channels; VAR_22++) {
    VAR_21 = &VAR_20->channels[VAR_22];
    if (VAR_21->flags & (VAR_4 |
         VAR_3 |
         VAR_5))
     continue;
    VAR_15->chandef.chan = VAR_21;
    break;
   }

   if (VAR_15->chandef.chan)
    break;
  }


  if (!VAR_15->chandef.chan)
   return -VAR_1;

  VAR_15->chandef.width = VAR_9;
  VAR_15->chandef.center_freq1 = VAR_15->chandef.chan->center_freq;
 }





 if (!VAR_15->basic_rates) {
  enum nl80211_bss_scan_width VAR_23;
  struct ieee80211_supported_band *VAR_24 =
    VAR_13->wiphy.bands[VAR_15->chandef.chan->band];

  if (VAR_15->chandef.chan->band == VAR_8) {
   int VAR_25;
   for (VAR_25 = 0; VAR_25 < VAR_24->n_bitrates; VAR_25++) {
    if (VAR_24->bitrates[VAR_25].bitrate == 10) {
     VAR_15->basic_rates = FUNC_1(VAR_25);
     break;
    }
   }
  } else {
   VAR_23 = FUNC_4(&VAR_15->chandef);
   VAR_15->basic_rates = FUNC_6(VAR_24,
               VAR_23);
  }
 }

 VAR_18 = FUNC_3(&VAR_13->wiphy,
         &VAR_15->chandef,
         VAR_10);
 if (VAR_18 < 0)
  return VAR_18;
 if (VAR_18 > 0 && !VAR_15->userspace_handles_dfs)
  return -VAR_1;

 if (!FUNC_5(&VAR_13->wiphy, &VAR_15->chandef,
         VAR_10))
  return -VAR_1;

 VAR_18 = FUNC_8(VAR_13, VAR_14, VAR_16, VAR_15);
 if (!VAR_18) {
  FUNC_7(VAR_17->ssid, VAR_15->mesh_id, VAR_15->mesh_id_len);
  VAR_17->mesh_id_len = VAR_15->mesh_id_len;
  VAR_17->chandef = VAR_15->chandef;
  VAR_17->beacon_interval = VAR_15->beacon_interval;
 }

 return VAR_18;
}
