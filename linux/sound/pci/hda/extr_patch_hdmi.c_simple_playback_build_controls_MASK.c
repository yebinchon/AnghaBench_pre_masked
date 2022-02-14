
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_cvt {int cvt_nid; } ;
struct hdmi_spec {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 struct hdmi_spec_per_cvt* FUNC_0 (struct hdmi_spec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_1)
{
 struct hdmi_spec *VAR_2 = VAR_1->spec;
 struct hdmi_spec_per_cvt *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2, 0);
 VAR_4 = FUNC_2(VAR_1, VAR_3->cvt_nid,
       VAR_3->cvt_nid,
       VAR_0);
 if (VAR_4 < 0)
  return VAR_4;
 return FUNC_1(VAR_1, 0);
}
