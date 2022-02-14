
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct TYPE_2__ {int enqueue_time; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
typedef int codel_time_t ;



__attribute__((used)) static codel_time_t FUNC_0(const struct sk_buff *VAR_0)
{
 const struct ieee80211_tx_info *VAR_1;

 VAR_1 = (const struct ieee80211_tx_info *)VAR_0->cb;
 return VAR_1->control.enqueue_time;
}
