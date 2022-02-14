
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wiphy {int dummy; } ;
struct ieee80211_channel {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct ieee80211_channel* FUNC_2 (struct wiphy*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_2,
         u32 VAR_3,
         u32 VAR_4)
{
 struct ieee80211_channel *VAR_5;
 u32 VAR_6, VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_3, VAR_4);
 VAR_8 = FUNC_0(VAR_3, VAR_4);

 for (VAR_6 = VAR_7; VAR_6 <= VAR_8; VAR_6 += 20) {
  VAR_5 = FUNC_2(VAR_2, VAR_6);
  if (!VAR_5)
   return -VAR_0;

  if (VAR_5->flags & VAR_1)
   return 1;
 }
 return 0;
}
