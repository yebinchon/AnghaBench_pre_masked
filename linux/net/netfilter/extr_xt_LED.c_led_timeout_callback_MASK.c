
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_led_info_internal {int netfilter_led_trigger; } ;
struct timer_list {int dummy; } ;


 int VAR_0 ;
 struct xt_led_info_internal* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,int ) ;
 struct xt_led_info_internal* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_3)
{
 struct xt_led_info_internal *VAR_4 = FUNC_0(VAR_4, VAR_3,
             VAR_2);

 FUNC_1(&VAR_4->netfilter_led_trigger, VAR_0);
}
