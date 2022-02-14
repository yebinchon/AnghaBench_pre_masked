
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ht_operation {int ht_param; } ;
struct cfg80211_chan_def {int chan; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cfg80211_chan_def*,int ,int) ;

bool FUNC_1(const struct ieee80211_ht_operation *VAR_5,
          struct cfg80211_chan_def *VAR_6)
{
 enum nl80211_channel_type VAR_7;

 if (!VAR_5)
  return 0;

 switch (VAR_5->ht_param & VAR_0) {
 case 128:
  VAR_7 = VAR_1;
  break;
 case 130:
  VAR_7 = VAR_3;
  break;
 case 129:
  VAR_7 = VAR_2;
  break;
 default:
  VAR_7 = VAR_4;
  return 0;
 }

 FUNC_0(VAR_6, VAR_6->chan, VAR_7);
 return 1;
}
