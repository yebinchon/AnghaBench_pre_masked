
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {scalar_t__ pin_nid; int dev_id; } ;
struct hdmi_spec {int num_pins; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*,scalar_t__) ;
 struct hdmi_spec_per_pin* FUNC_1 (struct hdmi_spec*,int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1,
          hda_nid_t VAR_2, int VAR_3)
{
 struct hdmi_spec *VAR_4 = VAR_1->spec;
 int VAR_5;
 struct hdmi_spec_per_pin *VAR_6;





 if (VAR_3 == -1)
  VAR_3 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_pins; VAR_5++) {
  VAR_6 = FUNC_1(VAR_4, VAR_5);
  if ((VAR_6->pin_nid == VAR_2) &&
   (VAR_6->dev_id == VAR_3))
   return VAR_5;
 }

 FUNC_0(VAR_1, "HDMI: pin nid %d not registered\n", VAR_2);
 return -VAR_0;
}
