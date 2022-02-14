
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct minstrel_priv {int fixed_rate_idx; int* cck_rates; TYPE_2__* hw; } ;
struct minstrel_ht_sta {int max_prob_rate; int tx_flags; scalar_t__ sample_packets; int total_packets; } ;
struct minstrel_ht_sta_priv {int legacy; int is_ht; struct minstrel_ht_sta ht; } ;
struct mcs_group {int flags; int streams; } ;
struct ieee80211_tx_rate_control {int short_preamble; int skb; } ;
struct ieee80211_tx_rate {int count; int idx; int flags; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_5__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_3__ control; TYPE_1__ status; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_8__ {void (* get_rate ) (void*,struct ieee80211_sta*,int *,struct ieee80211_tx_rate_control*) ;} ;
struct TYPE_6__ {int max_rates; } ;


 int FUNC_0 (int*) ;
 struct ieee80211_tx_info* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ieee80211_tx_rate*,int,int) ;
 TYPE_4__ VAR_6 ;
 int FUNC_3 (struct ieee80211_sta*,int ) ;
 int FUNC_4 (struct minstrel_priv*,struct minstrel_ht_sta*) ;
 struct mcs_group const* VAR_7 ;
 void FUNC_5 (void*,struct ieee80211_sta*,int *,struct ieee80211_tx_rate_control*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_8, struct ieee80211_sta *VAR_9, void *VAR_10,
                     struct ieee80211_tx_rate_control *VAR_11)
{
 const struct mcs_group *VAR_12;
 struct ieee80211_tx_info *VAR_13 = FUNC_1(VAR_11->skb);
 struct ieee80211_tx_rate *VAR_14 = &VAR_13->status.rates[0];
 struct minstrel_ht_sta_priv *VAR_15 = VAR_10;
 struct minstrel_ht_sta *VAR_16 = &VAR_15->ht;
 struct minstrel_priv *VAR_17 = VAR_8;
 int VAR_18;

 if (!VAR_15->is_ht)
  return VAR_6.get_rate(VAR_8, VAR_9, &VAR_15->legacy, VAR_11);

 if (!(VAR_13->flags & VAR_0) &&
     VAR_16->max_prob_rate / VAR_4 != VAR_5)
  FUNC_3(VAR_9, VAR_11->skb);

 VAR_13->flags |= VAR_16->tx_flags;







 if (VAR_17->hw->max_rates == 1 &&
     (VAR_13->control.flags & VAR_2))
  VAR_18 = -1;
 else
  VAR_18 = FUNC_4(VAR_17, VAR_16);

 VAR_16->total_packets++;


 if (VAR_16->total_packets == ~0) {
  VAR_16->total_packets = 0;
  VAR_16->sample_packets = 0;
 }

 if (VAR_18 < 0)
  return;

 VAR_12 = &VAR_7[VAR_18 / VAR_4];
 VAR_18 %= VAR_4;

 if (VAR_12 == &VAR_7[VAR_5] &&
     (VAR_18 >= 4) != VAR_11->short_preamble)
  return;

 VAR_13->flags |= VAR_1;
 VAR_14->count = 1;

 if (VAR_12 == &VAR_7[VAR_5]) {
  int VAR_19 = VAR_18 % FUNC_0(VAR_17->cck_rates);
  VAR_14->idx = VAR_17->cck_rates[VAR_19];
 } else if (VAR_12->flags & VAR_3) {
  FUNC_2(VAR_14, VAR_18 % VAR_4,
           VAR_12->streams);
 } else {
  VAR_14->idx = VAR_18 + (VAR_12->streams - 1) * 8;
 }

 VAR_14->flags = VAR_12->flags;
}
