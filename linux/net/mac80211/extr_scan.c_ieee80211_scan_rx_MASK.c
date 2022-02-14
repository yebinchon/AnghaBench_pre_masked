
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_rx_status {int freq; } ;
struct ieee80211_mgmt {int da; int frame_control; } ;
struct TYPE_2__ {int wiphy; } ;
struct ieee80211_local {TYPE_1__ hw; int sched_scan_req; int scan_req; int sched_scan_sdata; int scan_sdata; } ;
struct ieee80211_channel {int flags; } ;
struct ieee80211_bss {int dummy; } ;
struct cfg80211_sched_scan_request {int flags; } ;
struct cfg80211_scan_request {int flags; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 struct ieee80211_bss* FUNC_1 (struct ieee80211_local*,struct ieee80211_rx_status*,struct ieee80211_mgmt*,int,struct ieee80211_channel*) ;
 struct ieee80211_channel* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_local*,struct ieee80211_bss*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;
 void* FUNC_8 (int ) ;

void FUNC_9(struct ieee80211_local *VAR_1, struct sk_buff *VAR_2)
{
 struct ieee80211_rx_status *VAR_3 = FUNC_0(VAR_2);
 struct ieee80211_sub_if_data *VAR_4, *VAR_5;
 struct ieee80211_mgmt *VAR_6 = (void *)VAR_2->data;
 struct ieee80211_bss *VAR_7;
 struct ieee80211_channel *VAR_8;

 if (VAR_2->len < 24 ||
     (!FUNC_4(VAR_6->frame_control) &&
      !FUNC_3(VAR_6->frame_control)))
  return;

 VAR_4 = FUNC_8(VAR_1->scan_sdata);
 VAR_5 = FUNC_8(VAR_1->sched_scan_sdata);

 if (FUNC_7(!VAR_4 && !VAR_5))
  return;

 if (FUNC_4(VAR_6->frame_control)) {
  struct cfg80211_scan_request *VAR_9;
  struct cfg80211_sched_scan_request *VAR_10;
  u32 VAR_11 = 0, VAR_12 = 0;

  VAR_9 = FUNC_8(VAR_1->scan_req);
  VAR_10 = FUNC_8(VAR_1->sched_scan_req);

  if (VAR_9)
   VAR_11 = VAR_9->flags;

  if (VAR_10)
   VAR_12 = VAR_10->flags;




  if (!FUNC_6(VAR_4, VAR_11,
       VAR_6->da) &&
      !FUNC_6(VAR_5, VAR_12,
       VAR_6->da))
   return;
 }

 VAR_8 = FUNC_2(VAR_1->hw.wiphy, VAR_3->freq);

 if (!VAR_8 || VAR_8->flags & VAR_0)
  return;

 VAR_7 = FUNC_1(VAR_1, VAR_3,
     VAR_6, VAR_2->len,
     VAR_8);
 if (VAR_7)
  FUNC_5(VAR_1, VAR_7);
}
