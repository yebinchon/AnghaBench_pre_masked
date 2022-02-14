
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {int intersect; int processed; } ;
typedef enum reg_request_treatment { ____Placeholder_reg_request_treatment } reg_request_treatment ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulatory_request*) ;
 int FUNC_1 (struct regulatory_request*) ;

__attribute__((used)) static enum reg_request_treatment
FUNC_2(struct regulatory_request *VAR_2)
{
 if (FUNC_0(VAR_2)) {
  VAR_2->intersect = 0;
  VAR_2->processed = 0;
  FUNC_1(VAR_2);
  return VAR_1;
 }

 return VAR_0;
}
