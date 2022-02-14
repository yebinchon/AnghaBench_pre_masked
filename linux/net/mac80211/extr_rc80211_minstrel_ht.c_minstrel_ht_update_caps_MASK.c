
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct minstrel_priv {scalar_t__ has_mrr; } ;
struct minstrel_ht_sta {int overhead; int overhead_rtscts; int sample_count; int sample_wait; int sample_tries; int tx_flags; int* supported; int cck_supported_short; int sample_table; int r; TYPE_3__* groups; int avg_ampdu_len; int last_stats_update; struct ieee80211_sta* sta; } ;
struct minstrel_ht_sta_priv {int is_ht; struct minstrel_ht_sta legacy; int sample_table; int ratelist; struct minstrel_ht_sta ht; } ;
struct ieee80211_supported_band {int band; } ;
struct TYPE_7__ {scalar_t__ tx_mcs_map; } ;
struct ieee80211_sta_vht_cap {int cap; TYPE_2__ vht_mcs; scalar_t__ vht_supported; } ;
struct ieee80211_mcs_info {int* rx_mask; } ;
struct TYPE_6__ {int cap; int ht_supported; struct ieee80211_mcs_info mcs; } ;
struct ieee80211_sta {scalar_t__ bandwidth; scalar_t__ smps_mode; TYPE_1__ ht_cap; struct ieee80211_sta_vht_cap vht_cap; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_9__ {void (* rate_init ) (void*,struct ieee80211_supported_band*,struct cfg80211_chan_def*,struct ieee80211_sta*,struct minstrel_ht_sta*) ;} ;
struct TYPE_8__ {int flags; int streams; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int,int) ;
 int VAR_24 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 void* FUNC_5 (int ,int,int,int,int,int ) ;
 int VAR_25 ;
 TYPE_4__ VAR_26 ;
 int FUNC_6 (struct minstrel_ht_sta*,int ,int) ;
 int FUNC_7 (int,int,scalar_t__) ;
 int FUNC_8 (struct minstrel_priv*,struct minstrel_ht_sta*,struct ieee80211_supported_band*,struct ieee80211_sta*) ;
 int FUNC_9 (struct minstrel_priv*,struct minstrel_ht_sta*) ;
 int FUNC_10 (struct minstrel_priv*,struct minstrel_ht_sta*,int) ;
 TYPE_3__* VAR_27 ;
 scalar_t__ VAR_28 ;
 void FUNC_11 (void*,struct ieee80211_supported_band*,struct cfg80211_chan_def*,struct ieee80211_sta*,struct minstrel_ht_sta*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_29, struct ieee80211_supported_band *VAR_30,
   struct cfg80211_chan_def *VAR_31,
                        struct ieee80211_sta *VAR_32, void *VAR_33)
{
 struct minstrel_priv *VAR_34 = VAR_29;
 struct minstrel_ht_sta_priv *VAR_35 = VAR_33;
 struct minstrel_ht_sta *VAR_36 = &VAR_35->ht;
 struct ieee80211_mcs_info *VAR_37 = &VAR_32->ht_cap.mcs;
 u16 VAR_38 = VAR_32->ht_cap.cap;
 struct ieee80211_sta_vht_cap *VAR_39 = &VAR_32->vht_cap;
 int VAR_40;
 int VAR_41 = 0;
 int VAR_42;
 int VAR_43;
 int VAR_44;
 bool VAR_45;


 if (!VAR_32->ht_cap.ht_supported)
  goto use_legacy;

 FUNC_1(FUNC_0(VAR_27) != VAR_24);

 if (VAR_39->vht_supported)
  VAR_40 = VAR_39->vht_mcs.tx_mcs_map != FUNC_4(~0);
 else
  VAR_40 = 0;

 VAR_35->is_ht = 1;
 FUNC_6(VAR_36, 0, sizeof(*VAR_36));

 VAR_36->sta = VAR_32;
 VAR_36->last_stats_update = VAR_25;

