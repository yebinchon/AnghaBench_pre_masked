
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vht_operation {int center_freq_seg0_idx; int center_freq_seg1_idx; int chan_width; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_ht_operation {int operation_mode; } ;
struct cfg80211_chan_def {int center_freq1; int center_freq2; void* width; TYPE_1__* chan; } ;
struct TYPE_2__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;




 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_chan_def*) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (int ) ;

bool FUNC_5(struct ieee80211_hw *VAR_6,
    const struct ieee80211_vht_operation *VAR_7,
    const struct ieee80211_ht_operation *VAR_8,
    struct cfg80211_chan_def *VAR_9)
{
 struct cfg80211_chan_def VAR_10 = *VAR_9;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_7 || !VAR_8)
  return 0;

 VAR_13 = VAR_7->center_freq_seg0_idx;
 VAR_14 = VAR_7->center_freq_seg1_idx;
 VAR_15 = (FUNC_4(VAR_8->operation_mode) &
    VAR_0)
   >> VAR_1;


 VAR_16 = VAR_13;
 VAR_17 = VAR_14;
 if (!VAR_14 && FUNC_3(VAR_6, VAR_5))
  VAR_17 = VAR_15;

 VAR_11 = FUNC_2(VAR_16, VAR_9->chan->band);
 VAR_12 = FUNC_2(VAR_17, VAR_9->chan->band);

 switch (VAR_7->chan_width) {
 case 128:

  break;
 case 130:
  VAR_10.width = VAR_3;
  VAR_10.center_freq1 = VAR_11;

  if (VAR_17) {
   unsigned int VAR_18;

   VAR_18 = FUNC_0(VAR_17 - VAR_16);
   if (VAR_18 == 8) {
    VAR_10.width = VAR_2;
    VAR_10.center_freq1 = VAR_12;
   } else if (VAR_18 > 8) {
    VAR_10.width = VAR_4;
    VAR_10.center_freq2 = VAR_12;
   }
  }
  break;
 case 131:

  VAR_10.width = VAR_2;
  VAR_10.center_freq1 = VAR_11;
  break;
 case 129:

  VAR_10.width = VAR_4;
  VAR_10.center_freq1 = VAR_11;
  VAR_10.center_freq2 = VAR_12;
  break;
 default:
  return 0;
 }

 if (!FUNC_1(&VAR_10))
  return 0;

 *VAR_9 = VAR_10;
 return 1;
}
