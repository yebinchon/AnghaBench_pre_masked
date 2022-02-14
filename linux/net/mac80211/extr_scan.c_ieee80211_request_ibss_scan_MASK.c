
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_9__ {int ssid_len; int ssid; } ;
struct TYPE_8__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {int mtx; TYPE_5__* int_scan_req; TYPE_4__ scan_ssid; TYPE_3__ hw; scalar_t__ scan_req; } ;
struct ieee80211_channel {int flags; } ;
typedef enum nl80211_bss_scan_width { ____Placeholder_nl80211_bss_scan_width } nl80211_bss_scan_width ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_10__ {int n_channels; int n_ssids; int scan_width; TYPE_4__* ssids; struct ieee80211_channel** channels; } ;
struct TYPE_7__ {TYPE_1__** bands; } ;
struct TYPE_6__ {int n_channels; struct ieee80211_channel* channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,TYPE_5__*) ;
 int FUNC_2 (int ,int const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ieee80211_sub_if_data *VAR_5,
    const u8 *VAR_6, u8 VAR_7,
    struct ieee80211_channel **VAR_8,
    unsigned int VAR_9,
    enum nl80211_bss_scan_width VAR_10)
{
 struct ieee80211_local *VAR_11 = VAR_5->local;
 int VAR_12 = -VAR_0, VAR_13, VAR_14 = 0;
 enum nl80211_band VAR_15;

 FUNC_3(&VAR_11->mtx);


 if (VAR_11->scan_req)
  goto unlock;


 if (!VAR_8) {
  int VAR_16;

  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
   if (!VAR_11->hw.wiphy->bands[VAR_15])
    continue;

   VAR_16 = VAR_11->hw.wiphy->bands[VAR_15]->n_channels;
   for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
    struct ieee80211_channel *VAR_17 =
        &VAR_11->hw.wiphy->bands[VAR_15]->channels[VAR_13];

    if (VAR_17->flags & (VAR_2 |
           VAR_1))
     continue;

    VAR_11->int_scan_req->channels[VAR_14] = VAR_17;
    VAR_14++;
   }
  }

  if (FUNC_0(VAR_14 == 0))
   goto unlock;

  VAR_11->int_scan_req->n_channels = VAR_14;
 } else {
  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
   if (VAR_8[VAR_13]->flags & (VAR_2 |
        VAR_1))
    continue;

   VAR_11->int_scan_req->channels[VAR_14] = VAR_8[VAR_13];
   VAR_14++;
  }

  if (FUNC_0(VAR_14 == 0))
   goto unlock;

  VAR_11->int_scan_req->n_channels = VAR_14;
 }

 VAR_11->int_scan_req->ssids = &VAR_11->scan_ssid;
 VAR_11->int_scan_req->n_ssids = 1;
 VAR_11->int_scan_req->scan_width = VAR_10;
 FUNC_2(VAR_11->int_scan_req->ssids[0].ssid, VAR_6, VAR_3);
 VAR_11->int_scan_req->ssids[0].ssid_len = VAR_7;

 VAR_12 = FUNC_1(VAR_5, VAR_5->local->int_scan_req);
 unlock:
 FUNC_4(&VAR_11->mtx);
 return VAR_12;
}
