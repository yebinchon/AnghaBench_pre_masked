
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regulatory_flags; } ;
struct regulatory_request {scalar_t__ initiator; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct regulatory_request* FUNC_0 () ;
 int FUNC_1 (struct wiphy*,struct regulatory_request*) ;
 int FUNC_2 (struct wiphy*) ;
 int VAR_4 ;
 int FUNC_3 (struct wiphy*) ;
 int FUNC_4 (struct wiphy*,scalar_t__) ;

void FUNC_5(struct wiphy *VAR_5)
{
 struct regulatory_request *VAR_6 = FUNC_0();


 if (VAR_5->regulatory_flags & VAR_3) {
  VAR_5->regulatory_flags |= VAR_2 |
        VAR_1;






  if (VAR_6->initiator == VAR_0)
   FUNC_1(VAR_5, VAR_6);
 }

 if (!FUNC_2(VAR_5))
  VAR_4++;

 FUNC_4(VAR_5, VAR_6->initiator);
 FUNC_3(VAR_5);
}
