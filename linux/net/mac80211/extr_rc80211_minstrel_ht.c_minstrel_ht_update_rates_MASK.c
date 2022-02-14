
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct minstrel_priv {TYPE_2__* hw; } ;
struct minstrel_ht_sta {scalar_t__ sample_mode; TYPE_3__* sta; int max_prob_rate; int * max_tp_rate; int sample_rate; } ;
struct ieee80211_sta_rates {TYPE_1__* rate; } ;
struct TYPE_6__ {int max_rc_amsdu_len; } ;
struct TYPE_5__ {int max_rates; } ;
struct TYPE_4__ {int idx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ieee80211_sta_rates* FUNC_0 (int,int ) ;
 int FUNC_1 (struct minstrel_ht_sta*) ;
 int FUNC_2 (struct minstrel_priv*,struct minstrel_ht_sta*,struct ieee80211_sta_rates*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,struct ieee80211_sta_rates*) ;

__attribute__((used)) static void
FUNC_4(struct minstrel_priv *VAR_2, struct minstrel_ht_sta *VAR_3)
{
 struct ieee80211_sta_rates *VAR_4;
 u16 VAR_5 = VAR_3->max_tp_rate[0];
 int VAR_6 = 0;

 if (VAR_3->sample_mode == VAR_1)
  VAR_5 = VAR_3->sample_rate;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;


 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6++, VAR_5);

 if (VAR_2->hw->max_rates >= 3) {

  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6++, VAR_3->max_tp_rate[1]);
 }

 if (VAR_2->hw->max_rates >= 2) {
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6++, VAR_3->max_prob_rate);
 }

 VAR_3->sta->max_rc_amsdu_len = FUNC_1(VAR_3);
 VAR_4->rate[VAR_6].idx = -1;
 FUNC_3(VAR_2->hw, VAR_3->sta, VAR_4);
}
