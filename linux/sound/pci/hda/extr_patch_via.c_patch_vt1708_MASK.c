
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mixer_nid; int suppress_auto_mic; int auto_mute_via_amp; } ;
struct via_spec {int vt1708_jack_detect; TYPE_2__ gen; } ;
struct TYPE_3__ {int build_pcms; int build_controls; } ;
struct hda_codec {scalar_t__ jackpoll_interval; TYPE_1__ patch_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int *) ;
 int FUNC_3 (struct hda_codec*) ;
 struct via_spec* FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_7)
{
 struct via_spec *VAR_8;
 int VAR_9;


 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8 == ((void*)0))
  return -VAR_0;


 VAR_7->patch_ops.build_controls = VAR_3;
 VAR_7->patch_ops.build_pcms = VAR_4;
 VAR_8->gen.mixer_nid = 0x17;


 VAR_7->jackpoll_interval = FUNC_0(100);
 VAR_8->vt1708_jack_detect = 1;



 VAR_8->gen.suppress_auto_mic = 1;

 VAR_8->gen.auto_mute_via_amp = 1;


 FUNC_6(VAR_7, VAR_2);
 FUNC_6(VAR_7, VAR_1);

 VAR_9 = FUNC_1(VAR_7, VAR_5);
 if (VAR_9 < 0)
  goto error;


 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9 < 0)
  goto error;


 if (!FUNC_2(&VAR_8->gen, ((void*)0), &VAR_6)) {
  VAR_9 = -VAR_0;
  goto error;
 }


 VAR_7->jackpoll_interval = 0;

 return 0;

 error:
 FUNC_3(VAR_7);
 return VAR_9;
}
