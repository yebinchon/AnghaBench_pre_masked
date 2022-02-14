
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int (* reg_notifier ) (struct wiphy*,struct regulatory_request*) ;} ;
struct regulatory_request {int dummy; } ;


 int FUNC_0 (struct wiphy*,struct regulatory_request*) ;

__attribute__((used)) static void FUNC_1(struct wiphy *VAR_0,
         struct regulatory_request *VAR_1)
{
 if (VAR_0->reg_notifier)
  VAR_0->reg_notifier(VAR_0, VAR_1);
}
