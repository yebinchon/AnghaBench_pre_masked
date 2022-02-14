
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wireless_dev {int event_lock; int event_list; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int event_work; } ;
struct TYPE_2__ {size_t ie_len; int locally_generated; int reason; int * ie; } ;
struct cfg80211_event {int list; TYPE_1__ dc; int type; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct cfg80211_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (void*,int const*,size_t) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct cfg80211_registered_device* FUNC_6 (int ) ;

void FUNC_7(struct net_device *VAR_2, u16 VAR_3,
      const u8 *VAR_4, size_t VAR_5,
      bool VAR_6, gfp_t VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_2->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_9 = FUNC_6(VAR_8->wiphy);
 struct cfg80211_event *VAR_10;
 unsigned long VAR_11;

 VAR_10 = FUNC_0(sizeof(*VAR_10) + VAR_5, VAR_7);
 if (!VAR_10)
  return;

 VAR_10->type = VAR_0;
 VAR_10->dc.ie = ((u8 *)VAR_10) + sizeof(*VAR_10);
 VAR_10->dc.ie_len = VAR_5;
 FUNC_2((void *)VAR_10->dc.ie, VAR_4, VAR_5);
 VAR_10->dc.reason = VAR_3;
 VAR_10->dc.locally_generated = VAR_6;

 FUNC_4(&VAR_8->event_lock, VAR_11);
 FUNC_1(&VAR_10->list, &VAR_8->event_list);
 FUNC_5(&VAR_8->event_lock, VAR_11);
 FUNC_3(VAR_1, &VAR_9->event_work);
}
