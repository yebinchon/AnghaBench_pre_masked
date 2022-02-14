
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct flow_filter {scalar_t__ perturb_period; int perturb_timer; int hashrnd; } ;


 struct flow_filter* VAR_0 ;
 struct flow_filter* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct flow_filter *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 FUNC_1(&VAR_4->hashrnd, 4);
 if (VAR_4->perturb_period)
  FUNC_2(&VAR_4->perturb_timer, VAR_1 + VAR_4->perturb_period);
}
