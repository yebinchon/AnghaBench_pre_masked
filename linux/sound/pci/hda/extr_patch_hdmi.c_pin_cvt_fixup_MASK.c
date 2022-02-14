
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec_per_pin {int dummy; } ;
struct TYPE_2__ {int (* pin_cvt_fixup ) (struct hda_codec*,struct hdmi_spec_per_pin*,int ) ;} ;
struct hdmi_spec {TYPE_1__ ops; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,struct hdmi_spec_per_pin*,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0,
     struct hdmi_spec_per_pin *VAR_1,
     hda_nid_t VAR_2)
{
 struct hdmi_spec *VAR_3 = VAR_0->spec;

 if (VAR_3->ops.pin_cvt_fixup)
  VAR_3->ops.pin_cvt_fixup(VAR_0, VAR_1, VAR_2);
}
