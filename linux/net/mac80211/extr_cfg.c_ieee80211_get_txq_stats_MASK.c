
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct TYPE_5__ {int txq; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;
struct TYPE_6__ {int lock; int flows_cnt; int collisions; int overmemory; int overlimit; int memory_usage; int backlog; } ;
struct ieee80211_local {TYPE_3__ fq; TYPE_1__* ops; } ;
struct cfg80211_txq_stats {int filled; int max_flows; int collisions; int overmemory; int overlimit; int backlog_bytes; int backlog_packets; } ;
struct TYPE_4__ {int wake_tx_queue; } ;


 int FUNC_0 (int ) ;
 struct ieee80211_sub_if_data* FUNC_1 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct cfg80211_txq_stats*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 struct ieee80211_local* FUNC_8 (struct wiphy*) ;

__attribute__((used)) static int FUNC_9(struct wiphy *VAR_6,
       struct wireless_dev *VAR_7,
       struct cfg80211_txq_stats *VAR_8)
{
 struct ieee80211_local *VAR_9 = FUNC_8(VAR_6);
 struct ieee80211_sub_if_data *VAR_10;
 int VAR_11 = 0;

 if (!VAR_9->ops->wake_tx_queue)
  return 1;

 FUNC_5(&VAR_9->fq.lock);
 FUNC_3();

 if (VAR_7) {
  VAR_10 = FUNC_1(VAR_7);
  if (!VAR_10->vif.txq) {
   VAR_11 = 1;
   goto out;
  }
  FUNC_2(VAR_8, FUNC_7(VAR_10->vif.txq));
 } else {

  VAR_8->filled |= FUNC_0(VAR_1) |
        FUNC_0(VAR_0) |
        FUNC_0(VAR_4) |
        FUNC_0(VAR_5) |
        FUNC_0(VAR_2) |
        FUNC_0(VAR_3);
  VAR_8->backlog_packets = VAR_9->fq.backlog;
  VAR_8->backlog_bytes = VAR_9->fq.memory_usage;
  VAR_8->overlimit = VAR_9->fq.overlimit;
  VAR_8->overmemory = VAR_9->fq.overmemory;
  VAR_8->collisions = VAR_9->fq.collisions;
  VAR_8->max_flows = VAR_9->fq.flows_cnt;
 }

out:
 FUNC_4();
 FUNC_6(&VAR_9->fq.lock);

 return VAR_11;
}
