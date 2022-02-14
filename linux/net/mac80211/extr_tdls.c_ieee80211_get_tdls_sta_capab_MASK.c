
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ieee80211_supported_band {scalar_t__ band; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ieee80211_supported_band* FUNC_0 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static u16 FUNC_1(struct ieee80211_sub_if_data *VAR_3,
     u16 VAR_4)
{
 struct ieee80211_supported_band *VAR_5;


 if (VAR_4 != 0)
  return 0;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 && VAR_5->band == VAR_0) {
  return VAR_2 |
         VAR_1;
 }

 return 0;
}
