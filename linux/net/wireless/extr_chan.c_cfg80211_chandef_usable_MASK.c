
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct wiphy {TYPE_1__** bands; } ;
struct ieee80211_sta_vht_cap {int cap; int vht_supported; } ;
struct ieee80211_sta_ht_cap {int cap; int ht_supported; } ;
struct ieee80211_edmg {scalar_t__ channels; } ;
struct TYPE_5__ {int bw_config; int channels; } ;
struct cfg80211_chan_def {int width; int center_freq1; int center_freq2; TYPE_3__* chan; TYPE_2__ edmg; } ;
struct TYPE_6__ {size_t band; int center_freq; int flags; int hw_value; } ;
struct TYPE_4__ {struct ieee80211_edmg edmg_cap; struct ieee80211_sta_vht_cap vht_cap; struct ieee80211_sta_ht_cap ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cfg80211_chan_def const*) ;
 int FUNC_3 (struct wiphy*,int ,int ,int ,struct ieee80211_edmg*) ;
 int FUNC_4 (struct wiphy*,int,int,int) ;

bool FUNC_5(struct wiphy *VAR_12,
        const struct cfg80211_chan_def *VAR_13,
        u32 VAR_14)
{
 struct ieee80211_sta_ht_cap *VAR_15;
 struct ieee80211_sta_vht_cap *VAR_16;
 struct ieee80211_edmg *VAR_17;
 u32 VAR_18, VAR_19, VAR_20;

 if (FUNC_0(!FUNC_2(VAR_13)))
  return 0;

 VAR_15 = &VAR_12->bands[VAR_13->chan->band]->ht_cap;
 VAR_16 = &VAR_12->bands[VAR_13->chan->band]->vht_cap;
 VAR_17 = &VAR_12->bands[VAR_13->chan->band]->edmg_cap;

 if (VAR_17->channels &&
     !FUNC_3(VAR_12,
      VAR_13->edmg.channels,
      VAR_13->edmg.bw_config,
      VAR_13->chan->hw_value,
      VAR_17))
  return 0;

 VAR_19 = VAR_13->chan->center_freq;

 switch (VAR_13->width) {
 case 130:
  VAR_18 = 5;
  break;
 case 135:
  VAR_14 |= VAR_0;
  VAR_18 = 10;
  break;
 case 133:
  if (!VAR_15->ht_supported)
   return 0;

 case 132:
  VAR_14 |= VAR_2;
  VAR_18 = 20;
  break;
 case 131:
  VAR_18 = 40;
  if (!VAR_15->ht_supported)
   return 0;
  if (!(VAR_15->cap & VAR_8) ||
      VAR_15->cap & VAR_7)
   return 0;
  if (VAR_13->center_freq1 < VAR_19 &&
      VAR_13->chan->flags & VAR_4)
   return 0;
  if (VAR_13->center_freq1 > VAR_19 &&
      VAR_13->chan->flags & VAR_5)
   return 0;
  break;
 case 128:
  VAR_20 = VAR_16->cap & VAR_11;
  if (VAR_20 != VAR_10)
   return 0;

 case 129:
  if (!VAR_16->vht_supported)
   return 0;
  VAR_14 |= VAR_3;
  VAR_18 = 80;
  break;
 case 134:
  if (!VAR_16->vht_supported)
   return 0;
  VAR_20 = VAR_16->cap & VAR_11;
  if (VAR_20 != VAR_9 &&
      VAR_20 != VAR_10)
   return 0;
  VAR_14 |= VAR_1;
  VAR_18 = 160;
  break;
 default:
  FUNC_1(1);
  return 0;
 }
 if (VAR_18 > 20)
  VAR_14 |= VAR_6;


 if (VAR_18 < 20)
  VAR_14 |= VAR_6;


 if (!FUNC_4(VAR_12, VAR_13->center_freq1,
      VAR_18, VAR_14))
  return 0;

 if (!VAR_13->center_freq2)
  return 1;
 return FUNC_4(VAR_12, VAR_13->center_freq2,
        VAR_18, VAR_14);
}
