
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wiphy {int dummy; } ;
struct ieee80211_channel {int flags; scalar_t__ dfs_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct ieee80211_channel* FUNC_2 (struct wiphy*,scalar_t__) ;
 int FUNC_3 (struct wiphy*,int ) ;

__attribute__((used)) static bool FUNC_4(struct wiphy *VAR_5,
          u32 VAR_6,
          u32 VAR_7)
{
 struct ieee80211_channel *VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 bool VAR_12;

 VAR_12 = FUNC_3(VAR_5,
           VAR_4);

 VAR_10 = FUNC_1(VAR_6, VAR_7);
 VAR_11 = FUNC_0(VAR_6, VAR_7);






 for (VAR_9 = VAR_10; VAR_9 <= VAR_11; VAR_9 += 20) {
  VAR_8 = FUNC_2(VAR_5, VAR_9);
  if (!VAR_8)
   return 0;

  if (VAR_8->flags & VAR_0)
   return 0;

  if ((VAR_8->flags & VAR_1) &&
      (VAR_8->dfs_state != VAR_2) &&
      !(VAR_8->dfs_state == VAR_3 && VAR_12))
   return 0;
 }

 return 1;
}
