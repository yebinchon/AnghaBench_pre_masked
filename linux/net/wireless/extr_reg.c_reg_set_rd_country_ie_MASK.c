
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct regulatory_request {scalar_t__ intersect; int wiphy_idx; } ;
struct ieee80211_regdomain {int * alpha2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_regdomain const*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct ieee80211_regdomain const*) ;
 int FUNC_6 (int,struct ieee80211_regdomain const*) ;
 struct wiphy* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const struct ieee80211_regdomain *VAR_2,
     struct regulatory_request *VAR_3)
{
 struct wiphy *VAR_4;

 if (!FUNC_0(VAR_2->alpha2) && !FUNC_1(VAR_2->alpha2) &&
     !FUNC_2(VAR_2->alpha2))
  return -VAR_0;







 if (!FUNC_3(VAR_2)) {
  FUNC_4("Invalid regulatory domain detected: %c%c\n",
         VAR_2->alpha2[0], VAR_2->alpha2[1]);
  FUNC_5(VAR_2);
  return -VAR_0;
 }

 VAR_4 = FUNC_7(VAR_3->wiphy_idx);
 if (!VAR_4)
  return -VAR_1;

 if (VAR_3->intersect)
  return -VAR_0;

 FUNC_6(0, VAR_2);
 return 0;
}
