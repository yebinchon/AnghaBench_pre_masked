
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct wiphy*,struct cfg80211_chan_def*) ;
 scalar_t__ FUNC_1 (struct wiphy*,struct cfg80211_chan_def*,int) ;
 int FUNC_2 (struct wiphy*,struct cfg80211_chan_def*,int) ;
 int FUNC_3 (struct wiphy*,struct cfg80211_chan_def*,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct wiphy *VAR_3,
         struct cfg80211_chan_def *VAR_4,
         enum nl80211_iftype VAR_5,
         bool VAR_6)
{
 bool VAR_7;
 u32 VAR_8 = VAR_0 |
          VAR_2;

 FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_6)
  VAR_8 |= VAR_1;

 if (FUNC_1(VAR_3, VAR_4, VAR_5) > 0 &&
     FUNC_0(VAR_3, VAR_4)) {

  VAR_8 = VAR_0;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_8);

 FUNC_4(VAR_7);
 return VAR_7;
}
