
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* hw_queue; int cab_queue; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; TYPE_1__* local; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_6__ {int queues; } ;
struct TYPE_4__ {TYPE_3__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_sub_if_data *VAR_9,
      enum nl80211_iftype VAR_10)
{
 int VAR_11 = VAR_9->local->hw.queues;
 int VAR_12;

 if (VAR_10 == VAR_5)
  return 0;

 if (VAR_10 != VAR_6) {
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
   if (FUNC_0(VAR_9->vif.hw_queue[VAR_12] ==
      VAR_1))
    return -VAR_0;
   if (FUNC_0(VAR_9->vif.hw_queue[VAR_12] >=
      VAR_11))
    return -VAR_0;
  }
 }

 if ((VAR_10 != VAR_3 &&
      VAR_10 != VAR_7 &&
      VAR_10 != VAR_4) ||
     !FUNC_1(&VAR_9->local->hw, VAR_8)) {
  VAR_9->vif.cab_queue = VAR_1;
  return 0;
 }

 if (FUNC_0(VAR_9->vif.cab_queue == VAR_1))
  return -VAR_0;

 if (FUNC_0(VAR_9->vif.cab_queue >= VAR_11))
  return -VAR_0;

 return 0;
}
