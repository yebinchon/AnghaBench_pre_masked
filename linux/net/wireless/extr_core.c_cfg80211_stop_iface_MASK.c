
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int event_lock; int event_list; } ;
struct wiphy {int dummy; } ;
struct cfg80211_registered_device {int event_work; } ;
struct cfg80211_event {int list; int type; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct cfg80211_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct wiphy*,struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_6 (struct wiphy*) ;

void FUNC_7(struct wiphy *VAR_2, struct wireless_dev *VAR_3,
    gfp_t VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = FUNC_6(VAR_2);
 struct cfg80211_event *VAR_6;
 unsigned long VAR_7;

 FUNC_5(VAR_2, VAR_3);

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_4);
 if (!VAR_6)
  return;

 VAR_6->type = VAR_0;

 FUNC_3(&VAR_3->event_lock, VAR_7);
 FUNC_1(&VAR_6->list, &VAR_3->event_list);
 FUNC_4(&VAR_3->event_lock, VAR_7);
 FUNC_2(VAR_1, &VAR_5->event_work);
}
