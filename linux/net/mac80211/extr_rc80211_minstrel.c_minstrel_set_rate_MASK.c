
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct minstrel_sta_info {struct minstrel_rate* r; } ;
struct TYPE_3__ {int retry_count_rtscts; } ;
struct minstrel_rate {TYPE_1__ stats; int retry_count_cts; int adjusted_retry_count; int rix; } ;
struct ieee80211_sta_rates {TYPE_2__* rate; } ;
struct TYPE_4__ {int count_rts; int count_cts; int count; int idx; } ;



__attribute__((used)) static void
FUNC_0(struct minstrel_sta_info *VAR_0, struct ieee80211_sta_rates *VAR_1,
    int VAR_2, int VAR_3)
{
 struct minstrel_rate *VAR_4 = &VAR_0->r[VAR_3];

 VAR_1->rate[VAR_2].idx = VAR_4->rix;
 VAR_1->rate[VAR_2].count = VAR_4->adjusted_retry_count;
 VAR_1->rate[VAR_2].count_cts = VAR_4->retry_count_cts;
 VAR_1->rate[VAR_2].count_rts = VAR_4->stats.retry_count_rtscts;
}
