
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pin_cvt_fixup; } ;
struct hdmi_spec {TYPE_1__ ops; } ;
struct hda_codec {int display_power_control; int auto_runtime_pm; scalar_t__ depop_delay; struct hdmi_spec* spec; } ;


 int FUNC_0 (struct hda_codec*) ;
 int VAR_0 ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1)
{
 struct hdmi_spec *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_2 = VAR_1->spec;




 VAR_1->display_power_control = 1;

 VAR_1->depop_delay = 0;
 VAR_1->auto_runtime_pm = 1;

 VAR_2->ops.pin_cvt_fixup = VAR_0;

 return FUNC_1(VAR_1);
}
