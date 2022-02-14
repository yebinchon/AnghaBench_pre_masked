
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ txq; } ;
struct ieee80211_sub_if_data {int wdev; scalar_t__ dev; TYPE_1__ vif; TYPE_2__* local; int list; } ;
struct TYPE_4__ {int iflist_mtx; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

void FUNC_11(struct ieee80211_sub_if_data *VAR_0)
{
 FUNC_0();

 FUNC_6(&VAR_0->local->iflist_mtx);
 FUNC_5(&VAR_0->list);
 FUNC_7(&VAR_0->local->iflist_mtx);

 if (VAR_0->vif.txq)
  FUNC_3(VAR_0->local, FUNC_9(VAR_0->vif.txq));

 FUNC_8();

 if (VAR_0->dev) {
  FUNC_10(VAR_0->dev);
 } else {
  FUNC_1(&VAR_0->wdev);
  FUNC_2(VAR_0);
  FUNC_4(VAR_0);
 }
}
