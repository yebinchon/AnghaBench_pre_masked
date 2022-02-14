
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long last_ack; } ;
struct sta_info {TYPE_1__ status_stats; } ;
struct ieee80211_sta_rx_stats {unsigned long last_rx; } ;


 struct ieee80211_sta_rx_stats* FUNC_0 (struct sta_info*) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

unsigned long FUNC_2(struct sta_info *VAR_0)
{
 struct ieee80211_sta_rx_stats *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_0->status_stats.last_ack ||
     FUNC_1(VAR_1->last_rx, VAR_0->status_stats.last_ack))
  return VAR_1->last_rx;
 return VAR_0->status_stats.last_ack;
}
