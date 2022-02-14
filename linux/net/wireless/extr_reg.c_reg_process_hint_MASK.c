
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regulatory_flags; } ;
struct regulatory_request {int initiator; scalar_t__ wiphy_idx; } ;
typedef enum reg_request_treatment { ____Placeholder_reg_request_treatment } reg_request_treatment ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (struct regulatory_request*) ;
 int FUNC_3 (struct regulatory_request*) ;
 int FUNC_4 (struct wiphy*,struct regulatory_request*) ;
 int FUNC_5 (struct wiphy*,struct regulatory_request*) ;
 int FUNC_6 (struct regulatory_request*) ;
 int FUNC_7 (struct wiphy*) ;
 struct wiphy* FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct wiphy*,int) ;

__attribute__((used)) static void FUNC_10(struct regulatory_request *VAR_5)
{
 struct wiphy *VAR_6 = ((void*)0);
 enum reg_request_treatment VAR_7;
 enum nl80211_reg_initiator VAR_8 = VAR_5->initiator;

 if (VAR_5->wiphy_idx != VAR_4)
  VAR_6 = FUNC_8(VAR_5->wiphy_idx);

 switch (VAR_8) {
 case 131:
  VAR_7 = FUNC_3(VAR_5);
  break;
 case 128:
  VAR_7 = FUNC_6(VAR_5);
  break;
 case 129:
  if (!VAR_6)
   goto out_free;
  VAR_7 = FUNC_5(VAR_6, VAR_5);
  break;
 case 130:
  if (!VAR_6)
   goto out_free;
  VAR_7 = FUNC_4(VAR_6, VAR_5);
  break;
 default:
  FUNC_0(1, "invalid initiator %d\n", VAR_8);
  goto out_free;
 }

 if (VAR_7 == VAR_2)
  goto out_free;

 FUNC_0(VAR_7 != VAR_3 && VAR_7 != VAR_1,
      "unexpected treatment value %d\n", VAR_7);




 if (VAR_7 == VAR_1 && VAR_6 &&
     VAR_6->regulatory_flags & VAR_0) {
  FUNC_9(VAR_6, VAR_8);
  FUNC_7(VAR_6);
  FUNC_1();
 }

 return;

out_free:
 FUNC_2(VAR_5);
}
