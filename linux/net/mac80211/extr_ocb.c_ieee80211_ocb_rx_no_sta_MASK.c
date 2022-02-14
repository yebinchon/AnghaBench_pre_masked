
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_12__ {int * supp_rates; } ;
struct sta_info {int list; TYPE_5__ sta; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_9__ {int chanctx_conf; } ;
struct ieee80211_if_ocb {int incomplete_lock; int incomplete_stations; } ;
struct TYPE_8__ {struct ieee80211_if_ocb ocb; } ;
struct ieee80211_sub_if_data {int work; TYPE_2__ vif; int name; struct ieee80211_local* local; TYPE_1__ u; } ;
struct TYPE_13__ {TYPE_4__* wiphy; } ;
struct ieee80211_local {scalar_t__ num_sta; TYPE_6__ hw; } ;
struct TYPE_14__ {TYPE_3__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_7__ def; } ;
typedef enum nl80211_bss_scan_width { ____Placeholder_nl80211_bss_scan_width } nl80211_bss_scan_width ;
struct TYPE_11__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_10__ {int band; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (struct ieee80211_supported_band*,int) ;
 int FUNC_3 (TYPE_6__*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,int ,int const*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,char*,int const*) ;
 struct ieee80211_chanctx_conf* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct sta_info* FUNC_12 (struct ieee80211_sub_if_data*,int const*,int ) ;

void FUNC_13(struct ieee80211_sub_if_data *VAR_2,
        const u8 *VAR_3, const u8 *VAR_4,
        u32 VAR_5)
{
 struct ieee80211_if_ocb *VAR_6 = &VAR_2->u.ocb;
 struct ieee80211_local *VAR_7 = VAR_2->local;
 struct ieee80211_chanctx_conf *VAR_8;
 struct ieee80211_supported_band *VAR_9;
 enum nl80211_bss_scan_width VAR_10;
 struct sta_info *VAR_11;
 int VAR_12;




 if (VAR_7->num_sta >= VAR_1) {
  FUNC_5("%s: No room for a new OCB STA entry %pM\n",
         VAR_2->name, VAR_4);
  return;
 }

 FUNC_6(VAR_2, "Adding new OCB station %pM\n", VAR_4);

 FUNC_8();
 VAR_8 = FUNC_7(VAR_2->vif.chanctx_conf);
 if (FUNC_0(!VAR_8)) {
  FUNC_9();
  return;
 }
 VAR_12 = VAR_8->def.chan->band;
 VAR_10 = FUNC_1(&VAR_8->def);
 FUNC_9();

 VAR_11 = FUNC_12(VAR_2, VAR_4, VAR_0);
 if (!VAR_11)
  return;


 VAR_9 = VAR_7->hw.wiphy->bands[VAR_12];
 VAR_11->sta.supp_rates[VAR_12] =
  FUNC_2(VAR_9, VAR_10);

 FUNC_10(&VAR_6->incomplete_lock);
 FUNC_4(&VAR_11->list, &VAR_6->incomplete_stations);
 FUNC_11(&VAR_6->incomplete_lock);
 FUNC_3(&VAR_7->hw, &VAR_2->work);
}
