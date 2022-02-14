
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int formats; int maxbps; int rates; } ;
struct hdmi_spec {TYPE_2__ pcm_playback; } ;
struct TYPE_3__ {int init; } ;
struct hda_codec {struct hdmi_spec* spec; TYPE_1__ patch_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_6)
{
 struct hdmi_spec *VAR_7;
 int VAR_8 = FUNC_0(VAR_6, VAR_4,
        VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->patch_ops.init = VAR_3;

 VAR_7 = VAR_6->spec;
 VAR_7->pcm_playback.rates = VAR_2;
 VAR_7->pcm_playback.maxbps = VAR_1;
 VAR_7->pcm_playback.formats = VAR_0;
 return 0;
}
