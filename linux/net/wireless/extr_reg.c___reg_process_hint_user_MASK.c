
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {scalar_t__ initiator; int alpha2; scalar_t__ intersect; } ;
typedef enum reg_request_treatment { ____Placeholder_reg_request_treatment } reg_request_treatment ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct regulatory_request* FUNC_0 () ;
 int FUNC_1 (struct regulatory_request*) ;
 scalar_t__ FUNC_2 (struct regulatory_request*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static enum reg_request_treatment
FUNC_4(struct regulatory_request *VAR_8)
{
 struct regulatory_request *VAR_9 = FUNC_0();

 if (FUNC_2(VAR_8))
  return FUNC_1(VAR_8);

 if (FUNC_2(VAR_9))
  return VAR_5;

 if (VAR_9->initiator == VAR_1)
  return VAR_6;




 if (VAR_9->initiator == VAR_3 &&
     VAR_9->intersect)
  return VAR_5;




 if ((VAR_9->initiator == VAR_0 ||
      VAR_9->initiator == VAR_2 ||
      VAR_9->initiator == VAR_3) &&
     FUNC_3(VAR_9->alpha2))
  return VAR_5;

 if (!FUNC_3(VAR_8->alpha2))
  return VAR_4;

 return VAR_7;
}
