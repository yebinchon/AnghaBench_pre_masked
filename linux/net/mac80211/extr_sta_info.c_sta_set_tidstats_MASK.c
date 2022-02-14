
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int * txq; } ;
struct TYPE_9__ {int * msdu_failed; int * msdu_retries; } ;
struct TYPE_8__ {int * msdu; } ;
struct TYPE_7__ {int * msdu; int syncp; } ;
struct sta_info {TYPE_5__ sta; TYPE_3__ status_stats; TYPE_2__ tx_stats; TYPE_1__ rx_stats; struct ieee80211_local* local; } ;
struct TYPE_12__ {int lock; } ;
struct ieee80211_local {TYPE_6__ fq; TYPE_4__* ops; int hw; } ;
struct cfg80211_tid_stats {int filled; int txq_stats; int tx_msdu_failed; int tx_msdu_retries; int tx_msdu; int rx_msdu; } ;
struct TYPE_10__ {scalar_t__ wake_tx_queue; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct sta_info *VAR_7,
        struct cfg80211_tid_stats *VAR_8,
        int VAR_9)
{
 struct ieee80211_local *VAR_10 = VAR_7->local;

 if (!(VAR_8->filled & FUNC_0(VAR_1))) {
  unsigned int VAR_11;

  do {
   VAR_11 = FUNC_8(&VAR_7->rx_stats.syncp);
   VAR_8->rx_msdu = VAR_7->rx_stats.msdu[VAR_9];
  } while (FUNC_9(&VAR_7->rx_stats.syncp, VAR_11));

  VAR_8->filled |= FUNC_0(VAR_1);
 }

 if (!(VAR_8->filled & FUNC_0(VAR_3))) {
  VAR_8->filled |= FUNC_0(VAR_3);
  VAR_8->tx_msdu = VAR_7->tx_stats.msdu[VAR_9];
 }

 if (!(VAR_8->filled & FUNC_0(VAR_5)) &&
     FUNC_2(&VAR_10->hw, VAR_6)) {
  VAR_8->filled |= FUNC_0(VAR_5);
  VAR_8->tx_msdu_retries = VAR_7->status_stats.msdu_retries[VAR_9];
 }

 if (!(VAR_8->filled & FUNC_0(VAR_4)) &&
     FUNC_2(&VAR_10->hw, VAR_6)) {
  VAR_8->filled |= FUNC_0(VAR_4);
  VAR_8->tx_msdu_failed = VAR_7->status_stats.msdu_failed[VAR_9];
 }

 if (VAR_10->ops->wake_tx_queue && VAR_9 < VAR_0) {
  FUNC_5(&VAR_10->fq.lock);
  FUNC_3();

  VAR_8->filled |= FUNC_0(VAR_2);
  FUNC_1(&VAR_8->txq_stats,
      FUNC_7(VAR_7->sta.txq[VAR_9]));

  FUNC_4();
  FUNC_6(&VAR_10->fq.lock);
 }
}
