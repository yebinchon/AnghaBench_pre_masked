
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int iftype; } ;
struct ieee80211_sub_if_data {TYPE_3__ wdev; TYPE_2__* local; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_4__ {struct wiphy* wiphy; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfg80211_chan_def*,struct ieee80211_channel*,int ) ;
 scalar_t__ FUNC_1 (struct wiphy*,struct cfg80211_chan_def*,int ) ;
 void* FUNC_2 (int) ;
 struct ieee80211_channel* FUNC_3 (struct wiphy*,int) ;
 void** FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static u8
FUNC_5(struct ieee80211_sub_if_data *VAR_1,
      struct sk_buff *VAR_2, u16 VAR_3, u16 VAR_4,
      u16 VAR_5)
{
 u8 VAR_6 = 0, VAR_7 = 0;
 struct ieee80211_channel *VAR_8;
 struct cfg80211_chan_def VAR_9;
 int VAR_10, VAR_11;
 struct wiphy *VAR_12 = VAR_1->local->hw.wiphy;

 for (VAR_10 = VAR_3; VAR_10 <= VAR_4; VAR_10 += VAR_5) {
  if (!VAR_7)
   VAR_11 = VAR_10;

  VAR_8 = FUNC_3(VAR_1->local->hw.wiphy, VAR_10);
  if (VAR_8) {

   FUNC_0(&VAR_9, VAR_8,
      VAR_0);
   if (FUNC_1(VAR_12, &VAR_9,
         VAR_1->wdev.iftype)) {
    VAR_7++;




    continue;
   }
  }





  if (VAR_7) {
   u8 *VAR_13 = FUNC_4(VAR_2, 2);
   *VAR_13++ = FUNC_2(VAR_11);
   *VAR_13++ = VAR_7;

   VAR_6++;
   VAR_7 = 0;
  }
 }


 if (VAR_7) {
  u8 *VAR_14 = FUNC_4(VAR_2, 2);
  *VAR_14++ = FUNC_2(VAR_11);
  *VAR_14++ = VAR_7;

  VAR_6++;
 }

 return VAR_6;
}
