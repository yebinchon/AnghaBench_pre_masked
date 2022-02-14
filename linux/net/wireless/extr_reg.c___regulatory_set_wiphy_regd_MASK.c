
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regulatory_flags; } ;
typedef struct ieee80211_regdomain const ieee80211_regdomain ;
struct cfg80211_registered_device {struct ieee80211_regdomain const* requested_regd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_regdomain const*) ;
 int FUNC_1 (struct ieee80211_regdomain const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ieee80211_regdomain const*) ;
 int FUNC_5 (struct ieee80211_regdomain const*) ;
 int FUNC_6 (struct ieee80211_regdomain const*) ;
 struct ieee80211_regdomain const* FUNC_7 (struct ieee80211_regdomain const*) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct cfg80211_registered_device* FUNC_10 (struct wiphy*) ;

__attribute__((used)) static int FUNC_11(struct wiphy *VAR_4,
           struct ieee80211_regdomain *VAR_5)
{
 const struct ieee80211_regdomain *VAR_6;
 const struct ieee80211_regdomain *VAR_7;
 struct cfg80211_registered_device *VAR_8;

 if (FUNC_3(!VAR_4 || !VAR_5))
  return -VAR_0;

 if (FUNC_2(!(VAR_4->regulatory_flags & VAR_2),
   "wiphy should have REGULATORY_WIPHY_SELF_MANAGED\n"))
  return -VAR_1;

 if (FUNC_2(!FUNC_4(VAR_5), "Invalid regulatory domain detected\n")) {
  FUNC_6(VAR_5);
  return -VAR_0;
 }

 VAR_6 = FUNC_7(VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_8 = FUNC_10(VAR_4);

 FUNC_8(&VAR_3);
 VAR_7 = VAR_8->requested_regd;
 VAR_8->requested_regd = VAR_6;
 FUNC_9(&VAR_3);

 FUNC_5(VAR_7);
 return 0;
}
