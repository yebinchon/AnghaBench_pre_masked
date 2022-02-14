
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int pin_nid; } ;
struct hdmi_spec {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hdmi_spec_per_pin* FUNC_0 (struct hdmi_spec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_5)
{
 struct hdmi_spec *VAR_6 = VAR_5->spec;
 struct hdmi_spec_per_pin *VAR_7 = FUNC_0(VAR_6, 0);
 hda_nid_t VAR_8 = VAR_7->pin_nid;

 FUNC_2(VAR_5, VAR_8, 0,
       VAR_1, VAR_4);

 if (FUNC_1(VAR_5, VAR_8) & VAR_2)
  FUNC_2(VAR_5, VAR_8, 0, VAR_0,
        VAR_3);
 FUNC_3(VAR_5, VAR_8);
 return 0;
}
