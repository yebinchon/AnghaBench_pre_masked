
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {scalar_t__* bands; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct wiphy *VAR_1, enum nl80211_band VAR_2)
{
 return VAR_2 < VAR_0 && VAR_1->bands[VAR_2];
}
