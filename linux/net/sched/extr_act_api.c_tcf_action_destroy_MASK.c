
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action_ops {int owner; } ;
struct tc_action {struct tc_action_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tc_action*,int,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct tc_action *VAR_2[], int VAR_3)
{
 const struct tc_action_ops *VAR_4;
 struct tc_action *VAR_5;
 int VAR_6 = 0, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1 && VAR_2[VAR_7]; VAR_7++) {
  VAR_5 = VAR_2[VAR_7];
  VAR_2[VAR_7] = ((void*)0);
  VAR_4 = VAR_5->ops;
  VAR_6 = FUNC_0(VAR_5, VAR_3, 1);
  if (VAR_6 == VAR_0)
   FUNC_1(VAR_4->owner);
  else if (VAR_6 < 0)
   return VAR_6;
 }
 return VAR_6;
}
