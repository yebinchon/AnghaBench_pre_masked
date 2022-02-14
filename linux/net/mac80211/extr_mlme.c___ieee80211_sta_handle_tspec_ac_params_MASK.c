
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_if_managed {int tx_tspec_wk; struct ieee80211_sta_tx_tspec* tx_tspec; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int wmm_acm; int * tx_conf; TYPE_1__ u; struct ieee80211_local* local; } ;
struct ieee80211_sta_tx_tspec {int action; unsigned long time_slice_start; int downgraded; scalar_t__ consumed_tx_time; scalar_t__ admitted_time; } ;
struct TYPE_4__ {int queues; } ;
struct ieee80211_local {TYPE_2__ hw; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int,int *) ;
 unsigned long VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,char*,int) ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static bool
FUNC_5(struct ieee80211_sub_if_data *VAR_4)
{
 struct ieee80211_local *VAR_5 = VAR_4->local;
 struct ieee80211_if_managed *VAR_6 = &VAR_4->u.mgd;
 bool VAR_7 = 0;
 int VAR_8;

 if (VAR_5->hw.queues < VAR_2)
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  struct ieee80211_sta_tx_tspec *VAR_9 = &VAR_6->tx_tspec[VAR_8];
  int VAR_10;
  unsigned long VAR_11 = VAR_3;

  if (VAR_9->action == 129 &&
      VAR_9->admitted_time &&
      FUNC_4(VAR_11, VAR_9->time_slice_start + VAR_0)) {
   VAR_9->consumed_tx_time = 0;
   VAR_9->time_slice_start = VAR_11;

   if (VAR_9->downgraded)
    VAR_9->action =
     128;
  }

  switch (VAR_9->action) {
  case 128:

   if (FUNC_1(VAR_5, VAR_4, VAR_8, &VAR_4->tx_conf[VAR_8]))
    FUNC_3(VAR_4,
       "failed to set TX queue parameters for queue %d\n",
       VAR_8);
   VAR_9->action = 129;
   VAR_9->downgraded = 0;
   VAR_7 = 1;
   break;
  case 130:
   if (FUNC_4(VAR_11, VAR_9->time_slice_start + VAR_0)) {
    VAR_9->action = 129;
    VAR_7 = 1;
    break;
   }

   for (VAR_10 = VAR_8 + 1;
        VAR_10 < VAR_2;
        VAR_10++)
    if (!(VAR_4->wmm_acm & FUNC_0(7 - 2 * VAR_10)))
     break;







   if (VAR_10 >= VAR_2)
    VAR_10 = VAR_1;
   if (FUNC_1(VAR_5, VAR_4, VAR_8,
     &VAR_4->tx_conf[VAR_10]))
    FUNC_3(VAR_4,
       "failed to set TX queue parameters for queue %d\n",
       VAR_8);
   VAR_9->action = 129;
   VAR_7 = 1;
   FUNC_2(&VAR_6->tx_tspec_wk,
    VAR_9->time_slice_start + VAR_0 - VAR_11 + 1);
   break;
  case 129:

   break;
  }
 }

 return VAR_7;
}
