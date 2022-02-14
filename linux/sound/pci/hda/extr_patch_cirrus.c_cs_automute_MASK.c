
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct cs_spec* spec; } ;
struct TYPE_2__ {int master_mute; scalar_t__ hp_jack_present; scalar_t__ automute_speaker; } ;
struct cs_spec {int gpio_eapd_hp; int gpio_eapd_speaker; int gpio_data; TYPE_1__ gen; scalar_t__ sense_b; scalar_t__ spdif_present; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1)
{
 struct cs_spec *VAR_2 = VAR_1->spec;


 VAR_2->gen.master_mute = !!(VAR_2->spdif_present && VAR_2->sense_b);

 FUNC_1(VAR_1);

 if (VAR_2->gpio_eapd_hp || VAR_2->gpio_eapd_speaker) {
  if (VAR_2->gen.automute_speaker)
   VAR_2->gpio_data = VAR_2->gen.hp_jack_present ?
    VAR_2->gpio_eapd_hp : VAR_2->gpio_eapd_speaker;
  else
   VAR_2->gpio_data =
    VAR_2->gpio_eapd_hp | VAR_2->gpio_eapd_speaker;
  FUNC_0(VAR_1, 0x01, 0,
        VAR_0, VAR_2->gpio_data);
 }
}
