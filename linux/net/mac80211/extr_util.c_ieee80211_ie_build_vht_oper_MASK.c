
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_vht_operation {int center_freq_seg0_idx; int center_freq_seg1_idx; int basic_mcs_set; void* chan_width; } ;
struct ieee80211_sta_vht_cap {int dummy; } ;
struct cfg80211_chan_def {int width; scalar_t__ center_freq1; TYPE_1__* chan; scalar_t__ center_freq2; } ;
struct TYPE_2__ {scalar_t__ center_freq; } ;


 void* VAR_0 ;
 void* VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;

u8 *FUNC_2(u8 *VAR_3, struct ieee80211_sta_vht_cap *VAR_4,
    const struct cfg80211_chan_def *VAR_5)
{
 struct ieee80211_vht_operation *VAR_6;

 *VAR_3++ = VAR_2;
 *VAR_3++ = sizeof(struct ieee80211_vht_operation);
 VAR_6 = (struct ieee80211_vht_operation *)VAR_3;
 VAR_6->center_freq_seg0_idx = FUNC_1(
       VAR_5->center_freq1);
 if (VAR_5->center_freq2)
  VAR_6->center_freq_seg1_idx =
   FUNC_1(VAR_5->center_freq2);
 else
  VAR_6->center_freq_seg1_idx = 0x00;

 switch (VAR_5->width) {
 case 130:




  VAR_6->chan_width = VAR_0;
  VAR_6->center_freq_seg1_idx = VAR_6->center_freq_seg0_idx;
  if (VAR_5->chan->center_freq < VAR_5->center_freq1)
   VAR_6->center_freq_seg0_idx -= 8;
  else
   VAR_6->center_freq_seg0_idx += 8;
  break;
 case 128:




  VAR_6->chan_width = VAR_0;
  break;
 case 129:
  VAR_6->chan_width = VAR_0;
  break;
 default:
  VAR_6->chan_width = VAR_1;
  break;
 }


 VAR_6->basic_mcs_set = FUNC_0(0xffff);

 return VAR_3 + sizeof(struct ieee80211_vht_operation);
}
