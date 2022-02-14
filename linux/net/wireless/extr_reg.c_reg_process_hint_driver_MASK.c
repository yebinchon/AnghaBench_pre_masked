
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regd; } ;
struct regulatory_request {int intersect; int processed; } ;
struct ieee80211_regdomain {int dummy; } ;
typedef enum reg_request_treatment { ____Placeholder_reg_request_treatment } reg_request_treatment ;


 int FUNC_0 (struct ieee80211_regdomain const*) ;




 int FUNC_1 (struct regulatory_request*) ;
 int FUNC_2 () ;
 struct ieee80211_regdomain* FUNC_3 (struct wiphy*) ;
 int FUNC_4 (struct regulatory_request*) ;
 int FUNC_5 (int ,struct ieee80211_regdomain const*) ;
 int FUNC_6 (struct ieee80211_regdomain const*) ;
 struct ieee80211_regdomain* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct regulatory_request*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct regulatory_request*) ;

__attribute__((used)) static enum reg_request_treatment
FUNC_11(struct wiphy *VAR_0,
   struct regulatory_request *VAR_1)
{
 const struct ieee80211_regdomain *VAR_2, *VAR_3;
 enum reg_request_treatment VAR_4;

 VAR_4 = FUNC_1(VAR_1);

 switch (VAR_4) {
 case 128:
  break;
 case 130:
  return 130;
 case 129:
 case 131:
  VAR_2 = FUNC_7(FUNC_2());
  if (FUNC_0(VAR_2))
   return 130;

  VAR_3 = FUNC_3(VAR_0);
  FUNC_5(VAR_0->regd, VAR_2);
  FUNC_6(VAR_3);
 }


 VAR_1->intersect = VAR_4 == 129;
 VAR_1->processed = 0;






 if (VAR_4 == 131) {
  FUNC_4(VAR_1);
  FUNC_10(VAR_1);
  FUNC_9();
  return 131;
 }

 if (FUNC_8(VAR_1)) {
  FUNC_10(VAR_1);
  return 128;
 }

 return 130;
}
