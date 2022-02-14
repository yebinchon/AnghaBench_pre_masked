
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int pin_nid; } ;
struct hdmi_spec {int num_pins; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*) ;
 struct hdmi_spec_per_pin* FUNC_1 (struct hdmi_spec*,int) ;
 scalar_t__ FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_3)
{
 struct hdmi_spec *VAR_4 = VAR_3->spec;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_3);

 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_pins; VAR_5++) {
  struct hdmi_spec_per_pin *VAR_7 = FUNC_1(VAR_4, VAR_5);


  FUNC_3(VAR_3, VAR_7->pin_nid, 0, VAR_1, 0);


  if (FUNC_2(VAR_3))
   FUNC_3(VAR_3, VAR_7->pin_nid, 0,
         VAR_2,
         VAR_0);
 }

 return 0;
}
