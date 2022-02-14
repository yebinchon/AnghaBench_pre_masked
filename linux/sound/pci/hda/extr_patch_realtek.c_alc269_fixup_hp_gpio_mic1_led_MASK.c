
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int power_filter; struct alc_spec* spec; } ;
struct alc_spec {int gpio_mask; int gpio_dir; int cap_mute_led_nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3,
    const struct hda_fixup *VAR_4, int VAR_5)
{
 struct alc_spec *VAR_6 = VAR_3->spec;

 FUNC_0(VAR_3, VAR_5, 0x08, 0);
 if (VAR_5 == VAR_0) {



  VAR_6->gpio_mask |= 0x10;
  VAR_6->gpio_dir |= 0x10;
  VAR_6->cap_mute_led_nid = 0x18;
  FUNC_1(VAR_3, VAR_1);
  VAR_3->power_filter = VAR_2;
 }
}
