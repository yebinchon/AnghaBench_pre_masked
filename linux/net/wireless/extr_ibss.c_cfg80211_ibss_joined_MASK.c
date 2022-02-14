
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {int event_lock; int event_list; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_registered_device {int event_work; } ;
struct TYPE_2__ {struct ieee80211_channel* channel; int bssid; } ;
struct cfg80211_event {int list; TYPE_1__ ij; int type; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 struct cfg80211_event* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct net_device*,int const*,struct ieee80211_channel*) ;
 struct cfg80211_registered_device* FUNC_8 (int ) ;

void FUNC_9(struct net_device *VAR_3, const u8 *VAR_4,
     struct ieee80211_channel *VAR_5, gfp_t VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_3->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_8 = FUNC_8(VAR_7->wiphy);
 struct cfg80211_event *VAR_9;
 unsigned long VAR_10;

 FUNC_7(VAR_3, VAR_4, VAR_5);

 if (FUNC_0(!VAR_5))
  return;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_6);
 if (!VAR_9)
  return;

 VAR_9->type = VAR_1;
 FUNC_3(VAR_9->ij.bssid, VAR_4, VAR_0);
 VAR_9->ij.channel = VAR_5;

 FUNC_5(&VAR_7->event_lock, VAR_10);
 FUNC_2(&VAR_9->list, &VAR_7->event_list);
 FUNC_6(&VAR_7->event_lock, VAR_10);
 FUNC_4(VAR_2, &VAR_8->event_work);
}
