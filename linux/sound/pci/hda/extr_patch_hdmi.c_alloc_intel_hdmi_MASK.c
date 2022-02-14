
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * unsol_event; } ;
struct hda_codec {TYPE_3__ patch_ops; int probe_id; TYPE_2__* bus; } ;
struct TYPE_4__ {int audio_component; } ;
struct TYPE_5__ {TYPE_1__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,char*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_2)
{
 int VAR_3;


 if (!VAR_2->bus->core.audio_component) {
  FUNC_1(VAR_2, "No i915 binding for Intel HDMI/DP codec\n");

  VAR_2->probe_id = VAR_1;
  return -VAR_0;
 }

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->patch_ops.unsol_event = ((void*)0);
 return 0;
}
