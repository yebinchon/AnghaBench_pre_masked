
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int tx_packets; int tx_bytes; int collisions; int overlimit; int flows; int backlog_packets; int backlog_bytes; } ;
struct TYPE_8__ {int ecn_mark; int drop_count; } ;
struct TYPE_7__ {int ac; } ;
struct txq_info {TYPE_4__ tin; TYPE_3__ cstats; TYPE_2__ txq; } ;
struct TYPE_6__ {int txq; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; struct ieee80211_local* local; } ;
struct TYPE_10__ {int lock; } ;
struct ieee80211_local {TYPE_5__ fq; } ;
typedef int ssize_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct txq_info* FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(
 const struct ieee80211_sub_if_data *VAR_0, char *VAR_1, int VAR_2)
{
 struct ieee80211_local *VAR_3 = VAR_0->local;
 struct txq_info *VAR_4;
 int VAR_5;

 if (!VAR_0->vif.txq)
  return 0;

 VAR_4 = FUNC_5(VAR_0->vif.txq);

 FUNC_3(&VAR_3->fq.lock);
 FUNC_0();

 VAR_5 = FUNC_2(VAR_1,
   VAR_2,
   "ac backlog-bytes backlog-packets new-flows drops marks overlimit collisions tx-bytes tx-packets\n"
   "%u %u %u %u %u %u %u %u %u %u\n",
   VAR_4->txq.ac,
   VAR_4->tin.backlog_bytes,
   VAR_4->tin.backlog_packets,
   VAR_4->tin.flows,
   VAR_4->cstats.drop_count,
   VAR_4->cstats.ecn_mark,
   VAR_4->tin.overlimit,
   VAR_4->tin.collisions,
   VAR_4->tin.tx_bytes,
   VAR_4->tin.tx_packets);

 FUNC_1();
 FUNC_4(&VAR_3->fq.lock);

 return VAR_5;
}
