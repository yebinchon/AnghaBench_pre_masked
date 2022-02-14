
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_rate; } ;
struct sta_info {TYPE_2__* mesh; TYPE_1__ tx_stats; } ;
struct rate_info {int dummy; } ;
struct ieee80211_tx_status {struct ieee80211_tx_info* info; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_local {int dummy; } ;
struct TYPE_4__ {int tx_rate_avg; int fail_avg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rate_info*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct sta_info*) ;
 int FUNC_5 (struct sta_info*,int *,struct rate_info*) ;

void FUNC_6(struct ieee80211_local *VAR_2,
         struct sta_info *VAR_3,
         struct ieee80211_tx_status *VAR_4)
{
 struct ieee80211_tx_info *VAR_5 = VAR_4->info;
 int VAR_6;
 struct rate_info VAR_7;

 VAR_6 = !(VAR_5->flags & VAR_0);




 FUNC_1(&VAR_3->mesh->fail_avg, VAR_6 * 100);
 if (FUNC_2(&VAR_3->mesh->fail_avg) >
   VAR_1)
  FUNC_4(VAR_3);

 FUNC_5(VAR_3, &VAR_3->tx_stats.last_rate, &VAR_7);
 FUNC_3(&VAR_3->mesh->tx_rate_avg,
      FUNC_0(&VAR_7));
}
