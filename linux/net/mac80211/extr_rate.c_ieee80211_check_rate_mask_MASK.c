
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


typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; } ;
struct TYPE_8__ {TYPE_1__* chan; } ;
struct TYPE_9__ {int basic_rates; TYPE_2__ chandef; } ;
struct TYPE_10__ {TYPE_3__ bss_conf; } ;
struct ieee80211_sub_if_data {int* rc_rateidx_mask; TYPE_4__ vif; struct ieee80211_local* local; } ;
struct TYPE_12__ {TYPE_5__* wiphy; } ;
struct ieee80211_local {TYPE_6__ hw; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_11__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_7__ {int band; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,char*,int,int,int) ;

void FUNC_3(struct ieee80211_sub_if_data *VAR_0)
{
 struct ieee80211_local *VAR_1 = VAR_0->local;
 struct ieee80211_supported_band *VAR_2;
 u32 VAR_3, VAR_4 = VAR_0->vif.bss_conf.basic_rates;
 enum nl80211_band VAR_5;

 if (FUNC_0(!VAR_0->vif.bss_conf.chandef.chan))
  return;

 if (FUNC_1(!VAR_4))
  return;

 VAR_5 = VAR_0->vif.bss_conf.chandef.chan->band;
 VAR_3 = VAR_0->rc_rateidx_mask[VAR_5];
 VAR_2 = VAR_1->hw.wiphy->bands[VAR_5];

 if (VAR_3 & VAR_4)
  return;

 FUNC_2(VAR_0,
    "no overlap between basic rates (0x%x) and user mask (0x%x on band %d) - clearing the latter",
    VAR_4, VAR_3, VAR_5);
 VAR_0->rc_rateidx_mask[VAR_5] = (1 << VAR_2->n_bitrates) - 1;
}
