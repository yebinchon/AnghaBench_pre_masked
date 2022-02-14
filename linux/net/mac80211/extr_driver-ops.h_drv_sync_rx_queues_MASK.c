
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int sta; int sdata; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* sync_rx_queues ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (struct ieee80211_local*,int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct ieee80211_local *VAR_0,
          struct sta_info *VAR_1)
{
 if (VAR_0->ops->sync_rx_queues) {
  FUNC_2(VAR_0, VAR_1->sdata, &VAR_1->sta);
  VAR_0->ops->sync_rx_queues(&VAR_0->hw);
  FUNC_1(VAR_0);
 }
}
