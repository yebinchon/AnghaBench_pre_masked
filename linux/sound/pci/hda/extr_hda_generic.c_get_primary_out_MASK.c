
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_pin_cfg {int line_outs; } ;
struct hda_gen_spec {int multi_ios; TYPE_1__* multi_io; int * private_dac_nids; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int dac; } ;



__attribute__((used)) static hda_nid_t FUNC_0(struct hda_codec *VAR_0, int VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;
 struct auto_pin_cfg *VAR_3 = &VAR_2->autocfg;

 if (VAR_3->line_outs > VAR_1)
  return VAR_2->private_dac_nids[VAR_1];
 VAR_1 -= VAR_3->line_outs;
 if (VAR_2->multi_ios > VAR_1)
  return VAR_2->multi_io[VAR_1].dac;
 return 0;
}
