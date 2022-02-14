
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regulatory_flags; } ;
struct regulatory_request {scalar_t__ initiator; } ;
struct ieee80211_regdomain {int alpha2; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ieee80211_regdomain* FUNC_0 () ;
 struct regulatory_request* FUNC_1 () ;
 struct ieee80211_regdomain* FUNC_2 (struct wiphy*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct wiphy *VAR_2)
{
 const struct ieee80211_regdomain *VAR_3 = FUNC_0();
 const struct ieee80211_regdomain *VAR_4 = FUNC_2(VAR_2);
 struct regulatory_request *VAR_5 = FUNC_1();

 if (FUNC_3(VAR_3->alpha2) || (VAR_4 && FUNC_3(VAR_4->alpha2)))
  return 1;

 if (VAR_5 && VAR_5->initiator != VAR_0 &&
     VAR_2->regulatory_flags & VAR_1)
  return 1;

 return 0;
}
