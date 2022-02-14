
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ieee80211_local {scalar_t__ roc_cookie_counter; int mtx; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;

u64 FUNC_2(struct ieee80211_local *VAR_0)
{
 FUNC_1(&VAR_0->mtx);

 VAR_0->roc_cookie_counter++;


 if (FUNC_0(VAR_0->roc_cookie_counter == 0))
  VAR_0->roc_cookie_counter++;

 return VAR_0->roc_cookie_counter;
}
