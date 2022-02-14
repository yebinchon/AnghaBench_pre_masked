
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol_new {int count; } ;
struct auto_pin_cfg {int dig_outs; int * dig_out_pins; } ;
struct TYPE_2__ {struct auto_pin_cfg autocfg; } ;
struct sigmatel_spec {char** spdif_labels; TYPE_1__ gen; int spdif_mux; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*,int *,char const* const,int,int *) ;
 struct snd_kcontrol_new* FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int VAR_2 ;
 char** VAR_3 ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_4)
{
 struct sigmatel_spec *VAR_5 = VAR_4->spec;
 struct auto_pin_cfg *VAR_6 = &VAR_5->gen.autocfg;
 const char * const *VAR_7 = VAR_5->spdif_labels;
 struct snd_kcontrol_new *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_6->dig_outs < 1)
  return 0;

 VAR_10 = FUNC_3(VAR_4, VAR_6->dig_out_pins[0]);
 if (VAR_10 <= 1)
  return 0;

 if (!VAR_7)
  VAR_7 = VAR_3;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (FUNC_0(!VAR_7[VAR_9]))
   return -VAR_0;
  FUNC_1(VAR_4, &VAR_5->spdif_mux, VAR_7[VAR_9], VAR_9, ((void*)0));
 }

 VAR_8 = FUNC_2(&VAR_5->gen, ((void*)0), &VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->count = VAR_6->dig_outs;

 return 0;
}
