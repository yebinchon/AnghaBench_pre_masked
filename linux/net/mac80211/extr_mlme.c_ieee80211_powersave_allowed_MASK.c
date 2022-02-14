
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int dummy; } ;
struct ieee80211_if_managed {int flags; int bssid; int have_beacon; int associated; scalar_t__ broken_ap; int powersave; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sta_info* FUNC_2 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_3 (struct sta_info*,int ) ;

__attribute__((used)) static bool FUNC_4(struct ieee80211_sub_if_data *VAR_2)
{
 struct ieee80211_if_managed *VAR_3 = &VAR_2->u.mgd;
 struct sta_info *VAR_4 = ((void*)0);
 bool VAR_5 = 0;

 if (!VAR_3->powersave)
  return 0;

 if (VAR_3->broken_ap)
  return 0;

 if (!VAR_3->associated)
  return 0;

 if (VAR_3->flags & VAR_0)
  return 0;

 if (!VAR_3->have_beacon)
  return 0;

 FUNC_0();
 VAR_4 = FUNC_2(VAR_2, VAR_3->bssid);
 if (VAR_4)
  VAR_5 = FUNC_3(VAR_4, VAR_1);
 FUNC_1();

 return VAR_5;
}
