
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {int intersect; int processed; int * alpha2; } ;
typedef enum reg_request_treatment { ____Placeholder_reg_request_treatment } reg_request_treatment ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regulatory_request*) ;
 scalar_t__ FUNC_1 (struct regulatory_request*) ;
 int FUNC_2 (struct regulatory_request*) ;
 int * VAR_4 ;

__attribute__((used)) static enum reg_request_treatment
FUNC_3(struct regulatory_request *VAR_5)
{
 enum reg_request_treatment VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == VAR_1 ||
     VAR_6 == VAR_0)
  return VAR_1;

 VAR_5->intersect = VAR_6 == VAR_2;
 VAR_5->processed = 0;

 if (FUNC_1(VAR_5)) {
  FUNC_2(VAR_5);
  VAR_4[0] = VAR_5->alpha2[0];
  VAR_4[1] = VAR_5->alpha2[1];
  return VAR_3;
 }

 return VAR_1;
}
