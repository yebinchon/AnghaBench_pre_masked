
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regulatory_flags; } ;
struct regulatory_request {scalar_t__ initiator; int alpha2; int wiphy_idx; } ;
typedef enum reg_request_treatment { ____Placeholder_reg_request_treatment } reg_request_treatment ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct regulatory_request* FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct regulatory_request*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 struct wiphy* FUNC_5 (int ) ;

__attribute__((used)) static enum reg_request_treatment
FUNC_6(struct wiphy *VAR_6,
         struct regulatory_request *VAR_7)
{
 struct wiphy *VAR_8 = ((void*)0);
 struct regulatory_request *VAR_9 = FUNC_0();

 if (FUNC_2(VAR_9)) {

  if (FUNC_3(VAR_7->alpha2))
   return VAR_4;
  return VAR_3;
 } else {
  if (VAR_6->regulatory_flags & VAR_2)
   return VAR_4;
 }

 if (FUNC_4(!FUNC_1(VAR_7->alpha2)))
  return -VAR_0;

 if (VAR_9->initiator != VAR_1)
  return VAR_5;

 VAR_8 = FUNC_5(VAR_9->wiphy_idx);

 if (VAR_8 != VAR_6) {






  if (FUNC_3(VAR_7->alpha2))
   return VAR_4;
  return VAR_3;
 }

 if (FUNC_3(VAR_7->alpha2))
  return VAR_5;
 return VAR_3;
}
