
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ieee80211_supported_band {size_t n_bitrates; TYPE_4__* bitrates; } ;
struct TYPE_6__ {int basic_rates; int chandef; } ;
struct TYPE_10__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; struct ieee80211_local* local; } ;
struct TYPE_8__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {TYPE_3__ hw; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_9__ {int flags; int bitrate; } ;
struct TYPE_7__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 size_t* FUNC_4 (struct sk_buff*,size_t) ;
 size_t FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct ieee80211_sub_if_data *VAR_2,
       struct sk_buff *VAR_3, bool VAR_4,
       enum nl80211_band VAR_5)
{
 struct ieee80211_local *VAR_6 = VAR_2->local;
 struct ieee80211_supported_band *VAR_7;
 int VAR_8, VAR_9;
 u8 VAR_10, VAR_11, *VAR_12;
 u32 VAR_13 = VAR_2->vif.bss_conf.basic_rates;
 u32 VAR_14;

 VAR_9 = FUNC_3(&VAR_2->vif);
 VAR_14 = FUNC_2(&VAR_2->vif.bss_conf.chandef);
 VAR_7 = VAR_6->hw.wiphy->bands[VAR_5];
 VAR_11 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_7->n_bitrates; VAR_10++) {
  if ((VAR_14 & VAR_7->bitrates[VAR_10].flags) != VAR_14)
   continue;
  VAR_11++;
 }
 if (VAR_11 > 8)
  VAR_11 = 8;

 if (FUNC_5(VAR_3) < VAR_11 + 2)
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_3, VAR_11 + 2);
 *VAR_12++ = VAR_1;
 *VAR_12++ = VAR_11;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  u8 VAR_15 = 0;
  if ((VAR_14 & VAR_7->bitrates[VAR_10].flags) != VAR_14)
   continue;

  if (VAR_4 && VAR_13 & FUNC_0(VAR_10))
   VAR_15 = 0x80;
  VAR_8 = FUNC_1(VAR_7->bitrates[VAR_10].bitrate,
        5 * (1 << VAR_9));
  *VAR_12++ = VAR_15 | (u8) VAR_8;
 }

 return 0;
}
