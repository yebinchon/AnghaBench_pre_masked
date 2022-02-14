
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {TYPE_1__* local; scalar_t__ dev; } ;
struct TYPE_2__ {int chanctx_mtx; int mtx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

void FUNC_6(struct ieee80211_sub_if_data *VAR_0)
{
 FUNC_0(VAR_0->dev && FUNC_5(VAR_0->dev));

 FUNC_2(&VAR_0->local->mtx);

 FUNC_3(&VAR_0->local->chanctx_mtx);
 FUNC_1(VAR_0);
 FUNC_4(&VAR_0->local->chanctx_mtx);
}
