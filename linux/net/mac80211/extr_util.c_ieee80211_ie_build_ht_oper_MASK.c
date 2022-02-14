
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ieee80211_sta_ht_cap {int cap; int mcs; } ;
struct ieee80211_ht_operation {int stbc_param; int basic_set; int operation_mode; int ht_param; int primary_chan; } ;
struct cfg80211_chan_def {int width; TYPE_1__* chan; int center_freq1; } ;
struct TYPE_2__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;

u8 *FUNC_4(u8 *VAR_9, struct ieee80211_sta_ht_cap *VAR_10,
          const struct cfg80211_chan_def *VAR_11,
          u16 VAR_12, bool VAR_13)
{
 struct ieee80211_ht_operation *VAR_14;

 *VAR_9++ = VAR_8;
 *VAR_9++ = sizeof(struct ieee80211_ht_operation);
 VAR_14 = (struct ieee80211_ht_operation *)VAR_9;
 VAR_14->primary_chan = FUNC_1(
     VAR_11->chan->center_freq);
 switch (VAR_11->width) {
 case 131:
 case 128:
 case 129:
 case 130:
  if (VAR_11->center_freq1 > VAR_11->chan->center_freq)
   VAR_14->ht_param = VAR_2;
  else
   VAR_14->ht_param = VAR_3;
  break;
 default:
  VAR_14->ht_param = VAR_4;
  break;
 }
 if (VAR_10->cap & VAR_0 &&
     VAR_11->width != VAR_7 &&
     VAR_11->width != VAR_6)
  VAR_14->ht_param |= VAR_1;

 if (VAR_13)
  VAR_14->ht_param |= VAR_5;

 VAR_14->operation_mode = FUNC_0(VAR_12);
 VAR_14->stbc_param = 0x0000;



 FUNC_3(&VAR_14->basic_set, 0, 16);
 FUNC_2(&VAR_14->basic_set, &VAR_10->mcs, 10);

 return VAR_9 + sizeof(struct ieee80211_ht_operation);
}
