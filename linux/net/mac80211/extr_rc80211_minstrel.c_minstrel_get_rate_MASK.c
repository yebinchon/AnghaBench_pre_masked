
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct minstrel_sta_info {int total_packets; int sample_packets; int sample_deferred; int prev_sample; int n_rates; size_t* max_tp_rate; struct minstrel_rate* r; } ;
struct TYPE_8__ {int sample_skipped; scalar_t__ prob_ewma; } ;
struct minstrel_rate {scalar_t__ perfect_tx_time; scalar_t__ sample_limit; int rix; TYPE_4__ stats; } ;
struct minstrel_priv {int lookaround_rate_mrr; int lookaround_rate; int fixed_rate_idx; TYPE_2__* hw; scalar_t__ has_mrr; } ;
struct ieee80211_tx_rate_control {TYPE_1__* bss_conf; int rts; struct sk_buff* skb; } ;
struct ieee80211_tx_rate {int count; int idx; } ;
struct TYPE_7__ {int flags; struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_3__ control; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_6__ {int max_rates; } ;
struct TYPE_5__ {int use_cts_prot; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 unsigned int FUNC_2 (struct minstrel_sta_info*) ;
 int FUNC_3 (struct minstrel_rate*,struct ieee80211_tx_info*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, struct ieee80211_sta *VAR_3,
    void *VAR_4, struct ieee80211_tx_rate_control *VAR_5)
{
 struct sk_buff *VAR_6 = VAR_5->skb;
 struct ieee80211_tx_info *VAR_7 = FUNC_0(VAR_6);
 struct minstrel_sta_info *VAR_8 = VAR_4;
 struct minstrel_priv *VAR_9 = VAR_2;
 struct ieee80211_tx_rate *VAR_10 = &VAR_7->control.rates[0];
 struct minstrel_rate *VAR_11, *VAR_12;
 unsigned int VAR_13;
 bool VAR_14;
 bool VAR_15;
 int VAR_16;
 int VAR_17;


 VAR_14 = VAR_9->has_mrr &&
        !VAR_5->rts &&
        !VAR_5->bss_conf->use_cts_prot;
 if (VAR_14)
  VAR_17 = VAR_9->lookaround_rate_mrr;
 else
  VAR_17 = VAR_9->lookaround_rate;


 VAR_8->total_packets++;







 if (VAR_9->hw->max_rates == 1 &&
     (VAR_7->control.flags & VAR_1))
  return;

 VAR_16 = (VAR_8->total_packets * VAR_17 / 100) -
   (VAR_8->sample_packets + VAR_8->sample_deferred / 2);


 VAR_15 = VAR_8->prev_sample;
 VAR_8->prev_sample = 0;
 if (VAR_16 < 0 || (!VAR_14 && VAR_15))
  return;

 if (VAR_8->total_packets >= 10000) {
  VAR_8->sample_deferred = 0;
  VAR_8->sample_packets = 0;
  VAR_8->total_packets = 0;
 } else if (VAR_16 > VAR_8->n_rates * 2) {
  VAR_8->sample_packets += (VAR_16 - VAR_8->n_rates * 2);
 }


 VAR_13 = FUNC_2(VAR_8);
 VAR_11 = &VAR_8->r[VAR_13];
 VAR_12 = &VAR_8->r[VAR_8->max_tp_rate[0]];





 if (VAR_14 &&
     VAR_11->perfect_tx_time > VAR_12->perfect_tx_time &&
     VAR_11->stats.sample_skipped < 20) {






  VAR_7->flags |= VAR_0;
  VAR_10++;
  VAR_8->sample_deferred++;
 } else {
  if (!VAR_11->sample_limit)
   return;

  VAR_8->sample_packets++;
  if (VAR_11->sample_limit > 0)
   VAR_11->sample_limit--;
 }




 if (!VAR_14 &&
    (VAR_8->r[VAR_13].stats.prob_ewma > FUNC_1(95, 100)))
  return;

 VAR_8->prev_sample = 1;

 VAR_10->idx = VAR_8->r[VAR_13].rix;
 VAR_10->count = FUNC_3(&VAR_8->r[VAR_13], VAR_7);
}
