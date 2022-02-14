
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int lock; int fast_tx; } ;
struct ieee80211_fast_tx {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ieee80211_fast_tx*,int ) ;
 int FUNC_2 (int *) ;
 struct ieee80211_fast_tx* FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct sta_info *VAR_1)
{
 struct ieee80211_fast_tx *VAR_2;

 FUNC_4(&VAR_1->lock);
 VAR_2 = FUNC_3(VAR_1->fast_tx,
         FUNC_2(&VAR_1->lock));
 FUNC_0(VAR_1->fast_tx, ((void*)0));
 FUNC_5(&VAR_1->lock);

 if (VAR_2)
  FUNC_1(VAR_2, VAR_0);
}
