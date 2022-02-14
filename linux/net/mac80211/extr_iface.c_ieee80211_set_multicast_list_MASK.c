
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int addr_len; int mc; } ;
struct ieee80211_sub_if_data {int flags; struct ieee80211_local* local; } ;
struct ieee80211_local {int reconfig_filter; int hw; int filter_lock; int mc_list; int iff_allmultis; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_0(VAR_2);
 struct ieee80211_local *VAR_4 = VAR_3->local;
 int VAR_5, VAR_6;

 VAR_5 = !!(VAR_2->flags & VAR_1);
 VAR_6 = !!(VAR_3->flags & VAR_0);

 if (VAR_5 != VAR_6) {
  if (VAR_2->flags & VAR_1)
   FUNC_3(&VAR_4->iff_allmultis);
  else
   FUNC_2(&VAR_4->iff_allmultis);
  VAR_3->flags ^= VAR_0;
 }

 FUNC_5(&VAR_4->filter_lock);
 FUNC_1(&VAR_4->mc_list, &VAR_2->mc, VAR_2->addr_len);
 FUNC_6(&VAR_4->filter_lock);
 FUNC_4(&VAR_4->hw, &VAR_4->reconfig_filter);
}
