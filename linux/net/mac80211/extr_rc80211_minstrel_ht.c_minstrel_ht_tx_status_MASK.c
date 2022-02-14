
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct minstrel_rate_stats {int success; int attempts; } ;
struct minstrel_priv {int update_interval; TYPE_2__* hw; } ;
struct minstrel_ht_sta {int ampdu_len; int sample_wait; int sample_tries; scalar_t__ sample_count; int sample_packets; int sample_mode; scalar_t__ last_stats_update; int * max_tp_rate; int sample_rate; int ampdu_packets; } ;
struct minstrel_ht_sta_priv {int legacy; int is_ht; struct minstrel_ht_sta ht; } ;
struct ieee80211_tx_status {struct ieee80211_tx_info* info; } ;
struct ieee80211_tx_rate {int count; } ;
struct TYPE_4__ {int ampdu_ack_len; int ampdu_len; struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ status; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_6__ {void (* tx_status_ext ) (void*,struct ieee80211_supported_band*,int *,struct ieee80211_tx_status*) ;} ;
struct TYPE_5__ {int max_rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;



 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_1 (struct minstrel_ht_sta*,int *,int) ;
 struct minstrel_rate_stats* FUNC_2 (struct minstrel_ht_sta*,int ) ;
 int FUNC_3 (struct minstrel_ht_sta*) ;
 struct minstrel_rate_stats* FUNC_4 (struct minstrel_priv*,struct minstrel_ht_sta*,struct ieee80211_tx_rate*) ;
 int FUNC_5 (struct minstrel_priv*,struct ieee80211_tx_rate*) ;
 int FUNC_6 (struct minstrel_priv*,struct minstrel_ht_sta*) ;
 int FUNC_7 (struct minstrel_priv*,struct minstrel_ht_sta*,int) ;
 void FUNC_8 (void*,struct ieee80211_supported_band*,int *,struct ieee80211_tx_status*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(void *VAR_8, struct ieee80211_supported_band *VAR_9,
                      void *VAR_10, struct ieee80211_tx_status *VAR_11)
{
 struct ieee80211_tx_info *VAR_12 = VAR_11->info;
 struct minstrel_ht_sta_priv *VAR_13 = VAR_10;
 struct minstrel_ht_sta *VAR_14 = &VAR_13->ht;
 struct ieee80211_tx_rate *VAR_15 = VAR_12->status.rates;
 struct minstrel_rate_stats *VAR_16, *VAR_17, *VAR_18 = ((void*)0);
 struct minstrel_priv *VAR_19 = VAR_8;
 bool VAR_20, VAR_21 = 0;
 bool VAR_22 = 0;
 int VAR_23;

 if (!VAR_13->is_ht)
  return VAR_7.tx_status_ext(VAR_8, VAR_9,
             &VAR_13->legacy, VAR_11);



 if ((VAR_12->flags & VAR_1) &&
     !(VAR_12->flags & VAR_5))
  return;

 if (!(VAR_12->flags & VAR_5)) {
  VAR_12->status.ampdu_ack_len =
   (VAR_12->flags & VAR_4 ? 1 : 0);
  VAR_12->status.ampdu_len = 1;
 }

 VAR_14->ampdu_packets++;
 VAR_14->ampdu_len += VAR_12->status.ampdu_len;

 if (!VAR_14->sample_wait && !VAR_14->sample_tries && VAR_14->sample_count > 0) {
  int VAR_24 = FUNC_3(VAR_14);

  VAR_14->sample_wait = 16 + 2 * VAR_24;
  VAR_14->sample_tries = 1;
  VAR_14->sample_count--;
 }

 if (VAR_12->flags & VAR_2)
  VAR_14->sample_packets += VAR_12->status.ampdu_len;

 if (VAR_14->sample_mode != 129)
  VAR_18 = FUNC_2(VAR_14, VAR_14->sample_rate);

 VAR_20 = !FUNC_5(VAR_19, &VAR_15[0]);
 for (VAR_23 = 0; !VAR_20; VAR_23++) {
  VAR_20 = (VAR_23 == VAR_3 - 1) ||
         !FUNC_5(VAR_19, &VAR_15[VAR_23 + 1]);

  VAR_16 = FUNC_4(VAR_19, VAR_14, &VAR_15[VAR_23]);
  if (VAR_16 == VAR_18)
   VAR_22 = 1;

  if (VAR_20)
   VAR_16->success += VAR_12->status.ampdu_ack_len;

  VAR_16->attempts += VAR_15[VAR_23].count * VAR_12->status.ampdu_len;
 }

 switch (VAR_14->sample_mode) {
 case 129:
  break;

 case 130:
  if (!VAR_22)
   break;

  VAR_14->sample_mode = 128;
  VAR_21 = 1;
  break;

 case 128:
  if (VAR_22)
   break;

  VAR_21 = 1;
  FUNC_7(VAR_19, VAR_14, 0);
  break;
 }


 if (VAR_19->hw->max_rates > 1) {




  VAR_16 = FUNC_2(VAR_14, VAR_14->max_tp_rate[0]);
  if (VAR_16->attempts > 30 &&
      FUNC_0(VAR_16->success, VAR_16->attempts) <
      FUNC_0(20, 100)) {
   FUNC_1(VAR_14, &VAR_14->max_tp_rate[0], 1);
   VAR_21 = 1;
  }

  VAR_17 = FUNC_2(VAR_14, VAR_14->max_tp_rate[1]);
  if (VAR_17->attempts > 30 &&
      FUNC_0(VAR_17->success, VAR_17->attempts) <
      FUNC_0(20, 100)) {
   FUNC_1(VAR_14, &VAR_14->max_tp_rate[1], 0);
   VAR_21 = 1;
  }
 }

 if (FUNC_9(VAR_6, VAR_14->last_stats_update +
    (VAR_19->update_interval / 2 * VAR_0) / 1000)) {
  VAR_21 = 1;
  FUNC_7(VAR_19, VAR_14, 1);
 }

 if (VAR_21)
  FUNC_6(VAR_19, VAR_14);
}
