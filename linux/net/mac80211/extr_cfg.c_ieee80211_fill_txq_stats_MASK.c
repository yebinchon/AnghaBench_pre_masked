
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx_packets; int tx_bytes; int collisions; int overlimit; int flows; int backlog_packets; int backlog_bytes; } ;
struct TYPE_3__ {int ecn_mark; int drop_count; } ;
struct txq_info {TYPE_2__ tin; TYPE_1__ cstats; } ;
struct cfg80211_txq_stats {int filled; int tx_packets; int tx_bytes; int collisions; int overlimit; int ecn_marks; int drops; int flows; int backlog_packets; int backlog_bytes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_1(struct cfg80211_txq_stats *VAR_9,
         struct txq_info *VAR_10)
{
 if (!(VAR_9->filled & FUNC_0(VAR_0))) {
  VAR_9->filled |= FUNC_0(VAR_0);
  VAR_9->backlog_bytes = VAR_10->tin.backlog_bytes;
 }

 if (!(VAR_9->filled & FUNC_0(VAR_1))) {
  VAR_9->filled |= FUNC_0(VAR_1);
  VAR_9->backlog_packets = VAR_10->tin.backlog_packets;
 }

 if (!(VAR_9->filled & FUNC_0(VAR_5))) {
  VAR_9->filled |= FUNC_0(VAR_5);
  VAR_9->flows = VAR_10->tin.flows;
 }

 if (!(VAR_9->filled & FUNC_0(VAR_3))) {
  VAR_9->filled |= FUNC_0(VAR_3);
  VAR_9->drops = VAR_10->cstats.drop_count;
 }

 if (!(VAR_9->filled & FUNC_0(VAR_4))) {
  VAR_9->filled |= FUNC_0(VAR_4);
  VAR_9->ecn_marks = VAR_10->cstats.ecn_mark;
 }

 if (!(VAR_9->filled & FUNC_0(VAR_6))) {
  VAR_9->filled |= FUNC_0(VAR_6);
  VAR_9->overlimit = VAR_10->tin.overlimit;
 }

 if (!(VAR_9->filled & FUNC_0(VAR_2))) {
  VAR_9->filled |= FUNC_0(VAR_2);
  VAR_9->collisions = VAR_10->tin.collisions;
 }

 if (!(VAR_9->filled & FUNC_0(VAR_7))) {
  VAR_9->filled |= FUNC_0(VAR_7);
  VAR_9->tx_bytes = VAR_10->tin.tx_bytes;
 }

 if (!(VAR_9->filled & FUNC_0(VAR_8))) {
  VAR_9->filled |= FUNC_0(VAR_8);
  VAR_9->tx_packets = VAR_10->tin.tx_packets;
 }
}
