
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_chan_def {int chan; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 () ;
 int FUNC_1 (struct wiphy*,struct cfg80211_chan_def*,int,int) ;
 int FUNC_2 (struct wiphy*,int,int ) ;

bool FUNC_3(struct wiphy *VAR_0,
       struct cfg80211_chan_def *VAR_1,
       enum nl80211_iftype VAR_2)
{
 bool VAR_3;

 FUNC_0();







 VAR_3 = !FUNC_2(VAR_0, VAR_2,
         VAR_1->chan);

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
