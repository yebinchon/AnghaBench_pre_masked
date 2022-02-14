
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tpt_led_trigger {char const* name; unsigned int blink_table_len; unsigned int want; int timer; struct ieee80211_local* local; struct ieee80211_tpt_blink const* blink_table; } ;
struct ieee80211_tpt_blink {int dummy; } ;
struct TYPE_4__ {char const* name; } ;
struct TYPE_3__ {int wiphy; } ;
struct ieee80211_local {struct tpt_led_trigger* tpt_led_trigger; TYPE_2__ tpt_led; TYPE_1__ hw; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tpt_led_trigger*) ;
 struct ieee80211_local* FUNC_1 (struct ieee80211_hw*) ;
 struct tpt_led_trigger* FUNC_2 (int,int ) ;
 int FUNC_3 (char const*,int,char*,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_1 ;
 char* FUNC_5 (int ) ;

const char *
FUNC_6(struct ieee80211_hw *VAR_2,
       unsigned int VAR_3,
       const struct ieee80211_tpt_blink *VAR_4,
       unsigned int VAR_5)
{
 struct ieee80211_local *VAR_6 = FUNC_1(VAR_2);
 struct tpt_led_trigger *VAR_7;

 if (FUNC_0(VAR_6->tpt_led_trigger))
  return ((void*)0);

 VAR_7 = FUNC_2(sizeof(struct tpt_led_trigger), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 FUNC_3(VAR_7->name, sizeof(VAR_7->name),
   "%stpt", FUNC_5(VAR_6->hw.wiphy));

 VAR_6->tpt_led.name = VAR_7->name;

 VAR_7->blink_table = VAR_4;
 VAR_7->blink_table_len = VAR_5;
 VAR_7->want = VAR_3;
 VAR_7->local = VAR_6;

 FUNC_4(&VAR_7->timer, VAR_1, 0);

 VAR_6->tpt_led_trigger = VAR_7;

 return VAR_7->name;
}
