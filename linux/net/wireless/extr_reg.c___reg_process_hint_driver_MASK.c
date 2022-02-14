
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {scalar_t__ initiator; int alpha2; } ;
typedef enum reg_request_treatment { ____Placeholder_reg_request_treatment } reg_request_treatment ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct regulatory_request* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static enum reg_request_treatment
FUNC_2(struct regulatory_request *VAR_5)
{
 struct regulatory_request *VAR_6 = FUNC_0();

 if (VAR_6->initiator == VAR_0) {
  if (FUNC_1(VAR_5->alpha2))
   return VAR_4;
  return VAR_2;
 }






 if (VAR_6->initiator == VAR_1 &&
     !FUNC_1(VAR_5->alpha2))
  return VAR_2;

 return VAR_3;
}
