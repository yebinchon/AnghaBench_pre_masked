
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct ieee80211_edmg {int channels; int bw_config; } ;
struct ieee80211_channel {int flags; } ;
typedef enum ieee80211_edmg_bw_config { ____Placeholder_ieee80211_edmg_bw_config } ieee80211_edmg_bw_config ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 struct ieee80211_channel* FUNC_2 (struct wiphy*,int) ;

__attribute__((used)) static bool FUNC_3(struct wiphy *VAR_2, u8 VAR_3,
     enum ieee80211_edmg_bw_config VAR_4,
     int VAR_5,
     struct ieee80211_edmg *VAR_6)
{
 struct ieee80211_channel *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10 = 0;

 if (!VAR_3 && !VAR_4)
  return 1;

 if ((!VAR_3 && VAR_4) ||
     (VAR_3 && !VAR_4))
  return 0;

 if (!(VAR_3 & FUNC_0(VAR_5 - 1)))
  return 0;


 for (VAR_8 = 0; VAR_8 < 6; VAR_8++) {
  if (!(VAR_3 & FUNC_0(VAR_8)))
   continue;

  if (!(VAR_6->channels & FUNC_0(VAR_8)))
   return 0;

  VAR_10++;

  VAR_9 = FUNC_1(VAR_8 + 1,
            VAR_1);
  VAR_7 = FUNC_2(VAR_2, VAR_9);
  if (!VAR_7 || VAR_7->flags & VAR_0)
   return 0;
 }


 if (VAR_10 > 4)
  return 0;




 if ((VAR_4 % 4) > (VAR_6->bw_config % 4))
  return 0;

 if (VAR_4 > VAR_6->bw_config)
  return 0;

 return 1;
}
