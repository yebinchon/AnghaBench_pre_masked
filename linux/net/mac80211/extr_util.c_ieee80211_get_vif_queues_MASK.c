
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* hw_queue; scalar_t__ cab_queue; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
struct TYPE_4__ {scalar_t__ queues; } ;
struct ieee80211_local {TYPE_2__ hw; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static unsigned int
FUNC_2(struct ieee80211_local *VAR_3,
    struct ieee80211_sub_if_data *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4 && FUNC_1(&VAR_3->hw, VAR_2)) {
  int VAR_6;

  VAR_5 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   VAR_5 |= FUNC_0(VAR_4->vif.hw_queue[VAR_6]);
  if (VAR_4->vif.cab_queue != VAR_0)
   VAR_5 |= FUNC_0(VAR_4->vif.cab_queue);
 } else {

  VAR_5 = FUNC_0(VAR_3->hw.queues) - 1;
 }

 return VAR_5;
}
