
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int mux_nids; int num_mux_nids; int pin_nid; } ;
struct hdmi_spec {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,char*,int ,int) ;
 struct hdmi_spec_per_pin* FUNC_1 (struct hdmi_spec*,int) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_3, int VAR_4)
{
 struct hdmi_spec *VAR_5 = VAR_3->spec;
 struct hdmi_spec_per_pin *VAR_6 = FUNC_1(VAR_5, VAR_4);
 hda_nid_t VAR_7 = VAR_6->pin_nid;

 if (!(FUNC_2(VAR_3, VAR_7) & VAR_0)) {
  FUNC_0(VAR_3,
      "HDMI: pin %d wcaps %#x does not support connection list\n",
      VAR_7, FUNC_2(VAR_3, VAR_7));
  return -VAR_1;
 }


 VAR_6->num_mux_nids = FUNC_3(VAR_3, VAR_7,
       VAR_6->mux_nids,
       VAR_2);

 return 0;
}
