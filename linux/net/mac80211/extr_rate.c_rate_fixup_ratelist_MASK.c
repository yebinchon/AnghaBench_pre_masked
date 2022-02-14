
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int basic_rates; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_tx_rate {int flags; size_t idx; } ;
struct TYPE_4__ {size_t rts_cts_rate_idx; int use_cts_prot; scalar_t__ short_preamble; scalar_t__ use_rts; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {scalar_t__ bitrate; int flags; } ;
typedef size_t s8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (struct ieee80211_tx_rate*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_vif *VAR_7,
    struct ieee80211_supported_band *VAR_8,
    struct ieee80211_tx_info *VAR_9,
    struct ieee80211_tx_rate *VAR_10,
    int VAR_11)
{
 struct ieee80211_rate *VAR_12;
 bool VAR_13 = 0;
 int VAR_14;
 if (!(VAR_10[0].flags &
       (VAR_2 | VAR_6))) {
  u32 VAR_15 = VAR_7->bss_conf.basic_rates;
  s8 VAR_16 = VAR_15 ? FUNC_3(VAR_15) - 1 : 0;

  VAR_12 = &VAR_8->bitrates[VAR_10[0].idx];

  for (VAR_14 = 0; VAR_14 < VAR_8->n_bitrates; VAR_14++) {

   if (!(VAR_15 & FUNC_0(VAR_14)))
    continue;

   if (VAR_8->bitrates[VAR_14].bitrate > VAR_12->bitrate)
    continue;

   if (VAR_8->bitrates[VAR_16].bitrate <
        VAR_8->bitrates[VAR_14].bitrate)
    VAR_16 = VAR_14;
  }

  VAR_9->control.rts_cts_rate_idx = VAR_16;
 }

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {





  if (VAR_13) {
   VAR_10[VAR_14].idx = -1;
   continue;
  }
  if (VAR_10[VAR_14].idx < 0) {
   VAR_13 = 1;
   continue;
  }





  if (VAR_10[VAR_14].flags & VAR_2) {
   FUNC_1(VAR_10[VAR_14].idx > 76);

   if (!(VAR_10[VAR_14].flags & VAR_4) &&
       VAR_9->control.use_cts_prot)
    VAR_10[VAR_14].flags |=
     VAR_3;
   continue;
  }

  if (VAR_10[VAR_14].flags & VAR_6) {
   FUNC_1(FUNC_4(&VAR_10[VAR_14]) > 9);
   continue;
  }


  if (VAR_9->control.use_rts) {
   VAR_10[VAR_14].flags |= VAR_4;
   VAR_9->control.use_cts_prot = 0;
  }


  if (FUNC_2(VAR_10[VAR_14].idx >= VAR_8->n_bitrates)) {
   VAR_10[VAR_14].idx = -1;
   continue;
  }

  VAR_12 = &VAR_8->bitrates[VAR_10[VAR_14].idx];


  if (VAR_9->control.short_preamble &&
      VAR_12->flags & VAR_1)
   VAR_10[VAR_14].flags |= VAR_5;


  if (!(VAR_10[VAR_14].flags & VAR_4) &&
      VAR_9->control.use_cts_prot &&
      VAR_12->flags & VAR_0)
   VAR_10[VAR_14].flags |= VAR_3;
 }
}
