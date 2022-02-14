
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int roc_work; int workqueue; } ;


 long VAR_0 ;
 long FUNC_0 (struct ieee80211_local*,unsigned long) ;
 int FUNC_1 (int ,int *,long) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_local *VAR_1,
         unsigned long VAR_2)
{
 long VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 == VAR_0)
  return 0;

 FUNC_1(VAR_1->workqueue, &VAR_1->roc_work, VAR_3);
 return 1;
}
