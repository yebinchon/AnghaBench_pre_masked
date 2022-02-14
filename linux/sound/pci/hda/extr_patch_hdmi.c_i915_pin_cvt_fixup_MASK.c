
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int mux_idx; int dev_id; int pin_nid; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,struct hdmi_spec_per_pin*) ;
 int FUNC_3 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_0,
          struct hdmi_spec_per_pin *VAR_1,
          hda_nid_t VAR_2)
{
 if (VAR_1) {
  FUNC_3(VAR_0, VAR_1->pin_nid,
          VAR_1->dev_id);
  FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_0, VAR_1->pin_nid,
         VAR_1->dev_id, VAR_1->mux_idx);
 } else {
  FUNC_1(VAR_0, 0, 0, VAR_2);
 }
}
