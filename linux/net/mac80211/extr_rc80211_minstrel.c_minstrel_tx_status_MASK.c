
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct minstrel_sta_info {scalar_t__ sample_deferred; scalar_t__ last_stats_update; int sample_packets; TYPE_3__* r; } ;
struct minstrel_priv {int update_interval; } ;
struct ieee80211_tx_status {struct ieee80211_tx_info* info; } ;
struct ieee80211_tx_rate {scalar_t__ idx; scalar_t__ count; } ;
struct TYPE_4__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ status; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_5__ {int success; int attempts; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct minstrel_priv*,struct minstrel_sta_info*) ;
 int FUNC_1 (struct minstrel_sta_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void *VAR_5, struct ieee80211_supported_band *VAR_6,
     void *VAR_7, struct ieee80211_tx_status *VAR_8)
{
 struct ieee80211_tx_info *VAR_9 = VAR_8->info;
 struct minstrel_priv *VAR_10 = VAR_5;
 struct minstrel_sta_info *VAR_11 = VAR_7;
 struct ieee80211_tx_rate *VAR_12 = VAR_9->status.rates;
 int VAR_13, VAR_14;
 int VAR_15;

 VAR_15 = !!(VAR_9->flags & VAR_3);

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  if (VAR_12[VAR_13].idx < 0)
   break;

  VAR_14 = FUNC_1(VAR_11, VAR_12[VAR_13].idx);
  if (VAR_14 < 0)
   continue;

  VAR_11->r[VAR_14].stats.attempts += VAR_12[VAR_13].count;

  if ((VAR_13 != VAR_2 - 1) && (VAR_12[VAR_13 + 1].idx < 0))
   VAR_11->r[VAR_14].stats.success += VAR_15;
 }

 if ((VAR_9->flags & VAR_1) && (VAR_13 >= 0))
  VAR_11->sample_packets++;

 if (VAR_11->sample_deferred > 0)
  VAR_11->sample_deferred--;

 if (FUNC_2(VAR_4, VAR_11->last_stats_update +
    (VAR_10->update_interval * VAR_0) / 1000))
  FUNC_0(VAR_10, VAR_11);
}
