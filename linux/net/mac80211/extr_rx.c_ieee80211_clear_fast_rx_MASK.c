
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int lock; int fast_rx; } ;
struct ieee80211_fast_rx {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ieee80211_fast_rx*,int ) ;
 struct ieee80211_fast_rx* FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct sta_info *VAR_1)
{
 struct ieee80211_fast_rx *VAR_2;

 FUNC_3(&VAR_1->lock);
 VAR_2 = FUNC_2(VAR_1->fast_rx, 1);
 FUNC_0(VAR_1->fast_rx, ((void*)0));
 FUNC_4(&VAR_1->lock);

 if (VAR_2)
  FUNC_1(VAR_2, VAR_0);
}
