
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pin_cvt_fixup; int setup_stream; } ;
struct hdmi_spec {int dyn_pcm_assign; int const* port_map; int port_num; TYPE_2__ ops; int vendor_nid; } ;
struct TYPE_3__ {int set_power_state; } ;
struct hda_codec {int dp_mst; int display_power_control; int auto_runtime_pm; scalar_t__ depop_delay; TYPE_1__ patch_ops; struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_3, hda_nid_t VAR_4,
     const int *VAR_5, int VAR_6)
{
 struct hdmi_spec *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_7 = VAR_3->spec;
 VAR_3->dp_mst = 1;
 VAR_7->dyn_pcm_assign = 1;
 VAR_7->vendor_nid = VAR_4;
 VAR_7->port_map = VAR_5;
 VAR_7->port_num = VAR_6;

 FUNC_1(VAR_3, 1);
 FUNC_2(VAR_3);

 VAR_3->display_power_control = 1;

 VAR_3->patch_ops.set_power_state = VAR_0;
 VAR_3->depop_delay = 0;
 VAR_3->auto_runtime_pm = 1;

 VAR_7->ops.setup_stream = VAR_1;
 VAR_7->ops.pin_cvt_fixup = VAR_2;

 return FUNC_3(VAR_3);
}
