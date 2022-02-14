
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; TYPE_2__* local; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ wake_tx_queue; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_1(struct ieee80211_sub_if_data *VAR_10)
{
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
 FUNC_0(VAR_3);

 if (VAR_10->local->ops->wake_tx_queue &&
     VAR_10->vif.type != VAR_1 &&
     VAR_10->vif.type != VAR_0)
  FUNC_0(VAR_2);
}
