
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int flags; scalar_t__ center_freq; scalar_t__ dfs_state; int dfs_state_entered; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ieee80211_channel *VAR_3,
        struct ieee80211_channel *VAR_4)
{
 if (!(VAR_3->flags & VAR_1) ||
     !(VAR_4->flags & VAR_1))
  return;

 if (VAR_3->flags & VAR_0 ||
     VAR_4->flags & VAR_0)
  return;

 if (VAR_4->center_freq == VAR_3->center_freq &&
     VAR_3->dfs_state == VAR_2) {
  VAR_3->dfs_state = VAR_4->dfs_state;
  VAR_3->dfs_state_entered = VAR_4->dfs_state_entered;
 }
}
