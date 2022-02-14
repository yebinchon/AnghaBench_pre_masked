
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int indep_hp; int keep_eapd_on; int power_down_unused; int add_stereo_mix_input; int pcm_playback_hook; } ;
struct via_spec {scalar_t__ codec_type; TYPE_1__ gen; } ;
struct hda_codec {int power_save_node; int patch_ops; struct via_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct hda_codec*) ;
 struct via_spec* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct via_spec *FUNC_3(struct hda_codec *VAR_6)
{
 struct via_spec *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_6->spec = VAR_7;
 FUNC_2(&VAR_7->gen);
 VAR_7->codec_type = FUNC_0(VAR_6);

 if (VAR_7->codec_type == VAR_2)
  VAR_7->codec_type = VAR_3;
 VAR_7->gen.indep_hp = 1;
 VAR_7->gen.keep_eapd_on = 1;
 VAR_7->gen.pcm_playback_hook = VAR_5;
 VAR_7->gen.add_stereo_mix_input = VAR_1;
 VAR_6->power_save_node = 1;
 VAR_7->gen.power_down_unused = 1;
 VAR_6->patch_ops = VAR_4;
 return VAR_7;
}
