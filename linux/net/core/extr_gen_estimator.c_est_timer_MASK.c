
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timer_list {int dummy; } ;
struct net_rate_estimator {int last_bytes; int ewma_log; int intvl_log; int avbps; int avpps; scalar_t__ next_jiffies; int timer; scalar_t__ last_packets; int seq; } ;
struct gnet_stats_basic_packed {int bytes; scalar_t__ packets; } ;


 int VAR_0 ;
 struct net_rate_estimator* VAR_1 ;
 int FUNC_0 (struct net_rate_estimator*,struct gnet_stats_basic_packed*) ;
 struct net_rate_estimator* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_4)
{
 struct net_rate_estimator *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 struct gnet_stats_basic_packed VAR_6;
 u64 VAR_7, VAR_8;

 FUNC_0(VAR_5, &VAR_6);
 VAR_8 = (VAR_6.bytes - VAR_5->last_bytes) << (10 - VAR_5->ewma_log - VAR_5->intvl_log);
 VAR_8 -= (VAR_5->avbps >> VAR_5->ewma_log);

 VAR_7 = (u64)(VAR_6.packets - VAR_5->last_packets) << (10 - VAR_5->ewma_log - VAR_5->intvl_log);
 VAR_7 -= (VAR_5->avpps >> VAR_5->ewma_log);

 FUNC_5(&VAR_5->seq);
 VAR_5->avbps += VAR_8;
 VAR_5->avpps += VAR_7;
 FUNC_6(&VAR_5->seq);

 VAR_5->last_bytes = VAR_6.bytes;
 VAR_5->last_packets = VAR_6.packets;

 VAR_5->next_jiffies += ((VAR_0/4) << VAR_5->intvl_log);

 if (FUNC_4(FUNC_3(VAR_2, VAR_5->next_jiffies))) {

  VAR_5->next_jiffies = VAR_2 + 1;
 }
 FUNC_2(&VAR_5->timer, VAR_5->next_jiffies);
}
