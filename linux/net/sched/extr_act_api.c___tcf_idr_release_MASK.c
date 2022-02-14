
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action {int tcfa_bindcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tc_action*,int) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(struct tc_action *VAR_2, bool VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 if (VAR_2) {
  if (!VAR_3 && VAR_4 && FUNC_1(&VAR_2->tcfa_bindcnt) > 0)
   return -VAR_1;

  if (FUNC_0(VAR_2, VAR_3))
   VAR_5 = VAR_0;
 }

 return VAR_5;
}
