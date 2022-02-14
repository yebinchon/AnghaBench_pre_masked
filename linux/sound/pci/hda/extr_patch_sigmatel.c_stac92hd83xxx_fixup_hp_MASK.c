
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_in_auto_switch; } ;
struct sigmatel_spec {TYPE_1__ gen; int gpio_led_polarity; int gpio_led; int default_polarity; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,int,int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_1,
       const struct hda_fixup *VAR_2, int VAR_3)
{
 struct sigmatel_spec *VAR_4 = VAR_1->spec;

 if (VAR_3 != VAR_0)
  return;

 if (FUNC_2(VAR_1)) {
  FUNC_3(VAR_1, 0xa, 0x2101201f);
  FUNC_3(VAR_1, 0xf, 0x2181205e);
 }

 if (FUNC_1(VAR_1, VAR_4->default_polarity))
  FUNC_0(VAR_1, "mute LED gpio %d polarity %d\n",
    VAR_4->gpio_led,
    VAR_4->gpio_led_polarity);


 VAR_4->gen.line_in_auto_switch = 1;
}