 VAR_42 = FUNC_5(VAR_30->band, 10, 60, 1, 1, 0);
 VAR_36->overhead = FUNC_5(VAR_30->band, 0, 60, 1, 1, 0);
 VAR_36->overhead += VAR_42;
 VAR_36->overhead_rtscts = VAR_36->overhead + 2 * VAR_42;

 VAR_36->avg_ampdu_len = FUNC_2(1, 1);


 if (VAR_34->has_mrr) {
  VAR_36->sample_count = 16;
  VAR_36->sample_wait = 0;
 } else {
  VAR_36->sample_count = 8;
  VAR_36->sample_wait = 8;
 }
 VAR_36->sample_tries = 4;

 if (!VAR_40) {
  VAR_43 = (VAR_38 & VAR_4) >>
   VAR_5;

  VAR_45 = VAR_38 & VAR_3;
 } else {
  VAR_43 = (VAR_39->cap & VAR_20) >>
   VAR_21;

  VAR_45 = VAR_39->cap & VAR_19;
 }

 VAR_36->tx_flags |= VAR_43 << VAR_12;
 if (VAR_45)
  VAR_36->tx_flags |= VAR_11;

 for (VAR_44 = 0; VAR_44 < FUNC_0(VAR_36->groups); VAR_44++) {
  u32 VAR_46 = VAR_27[VAR_44].flags;
  int VAR_47, VAR_48;

  VAR_36->supported[VAR_44] = 0;
  if (VAR_44 == VAR_23) {
   FUNC_8(VAR_34, VAR_36, VAR_30, VAR_32);
   continue;
  }

  if (VAR_46 & VAR_17) {
   if (VAR_46 & VAR_14) {
    if (!(VAR_38 & VAR_7))
     continue;
   } else {
    if (!(VAR_38 & VAR_6))
     continue;
   }
  }

  if (VAR_46 & VAR_14 &&
      VAR_32->bandwidth < VAR_9)
   continue;

  VAR_48 = VAR_27[VAR_44].streams;


  if (VAR_32->smps_mode == VAR_8 && VAR_48 > 1)
   continue;


  if (VAR_46 & VAR_16) {
   if (VAR_40 && VAR_28)
    continue;

   VAR_36->supported[VAR_44] = VAR_37->rx_mask[VAR_48 - 1];
   if (VAR_36->supported[VAR_44])
    VAR_41++;
   continue;
  }


  if (!VAR_39->vht_supported ||
      FUNC_3(!(VAR_46 & VAR_18)) ||
      FUNC_3(VAR_46 & VAR_13))
   continue;

  if (VAR_46 & VAR_15) {
   if (VAR_32->bandwidth < VAR_10 ||
       ((VAR_46 & VAR_17) &&
        !(VAR_39->cap & VAR_22))) {
    continue;
   }
  }

  if (VAR_46 & VAR_14)
   VAR_47 = VAR_1;
  else if (VAR_46 & VAR_15)
   VAR_47 = VAR_2;
  else
   VAR_47 = VAR_0;

  VAR_36->supported[VAR_44] = FUNC_7(VAR_47, VAR_48,
    VAR_39->vht_mcs.tx_mcs_map);

  if (VAR_36->supported[VAR_44])
   VAR_41++;
 }

 if (!VAR_41)
  goto use_legacy;

 VAR_36->supported[VAR_23] |= VAR_36->cck_supported_short << 4;


 FUNC_10(VAR_34, VAR_36, 1);
 FUNC_9(VAR_34, VAR_36);

 return;

use_legacy:
 VAR_35->is_ht = 0;
 FUNC_6(&VAR_35->legacy, 0, sizeof(VAR_35->legacy));
 VAR_35->legacy.r = VAR_35->ratelist;
 VAR_35->legacy.sample_table = VAR_35->sample_table;
 return VAR_26.rate_init(VAR_29, VAR_30, VAR_31, VAR_32,
        &VAR_35->legacy);
}
