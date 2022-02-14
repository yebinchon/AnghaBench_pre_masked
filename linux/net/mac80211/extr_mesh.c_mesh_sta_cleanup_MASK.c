
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sta_info {struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 int FUNC_0 (struct ieee80211_sub_if_data*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sta_info*) ;

void FUNC_2(struct sta_info *VAR_0)
{
 struct ieee80211_sub_if_data *VAR_1 = VAR_0->sdata;
 u32 VAR_2 = FUNC_1(VAR_0);

 if (VAR_2)
  FUNC_0(VAR_1, VAR_2);
}
