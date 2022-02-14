
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgdtor_param {struct xt_led_info* targinfo; } ;
struct xt_led_info_internal {struct xt_led_info_internal* trigger_id; int netfilter_led_trigger; int timer; int list; scalar_t__ refcnt; } ;
struct xt_led_info {struct xt_led_info_internal* internal_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct xt_led_info_internal*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(const struct xt_tgdtor_param *VAR_1)
{
 const struct xt_led_info *VAR_2 = VAR_1->targinfo;
 struct xt_led_info_internal *VAR_3 = VAR_2->internal_data;

 FUNC_4(&VAR_0);

 if (--VAR_3->refcnt) {
  FUNC_5(&VAR_0);
  return;
 }

 FUNC_3(&VAR_3->list);

 FUNC_0(&VAR_3->timer);

 FUNC_2(&VAR_3->netfilter_led_trigger);

 FUNC_5(&VAR_0);

 FUNC_1(VAR_3->trigger_id);
 FUNC_1(VAR_3);
}
