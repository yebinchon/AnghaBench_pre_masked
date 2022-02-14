
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_3__ {scalar_t__ led_value; } ;
struct TYPE_4__ {TYPE_1__ micmute_led; } ;
struct alc_spec {int cap_mute_led_nid; TYPE_2__ gen; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3)
{
 struct alc_spec *VAR_4 = VAR_3->spec;
 unsigned int VAR_5;

 if (!VAR_4->cap_mute_led_nid)
  return;
 VAR_5 = FUNC_0(VAR_3, VAR_4->cap_mute_led_nid);
 VAR_5 &= ~VAR_0;
 if (VAR_4->gen.micmute_led.led_value)
  VAR_5 |= VAR_1;
 else
  VAR_5 |= VAR_2;
 FUNC_1(VAR_3, VAR_4->cap_mute_led_nid, VAR_5);
}
