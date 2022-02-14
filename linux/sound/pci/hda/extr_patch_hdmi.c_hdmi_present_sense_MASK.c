
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {struct hda_codec* codec; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hdmi_spec_per_pin*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*,struct hdmi_spec_per_pin*) ;

__attribute__((used)) static bool FUNC_7(struct hdmi_spec_per_pin *VAR_0, int VAR_1)
{
 struct hda_codec *VAR_2 = VAR_0->codec;
 int VAR_3;


 if (!FUNC_0(VAR_2)) {
  VAR_3 = FUNC_5(VAR_2);
  if (VAR_3 < 0 && FUNC_3(FUNC_1(VAR_2))) {
   FUNC_4(VAR_2);
   return 0;
  }
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  FUNC_4(VAR_2);
 } else {
  FUNC_6(VAR_2, VAR_0);
  VAR_3 = 0;
 }

 return VAR_3;
}
