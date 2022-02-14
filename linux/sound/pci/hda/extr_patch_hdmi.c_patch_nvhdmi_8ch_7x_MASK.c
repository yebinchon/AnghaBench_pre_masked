
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_channels; } ;
struct hdmi_spec {int pcm_playback; TYPE_1__ multiout; } ;
struct TYPE_4__ {int build_controls; int build_pcms; int init; } ;
struct hda_codec {TYPE_2__ patch_ops; struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int VAR_3 ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_4)
{
 struct hdmi_spec *VAR_5;
 int VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_5 = VAR_4->spec;
 VAR_5->multiout.max_channels = 8;
 VAR_5->pcm_playback = VAR_3;
 VAR_4->patch_ops.init = VAR_2;
 VAR_4->patch_ops.build_pcms = VAR_1;
 VAR_4->patch_ops.build_controls = VAR_0;



 FUNC_0(VAR_4, 8);

 return 0;
}
