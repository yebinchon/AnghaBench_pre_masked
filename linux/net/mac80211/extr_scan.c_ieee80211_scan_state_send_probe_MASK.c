
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_7__ {TYPE_5__* chan; } ;
struct TYPE_8__ {TYPE_2__ chandef; } ;
struct TYPE_9__ {TYPE_3__ conf; } ;
struct ieee80211_local {int next_scan_state; TYPE_4__ hw; int scan_addr; int mtx; int scan_sdata; int scan_req; } ;
struct cfg80211_scan_request {int flags; int n_ssids; int * rates; int ie_len; int ie; TYPE_1__* ssids; int bssid; scalar_t__ no_cck; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_10__ {int band; } ;
struct TYPE_6__ {int ssid_len; int ssid; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int ,int ,int ,int ,int ,int ,int ,int ,int ,TYPE_5__*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_local *VAR_8,
         unsigned long *VAR_9)
{
 int VAR_10;
 struct ieee80211_sub_if_data *VAR_11;
 struct cfg80211_scan_request *VAR_12;
 enum nl80211_band VAR_13 = VAR_8->hw.conf.chandef.chan->band;
 u32 VAR_14 = 0, VAR_15;

 VAR_12 = FUNC_2(VAR_8->scan_req,
          FUNC_1(&VAR_8->mtx));

 VAR_15 = VAR_4;
 if (VAR_12->no_cck)
  VAR_15 |= VAR_3;
 if (VAR_12->flags & VAR_5)
  VAR_14 |= VAR_1;
 if (VAR_12->flags & VAR_6)
  VAR_14 |= VAR_2;

 VAR_11 = FUNC_2(VAR_8->scan_sdata,
       FUNC_1(&VAR_8->mtx));

 for (VAR_10 = 0; VAR_10 < VAR_12->n_ssids; VAR_10++)
  FUNC_0(
   VAR_11, VAR_8->scan_addr, VAR_12->bssid,
   VAR_12->ssids[VAR_10].ssid, VAR_12->ssids[VAR_10].ssid_len,
   VAR_12->ie, VAR_12->ie_len,
   VAR_12->rates[VAR_13], VAR_14,
   VAR_15, VAR_8->hw.conf.chandef.chan);





 *VAR_9 = VAR_0;
 VAR_8->next_scan_state = VAR_7;
}
