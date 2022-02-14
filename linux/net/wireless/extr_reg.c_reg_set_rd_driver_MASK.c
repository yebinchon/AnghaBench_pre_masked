
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regd; } ;
struct regulatory_request {int intersect; int wiphy_idx; } ;
struct ieee80211_regdomain {int * alpha2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_regdomain const*) ;
 int FUNC_1 (struct ieee80211_regdomain const*) ;
 int FUNC_2 () ;
 struct ieee80211_regdomain* FUNC_3 (struct wiphy*) ;
 int FUNC_4 (struct ieee80211_regdomain const*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (struct ieee80211_regdomain const*) ;
 int FUNC_8 (int ,struct ieee80211_regdomain const*) ;
 int FUNC_9 (struct ieee80211_regdomain const*) ;
 struct ieee80211_regdomain* FUNC_10 (struct ieee80211_regdomain const*) ;
 int FUNC_11 (int *) ;
 struct ieee80211_regdomain* FUNC_12 (struct ieee80211_regdomain const*,int ) ;
 int FUNC_13 (int,struct ieee80211_regdomain const*) ;
 struct wiphy* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(const struct ieee80211_regdomain *VAR_3,
        struct regulatory_request *VAR_4)
{
 const struct ieee80211_regdomain *VAR_5;
 const struct ieee80211_regdomain *VAR_6 = ((void*)0);
 const struct ieee80211_regdomain *VAR_7;
 struct wiphy *VAR_8;

 if (FUNC_5(VAR_3->alpha2))
  return -VAR_1;

 if (!FUNC_11(VAR_3->alpha2))
  return -VAR_0;

 if (!FUNC_4(VAR_3)) {
  FUNC_6("Invalid regulatory domain detected: %c%c\n",
         VAR_3->alpha2[0], VAR_3->alpha2[1]);
  FUNC_7(VAR_3);
  return -VAR_1;
 }

 VAR_8 = FUNC_14(VAR_4->wiphy_idx);
 if (!VAR_8)
  return -VAR_2;

 if (!VAR_4->intersect) {
  if (VAR_8->regd)
   return -VAR_0;

  VAR_5 = FUNC_10(VAR_3);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);

  FUNC_8(VAR_8->regd, VAR_5);
  FUNC_13(0, VAR_3);
  return 0;
 }

 VAR_6 = FUNC_12(VAR_3, FUNC_2());
 if (!VAR_6)
  return -VAR_1;






 VAR_7 = FUNC_3(VAR_8);
 FUNC_8(VAR_8->regd, VAR_3);
 FUNC_9(VAR_7);

 VAR_3 = ((void*)0);

 FUNC_13(0, VAR_6);

 return 0;
}
