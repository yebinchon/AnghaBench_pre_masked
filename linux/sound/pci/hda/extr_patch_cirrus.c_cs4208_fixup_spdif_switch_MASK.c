
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int put; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {struct cs_spec* spec; } ;
struct TYPE_3__ {int * dig_out_pins; } ;
struct TYPE_4__ {TYPE_1__ autocfg; } ;
struct cs_spec {int spdif_sw_put; TYPE_2__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_kcontrol* FUNC_0 (struct hda_codec*,char*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2,
          const struct hda_fixup *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_0) {
  struct cs_spec *VAR_5 = VAR_2->spec;
  struct snd_kcontrol *VAR_6;

  if (!VAR_5->gen.autocfg.dig_out_pins[0])
   return;
  VAR_6 = FUNC_0(VAR_2, "IEC958 Playback Switch");
  if (!VAR_6)
   return;
  VAR_5->spdif_sw_put = VAR_6->put;
  VAR_6->put = VAR_1;
 }
}
