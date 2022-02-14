
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regulatory_flags; int regd; } ;
struct regulatory_request {int alpha2; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct regulatory_request* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct wiphy*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct regulatory_request*) ;
 scalar_t__ FUNC_6 (struct wiphy*) ;

__attribute__((used)) static bool FUNC_7(struct wiphy *VAR_4,
         enum nl80211_reg_initiator VAR_5)
{
 struct regulatory_request *VAR_6 = FUNC_0();

 if (VAR_4->regulatory_flags & VAR_3)
  return 1;

 if (!VAR_6) {
  FUNC_2("Ignoring regulatory request set by %s since last_request is not set\n",
    FUNC_4(VAR_5));
  return 1;
 }

 if (VAR_5 == VAR_0 &&
     VAR_4->regulatory_flags & VAR_2) {
  FUNC_2("Ignoring regulatory request set by %s since the driver uses its own custom regulatory domain\n",
    FUNC_4(VAR_5));
  return 1;
 }





 if (FUNC_6(VAR_4) && !VAR_4->regd &&
     VAR_5 != VAR_1 &&
     !FUNC_1(VAR_6->alpha2)) {
  FUNC_2("Ignoring regulatory request set by %s since the driver requires its own regulatory domain to be set first\n",
    FUNC_4(VAR_5));
  return 1;
 }

 if (FUNC_5(VAR_6))
  return FUNC_3(VAR_4);

 return 0;
}
