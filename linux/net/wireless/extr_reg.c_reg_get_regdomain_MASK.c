
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {scalar_t__ regd; } ;
struct regulatory_request {scalar_t__ initiator; } ;
struct ieee80211_regdomain {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ieee80211_regdomain const* FUNC_0 () ;
 struct regulatory_request* FUNC_1 () ;
 struct ieee80211_regdomain const* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static const struct ieee80211_regdomain *FUNC_3(struct wiphy *VAR_2)
{
 struct regulatory_request *VAR_3 = FUNC_1();





 if (VAR_3->initiator != VAR_0 &&
     VAR_3->initiator != VAR_1 &&
     VAR_2->regd)
  return FUNC_2(VAR_2);

 return FUNC_0();
}
