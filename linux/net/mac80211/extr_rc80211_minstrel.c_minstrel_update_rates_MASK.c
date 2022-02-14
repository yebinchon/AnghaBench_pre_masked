
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct minstrel_sta_info {int sta; int lowest_rix; int max_prob_rate; int * max_tp_rate; } ;
struct minstrel_priv {TYPE_2__* hw; int max_retry; } ;
struct ieee80211_sta_rates {TYPE_1__* rate; } ;
struct TYPE_4__ {int max_rates; } ;
struct TYPE_3__ {int count_rts; int count_cts; int count; int idx; } ;


 int VAR_0 ;
 struct ieee80211_sta_rates* FUNC_0 (int,int ) ;
 int FUNC_1 (struct minstrel_sta_info*,struct ieee80211_sta_rates*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,struct ieee80211_sta_rates*) ;

__attribute__((used)) static void
FUNC_3(struct minstrel_priv *VAR_1, struct minstrel_sta_info *VAR_2)
{
 struct ieee80211_sta_rates *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;


 FUNC_1(VAR_2, VAR_3, VAR_4++, VAR_2->max_tp_rate[0]);

 if (VAR_1->hw->max_rates >= 3) {

  FUNC_1(VAR_2, VAR_3, VAR_4++, VAR_2->max_tp_rate[1]);
 }

 if (VAR_1->hw->max_rates >= 2) {

  FUNC_1(VAR_2, VAR_3, VAR_4++, VAR_2->max_prob_rate);
 }


 VAR_3->rate[VAR_4].idx = VAR_2->lowest_rix;
 VAR_3->rate[VAR_4].count = VAR_1->max_retry;
 VAR_3->rate[VAR_4].count_cts = VAR_1->max_retry;
 VAR_3->rate[VAR_4].count_rts = VAR_1->max_retry;

 FUNC_2(VAR_1->hw, VAR_2->sta, VAR_3);
}
