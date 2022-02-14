
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct sta_info {size_t ptk_idx; int * ptk; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_4__ {int wiphy; } ;
struct ieee80211_local {int key_mtx; TYPE_2__ hw; } ;
struct TYPE_3__ {int flags; } ;
struct ieee80211_key {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_key*) ;
 struct ieee80211_key* FUNC_1 (struct ieee80211_local*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sta_info* FUNC_4 (struct ieee80211_sub_if_data*,size_t const*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_sub_if_data *VAR_3,
       const u8 *VAR_4, u8 VAR_5)
{
 struct ieee80211_local *VAR_6 = VAR_3->local;
 struct ieee80211_key *VAR_7;
 struct sta_info *VAR_8;
 int VAR_9 = -VAR_0;

 if (!FUNC_5(VAR_6->hw.wiphy,
         VAR_2))
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_3, VAR_4);

 if (!VAR_8)
  return -VAR_0;

 if (VAR_8->ptk_idx == VAR_5)
  return 0;

 FUNC_2(&VAR_6->key_mtx);
 VAR_7 = FUNC_1(VAR_6, VAR_8->ptk[VAR_5]);

 if (VAR_7 && VAR_7->conf.flags & VAR_1)
  VAR_9 = FUNC_0(VAR_7);

 FUNC_3(&VAR_6->key_mtx);
 return VAR_9;
}
