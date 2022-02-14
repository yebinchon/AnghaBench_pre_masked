
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct ieee80211_channel {int flags; int dfs_state; int dfs_state_entered; } ;
typedef enum nl80211_dfs_state { ____Placeholder_nl80211_dfs_state } nl80211_dfs_state ;


 int VAR_0 ;
 struct ieee80211_channel* FUNC_0 (struct wiphy*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct wiphy *VAR_2, u32 VAR_3,
      u32 VAR_4,
      enum nl80211_dfs_state VAR_5)
{
 struct ieee80211_channel *VAR_6;
 u32 VAR_7;

 for (VAR_7 = VAR_3 - VAR_4/2 + 10;
      VAR_7 <= VAR_3 + VAR_4/2 - 10;
      VAR_7 += 20) {
  VAR_6 = FUNC_0(VAR_2, VAR_7);
  if (!VAR_6 || !(VAR_6->flags & VAR_0))
   continue;

  VAR_6->dfs_state = VAR_5;
  VAR_6->dfs_state_entered = VAR_1;
 }
}
