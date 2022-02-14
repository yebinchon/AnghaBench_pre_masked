
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ line_out_type; int speaker_outs; int hp_outs; } ;
struct hda_gen_spec {int speaker_paths; TYPE_1__ autocfg; int hp_paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_2->spec;

 if (VAR_3->autocfg.line_out_type != VAR_0)
  FUNC_0(VAR_2, VAR_3->autocfg.hp_outs, VAR_3->hp_paths);
 if (VAR_3->autocfg.line_out_type != VAR_1)
  FUNC_0(VAR_2, VAR_3->autocfg.speaker_outs,
     VAR_3->speaker_paths);
}
