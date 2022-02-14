
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_callback {int dummy; } ;
struct TYPE_2__ {int * hp_pins; } ;
struct hda_gen_spec {int automute_lo; int automute_speaker; int detect_hp; int hp_jack_present; scalar_t__ indep_hp_enabled; TYPE_1__ autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int,int *) ;

void FUNC_3(struct hda_codec *VAR_0,
        struct hda_jack_callback *VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;
 hda_nid_t *VAR_3 = VAR_2->autocfg.hp_pins;
 int VAR_4 = FUNC_0(VAR_2->autocfg.hp_pins);


 if (VAR_2->indep_hp_enabled) {
  VAR_3++;
  VAR_4--;
 }

 VAR_2->hp_jack_present = FUNC_2(VAR_0, VAR_4, VAR_3);
 if (!VAR_2->detect_hp || (!VAR_2->automute_speaker && !VAR_2->automute_lo))
  return;
 FUNC_1(VAR_0);
}
