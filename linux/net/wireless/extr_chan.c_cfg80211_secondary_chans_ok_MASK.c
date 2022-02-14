
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wiphy {int dummy; } ;
struct ieee80211_channel {scalar_t__ flags; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct ieee80211_channel* FUNC_2 (struct wiphy*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct wiphy *VAR_0,
     u32 VAR_1, u32 VAR_2,
     u32 VAR_3)
{
 struct ieee80211_channel *VAR_4;
 u32 VAR_5, VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 VAR_7 = FUNC_0(VAR_1, VAR_2);

 for (VAR_5 = VAR_6; VAR_5 <= VAR_7; VAR_5 += 20) {
  VAR_4 = FUNC_2(VAR_0, VAR_5);
  if (!VAR_4 || VAR_4->flags & VAR_3)
   return 0;
 }

 return 1;
}
