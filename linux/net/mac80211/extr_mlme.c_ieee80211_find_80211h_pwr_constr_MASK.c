
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_2__ {int first_channel; int num_channels; int max_power; } ;
struct ieee80211_country_ie_triplet {TYPE_1__ chans; } ;
struct ieee80211_channel {int band; int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(struct ieee80211_sub_if_data *VAR_2,
     struct ieee80211_channel *VAR_3,
     const u8 *VAR_4, u8 VAR_5,
     const u8 *VAR_6,
     int *VAR_7, int *VAR_8)
{
 struct ieee80211_country_ie_triplet *VAR_9;
 int VAR_10 = FUNC_1(VAR_3->center_freq);
 int VAR_11, VAR_12;
 bool VAR_13 = 0;


 if (VAR_5 % 2 || VAR_5 < VAR_1)
  return 0;

 VAR_9 = (void *)(VAR_4 + 3);
 VAR_5 -= 3;

 switch (VAR_3->band) {
 default:
  FUNC_0(1);

 case 130:
 case 128:
  VAR_12 = 1;
  break;
 case 129:
  VAR_12 = 4;
  break;
 }


 while (VAR_5 >= 3) {
  u8 VAR_14 = VAR_9->chans.first_channel;

  if (VAR_14 >= VAR_0)
   goto next;

  for (VAR_11 = 0; VAR_11 < VAR_9->chans.num_channels; VAR_11++) {
   if (VAR_14 + VAR_11 * VAR_12 == VAR_10) {
    VAR_13 = 1;
    *VAR_7 = VAR_9->chans.max_power;
    break;
   }
  }
  if (VAR_13)
   break;

 next:
  VAR_9++;
  VAR_5 -= 3;
 }

 if (VAR_13 && VAR_6)
  *VAR_8 = *VAR_6;
 else
  *VAR_8 = 0;

 return VAR_13;
}
