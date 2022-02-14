
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ reg_state; int carrier_down_count; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct net_device *VAR_2)
{
 if (!FUNC_2(VAR_1, &VAR_2->state)) {
  if (VAR_2->reg_state == VAR_0)
   return;
  FUNC_0(&VAR_2->carrier_down_count);
  FUNC_1(VAR_2);
 }
}
