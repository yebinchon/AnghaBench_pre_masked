
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_out_type; } ;
struct hda_gen_spec {int * aamix_out_paths; int * speaker_paths; int aamix_mode; int * hp_paths; TYPE_1__ autocfg; int * out_paths; int have_aamix_ctl; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_gen_spec*) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_2->spec;

 if (!VAR_3->have_aamix_ctl)
  return;
 if (!FUNC_0(VAR_3))
  return;
 FUNC_1(VAR_2, VAR_3->aamix_mode, VAR_3->out_paths[0],
      VAR_3->aamix_out_paths[0],
      VAR_3->autocfg.line_out_type);
 FUNC_1(VAR_2, VAR_3->aamix_mode, VAR_3->hp_paths[0],
      VAR_3->aamix_out_paths[1],
      VAR_0);
 FUNC_1(VAR_2, VAR_3->aamix_mode, VAR_3->speaker_paths[0],
      VAR_3->aamix_out_paths[2],
      VAR_1);
}
