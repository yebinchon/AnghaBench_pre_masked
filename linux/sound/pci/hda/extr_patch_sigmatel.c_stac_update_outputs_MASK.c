
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int master_mute; scalar_t__ speaker_muted; } ;
struct sigmatel_spec {int gpio_mute; unsigned int eapd_mask; unsigned int gpio_data; int gpio_dir; int gpio_mask; TYPE_2__ gen; scalar_t__ eapd_switch; } ;
struct TYPE_3__ {int afg; } ;
struct hda_codec {TYPE_1__ core; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_1)
{
 struct sigmatel_spec *VAR_2 = VAR_1->spec;

 if (VAR_2->gpio_mute)
  VAR_2->gen.master_mute =
   !(FUNC_0(VAR_1, VAR_1->core.afg, 0,
    VAR_0, 0) & VAR_2->gpio_mute);

 FUNC_1(VAR_1);

 if (VAR_2->eapd_mask && VAR_2->eapd_switch) {
  unsigned int VAR_3 = VAR_2->gpio_data;
  if (VAR_2->gen.speaker_muted)
   VAR_3 &= ~VAR_2->eapd_mask;
  else
   VAR_3 |= VAR_2->eapd_mask;
  if (VAR_2->gpio_data != VAR_3) {
   VAR_2->gpio_data = VAR_3;
   FUNC_2(VAR_1, VAR_2->gpio_mask, VAR_2->gpio_dir,
          VAR_3);
  }
 }
}
