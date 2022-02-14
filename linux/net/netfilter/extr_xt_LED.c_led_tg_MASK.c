
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_led_info_internal {int netfilter_led_trigger; int timer; } ;
struct xt_led_info {scalar_t__ delay; scalar_t__ always_blink; struct xt_led_info_internal* internal_data; } ;
struct xt_action_param {struct xt_led_info* targinfo; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,unsigned long*,unsigned long*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static unsigned int
FUNC_5(struct sk_buff *VAR_5, const struct xt_action_param *VAR_6)
{
 const struct xt_led_info *VAR_7 = VAR_6->targinfo;
 struct xt_led_info_internal *VAR_8 = VAR_7->internal_data;
 unsigned long VAR_9 = VAR_3;





 if ((VAR_7->delay > 0) && VAR_7->always_blink &&
     FUNC_4(&VAR_8->timer))
  FUNC_0(&VAR_8->netfilter_led_trigger,
       &VAR_9, &VAR_9, 1);
 else
  FUNC_1(&VAR_8->netfilter_led_trigger, VAR_0);


 if (VAR_7->delay > 0) {
  FUNC_2(&VAR_8->timer,
     VAR_4 + FUNC_3(VAR_7->delay));


 } else if (VAR_7->delay == 0) {
  FUNC_1(&VAR_8->netfilter_led_trigger, VAR_1);
 }



 return VAR_2;
}
