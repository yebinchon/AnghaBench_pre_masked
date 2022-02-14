
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int gpio_led_polarity; int gpio_led; int default_polarity; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1,
        const struct hda_fixup *VAR_2, int VAR_3)
{
 struct sigmatel_spec *VAR_4 = VAR_1->spec;

 if (VAR_3 != VAR_0)
  return;

 if (FUNC_1(VAR_1, VAR_4->default_polarity))
  FUNC_0(VAR_1, "mute LED gpio %d polarity %d\n",
    VAR_4->gpio_led,
    VAR_4->gpio_led_polarity);
}
