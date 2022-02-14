
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* update ) (struct hda_codec*) ;int old_hook; scalar_t__ led_value; scalar_t__ capture; int led_mode; } ;
struct hda_gen_spec {int cap_sync_hook; TYPE_1__ micmute_led; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_gen_spec*,int *,int *) ;
 int VAR_3 ;

int FUNC_1(struct hda_codec *VAR_4,
    void (*VAR_5)(struct hda_codec *))
{
 struct hda_gen_spec *VAR_6 = VAR_4->spec;

 VAR_6->micmute_led.led_mode = VAR_1;
 VAR_6->micmute_led.capture = 0;
 VAR_6->micmute_led.led_value = 0;
 VAR_6->micmute_led.old_hook = VAR_6->cap_sync_hook;
 VAR_6->micmute_led.update = VAR_5;
 VAR_6->cap_sync_hook = VAR_3;
 if (!FUNC_0(VAR_6, ((void*)0), &VAR_2))
  return -VAR_0;
 return 0;
}
