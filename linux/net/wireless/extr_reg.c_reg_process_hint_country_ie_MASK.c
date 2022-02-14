
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct regulatory_request {int intersect; int processed; } ;
typedef enum reg_request_treatment { ____Placeholder_reg_request_treatment } reg_request_treatment ;






 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct wiphy*,struct regulatory_request*) ;
 int FUNC_2 (struct regulatory_request*) ;
 scalar_t__ FUNC_3 (struct regulatory_request*) ;
 int FUNC_4 (struct regulatory_request*) ;

__attribute__((used)) static enum reg_request_treatment
FUNC_5(struct wiphy *VAR_0,
       struct regulatory_request *VAR_1)
{
 enum reg_request_treatment VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 switch (VAR_2) {
 case 128:
  break;
 case 130:
  return 130;
 case 131:
  FUNC_2(VAR_1);
  return 131;
 case 129:




  FUNC_0(1, "Unexpected intersection for country elements");
  return 130;
 }

 VAR_1->intersect = 0;
 VAR_1->processed = 0;

 if (FUNC_3(VAR_1)) {
  FUNC_4(VAR_1);
  return 128;
 }

 return 130;
}
