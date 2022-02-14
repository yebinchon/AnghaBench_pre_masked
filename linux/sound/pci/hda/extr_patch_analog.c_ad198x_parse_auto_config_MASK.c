
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int spdif_status_reset; int no_trigger_sense; int no_sticky_stream; struct ad198x_spec* spec; } ;
struct auto_pin_cfg {int dummy; } ;
struct TYPE_2__ {int indep_hp; scalar_t__ add_stereo_mix_input; struct auto_pin_cfg autocfg; } ;
struct ad198x_spec {TYPE_1__ gen; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct auto_pin_cfg*) ;
 int FUNC_1 (struct hda_codec*,struct auto_pin_cfg*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1, bool VAR_2)
{
 struct ad198x_spec *VAR_3 = VAR_1->spec;
 struct auto_pin_cfg *VAR_4 = &VAR_3->gen.autocfg;
 int VAR_5;

 VAR_1->spdif_status_reset = 1;
 VAR_1->no_trigger_sense = 1;
 VAR_1->no_sticky_stream = 1;

 VAR_3->gen.indep_hp = VAR_2;
 if (!VAR_3->gen.add_stereo_mix_input)
  VAR_3->gen.add_stereo_mix_input = VAR_0;

 VAR_5 = FUNC_1(VAR_1, VAR_4, ((void*)0), 0);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_1, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
