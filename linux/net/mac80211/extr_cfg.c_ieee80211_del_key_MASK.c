
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wiphy {int dummy; } ;
struct sta_info {int * gtk; int * ptk; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; int * keys; struct ieee80211_local* local; } ;
struct ieee80211_local {int sta_mtx; int key_mtx; } ;
struct ieee80211_key {int dummy; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ieee80211_key*,int) ;
 struct ieee80211_key* FUNC_2 (struct ieee80211_local*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sta_info* FUNC_5 (struct ieee80211_sub_if_data*,size_t const*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_2, struct net_device *VAR_3,
        u8 VAR_4, bool VAR_5, const u8 *VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = FUNC_0(VAR_3);
 struct ieee80211_local *VAR_8 = VAR_7->local;
 struct sta_info *VAR_9;
 struct ieee80211_key *VAR_10 = ((void*)0);
 int VAR_11;

 FUNC_3(&VAR_8->sta_mtx);
 FUNC_3(&VAR_8->key_mtx);

 if (VAR_6) {
  VAR_11 = -VAR_0;

  VAR_9 = FUNC_5(VAR_7, VAR_6);
  if (!VAR_9)
   goto out_unlock;

  if (VAR_5)
   VAR_10 = FUNC_2(VAR_8, VAR_9->ptk[VAR_4]);
  else
   VAR_10 = FUNC_2(VAR_8, VAR_9->gtk[VAR_4]);
 } else
  VAR_10 = FUNC_2(VAR_8, VAR_7->keys[VAR_4]);

 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto out_unlock;
 }

 FUNC_1(VAR_10, VAR_7->vif.type == VAR_1);

 VAR_11 = 0;
 out_unlock:
 FUNC_4(&VAR_8->key_mtx);
 FUNC_4(&VAR_8->sta_mtx);

 return VAR_11;
}
