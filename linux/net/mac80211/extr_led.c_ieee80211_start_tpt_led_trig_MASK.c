
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpt_led_trigger {int running; int timer; } ;
struct ieee80211_local {struct tpt_led_trigger* tpt_led_trigger; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_local*,struct tpt_led_trigger*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_local *VAR_2)
{
 struct tpt_led_trigger *VAR_3 = VAR_2->tpt_led_trigger;

 if (VAR_3->running)
  return;


 FUNC_3(VAR_2, VAR_3);
 VAR_3->running = 1;

 FUNC_2(&VAR_3->timer);
 FUNC_0(&VAR_3->timer, FUNC_1(VAR_1 + VAR_0));
}
