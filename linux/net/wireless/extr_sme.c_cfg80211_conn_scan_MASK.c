
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wireless_dev {int netdev; TYPE_3__* conn; TYPE_4__* wiphy; } ;
struct ieee80211_supported_band {int n_bitrates; int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int band; int flags; } ;
struct cfg80211_scan_request {int* rates; int n_channels; int n_ssids; int scan_start; int * wiphy; struct wireless_dev* wdev; int bssid; TYPE_1__* ssids; struct ieee80211_channel** channels; } ;
struct cfg80211_registered_device {struct cfg80211_scan_request* scan_req; int wiphy; scalar_t__ scan_msg; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_9__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_7__ {int ssid_len; int ssid; struct ieee80211_channel* channel; } ;
struct TYPE_8__ {int state; TYPE_2__ params; } ;
struct TYPE_6__ {int ssid_len; int ssid; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_7 ;
 int FUNC_5 (struct cfg80211_scan_request*) ;
 struct cfg80211_scan_request* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_9 (struct cfg80211_registered_device*,struct cfg80211_scan_request*) ;
 struct cfg80211_registered_device* FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_11(struct wireless_dev *VAR_8)
{
 struct cfg80211_registered_device *VAR_9 = FUNC_10(VAR_8->wiphy);
 struct cfg80211_scan_request *VAR_10;
 int VAR_11, VAR_12;

 FUNC_0();
 FUNC_1(VAR_8);

 if (VAR_9->scan_req || VAR_9->scan_msg)
  return -VAR_1;

 if (VAR_8->conn->params.channel)
  VAR_11 = 1;
 else
  VAR_11 = FUNC_4(VAR_8->wiphy);

 VAR_10 = FUNC_6(sizeof(*VAR_10) + sizeof(VAR_10->ssids[0]) +
     sizeof(VAR_10->channels[0]) * VAR_11,
     VAR_4);
 if (!VAR_10)
  return -VAR_3;

 if (VAR_8->conn->params.channel) {
  enum nl80211_band VAR_13 = VAR_8->conn->params.channel->band;
  struct ieee80211_supported_band *VAR_14 =
   VAR_8->wiphy->bands[VAR_13];

  if (!VAR_14) {
   FUNC_5(VAR_10);
   return -VAR_2;
  }
  VAR_10->channels[0] = VAR_8->conn->params.channel;
  VAR_10->rates[VAR_13] = (1 << VAR_14->n_bitrates) - 1;
 } else {
  int VAR_15 = 0, VAR_16;
  enum nl80211_band VAR_17;
  struct ieee80211_supported_band *VAR_18;
  struct ieee80211_channel *VAR_19;

  for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
   VAR_18 = VAR_8->wiphy->bands[VAR_17];
   if (!VAR_18)
    continue;
   for (VAR_16 = 0; VAR_16 < VAR_18->n_channels; VAR_16++) {
    VAR_19 = &VAR_18->channels[VAR_16];
    if (VAR_19->flags & VAR_5)
     continue;
    VAR_10->channels[VAR_15++] = VAR_19;
   }
   VAR_10->rates[VAR_17] = (1 << VAR_18->n_bitrates) - 1;
  }
  VAR_11 = VAR_15;
 }
 VAR_10->n_channels = VAR_11;
 VAR_10->ssids = (void *)&VAR_10->channels[VAR_11];
 VAR_10->n_ssids = 1;

 FUNC_7(VAR_10->ssids[0].ssid, VAR_8->conn->params.ssid,
  VAR_8->conn->params.ssid_len);
 VAR_10->ssids[0].ssid_len = VAR_8->conn->params.ssid_len;

 FUNC_3(VAR_10->bssid);

 VAR_10->wdev = VAR_8;
 VAR_10->wiphy = &VAR_9->wiphy;
 VAR_10->scan_start = VAR_7;

 VAR_9->scan_req = VAR_10;

 VAR_12 = FUNC_9(VAR_9, VAR_10);
 if (!VAR_12) {
  VAR_8->conn->state = VAR_0;
  FUNC_8(VAR_9, VAR_8);
  FUNC_2(VAR_8->netdev);
 } else {
  VAR_9->scan_req = ((void*)0);
  FUNC_5(VAR_10);
 }
 return VAR_12;
}
