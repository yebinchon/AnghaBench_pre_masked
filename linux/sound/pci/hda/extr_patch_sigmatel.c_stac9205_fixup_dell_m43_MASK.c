
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigmatel_spec {int gpio_dir; int eapd_mask; int gpio_mask; int gpio_mute; int gpio_data; } ;
struct hda_jack_callback {int private_data; } ;
struct hda_fixup {int dummy; } ;
struct TYPE_2__ {int afg; } ;
struct hda_codec {TYPE_1__ core; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_jack_callback*) ;
 int VAR_2 ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;
 struct hda_jack_callback* FUNC_3 (struct hda_codec*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_4,
        const struct hda_fixup *VAR_5, int VAR_6)
{
 struct sigmatel_spec *VAR_7 = VAR_4->spec;
 struct hda_jack_callback *VAR_8;

 if (VAR_6 == VAR_1) {
  FUNC_1(VAR_4, VAR_2);


  FUNC_2(VAR_4, VAR_4->core.afg, 0,
   VAR_0, 0x10);
  VAR_8 = FUNC_3(VAR_4, VAR_4->core.afg,
          VAR_3);
  if (!FUNC_0(VAR_8))
   VAR_8->private_data = 0x01;

  VAR_7->gpio_dir = 0x0b;
  VAR_7->eapd_mask = 0x01;
  VAR_7->gpio_mask = 0x1b;
  VAR_7->gpio_mute = 0x10;



  VAR_7->gpio_data = 0x01;
 }
}
