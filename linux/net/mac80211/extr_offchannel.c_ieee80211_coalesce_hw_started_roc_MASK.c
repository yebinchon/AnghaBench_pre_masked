
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_roc_work {int hw_begun; scalar_t__ duration; unsigned long start_time; int list; int started; } ;
struct ieee80211_local {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_roc_work*,unsigned long) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (int *,int *) ;
 unsigned long FUNC_4 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_5(struct ieee80211_local *VAR_1,
      struct ieee80211_roc_work *VAR_2,
      struct ieee80211_roc_work *VAR_3)
{
 unsigned long VAR_4 = VAR_0;
 unsigned long VAR_5;

 if (FUNC_0(!VAR_3->started))
  return 0;




 if (!VAR_3->hw_begun && VAR_2->duration > VAR_3->duration)
  return 0;

 VAR_5 = VAR_3->start_time +
      FUNC_4(VAR_3->duration) -
      VAR_4;


 if (VAR_2->duration > FUNC_2(VAR_5))
  return 0;


 FUNC_3(&VAR_2->list, &VAR_3->list);





 if (VAR_3->hw_begun) {
  VAR_2->hw_begun = 1;
  FUNC_1(VAR_2, VAR_4);
 }

 return 1;
}
