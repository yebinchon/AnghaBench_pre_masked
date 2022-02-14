
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee802_11_elems {int supp_rates_len; int ext_supp_rates_len; int* supp_rates; int* ext_supp_rates; } ;
struct ieee80211_supported_band {size_t n_bitrates; TYPE_5__* bitrates; } ;
struct TYPE_10__ {int chandef; } ;
struct TYPE_12__ {TYPE_4__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_6__ vif; TYPE_3__* local; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_11__ {int flags; int bitrate; } ;
struct TYPE_8__ {TYPE_1__* wiphy; } ;
struct TYPE_9__ {TYPE_2__ hw; } ;
struct TYPE_7__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_6__*) ;

u32 FUNC_5(struct ieee80211_sub_if_data *VAR_1,
       struct ieee802_11_elems *VAR_2,
       enum nl80211_band VAR_3, u32 *VAR_4)
{
 struct ieee80211_supported_band *VAR_5;
 size_t VAR_6;
 u32 VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_5 = VAR_1->local->hw.wiphy->bands[VAR_3];
 if (FUNC_2(!VAR_5))
  return 1;

 VAR_8 = FUNC_3(&VAR_1->vif.bss_conf.chandef);
 VAR_11 = FUNC_4(&VAR_1->vif);

 VAR_6 = VAR_5->n_bitrates;
 VAR_7 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_2->supp_rates_len +
       VAR_2->ext_supp_rates_len; VAR_9++) {
  u8 VAR_12 = 0;
  int VAR_13;
  bool VAR_14;
  if (VAR_9 < VAR_2->supp_rates_len)
   VAR_12 = VAR_2->supp_rates[VAR_9];
  else if (VAR_2->ext_supp_rates)
   VAR_12 = VAR_2->ext_supp_rates
    [VAR_9 - VAR_2->supp_rates_len];
  VAR_13 = 5 * (VAR_12 & 0x7f);
  VAR_14 = !!(VAR_12 & 0x80);

  if (VAR_14 && (VAR_12 & 0x7f) == VAR_0)
   continue;

  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
   int VAR_15;
   if ((VAR_8 & VAR_5->bitrates[VAR_10].flags)
       != VAR_8)
    continue;

   VAR_15 = FUNC_1(VAR_5->bitrates[VAR_10].bitrate,
          1 << VAR_11);

   if (VAR_15 == VAR_13) {
    VAR_7 |= FUNC_0(VAR_10);
    if (VAR_4 && VAR_14)
     *VAR_4 |= FUNC_0(VAR_10);
   }
  }
 }
 return VAR_7;
}
