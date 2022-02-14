
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {struct cs_spec* spec; } ;
struct cs_spec {int gpio_eapd_hp; int gpio_eapd_speaker; int gpio_mask; int gpio_dir; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_1,
     const struct hda_fixup *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0) {
  struct cs_spec *VAR_4 = VAR_1->spec;
  VAR_4->gpio_eapd_hp = 2;
  VAR_4->gpio_eapd_speaker = 8;
  VAR_4->gpio_mask = VAR_4->gpio_dir =
   VAR_4->gpio_eapd_hp | VAR_4->gpio_eapd_speaker;
 }
}
