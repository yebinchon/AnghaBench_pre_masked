
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_pin_cfg {int num_inputs; TYPE_1__* inputs; } ;
struct hda_gen_spec {int loopback_merge_path; int * loopback_paths; scalar_t__ mixer_nid; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int pin; } ;


 scalar_t__ FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 struct auto_pin_cfg *VAR_2 = &VAR_1->autocfg;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_inputs; VAR_3++) {
  hda_nid_t VAR_4 = VAR_2->inputs[VAR_3].pin;
  if (FUNC_0(VAR_0, VAR_4))
   FUNC_1(VAR_0, VAR_4);


  if (VAR_1->mixer_nid) {
   FUNC_2(VAR_0, VAR_1->loopback_paths[VAR_3]);
   FUNC_2(VAR_0, VAR_1->loopback_merge_path);
  }
 }
}
