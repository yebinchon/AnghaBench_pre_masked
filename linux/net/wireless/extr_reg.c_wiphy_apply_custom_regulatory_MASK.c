
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regulatory_flags; int * bands; } ;
struct ieee80211_regdomain {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct wiphy*,int ,struct ieee80211_regdomain const*) ;

void FUNC_3(struct wiphy *VAR_2,
       const struct ieee80211_regdomain *VAR_3)
{
 enum nl80211_band VAR_4;
 unsigned int VAR_5 = 0;

 FUNC_0(!(VAR_2->regulatory_flags & VAR_1),
      "wiphy should have REGULATORY_CUSTOM_REG\n");
 VAR_2->regulatory_flags |= VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_2->bands[VAR_4])
   continue;
  FUNC_2(VAR_2, VAR_2->bands[VAR_4], VAR_3);
  VAR_5++;
 }





 FUNC_1(!VAR_5);
}
