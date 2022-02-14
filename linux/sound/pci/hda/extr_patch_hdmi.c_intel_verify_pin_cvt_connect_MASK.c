
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int mux_idx; int pin_nid; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2,
   struct hdmi_spec_per_pin *VAR_3)
{
 hda_nid_t VAR_4 = VAR_3->pin_nid;
 int VAR_5, VAR_6;

 VAR_5 = VAR_3->mux_idx;
 VAR_6 = FUNC_0(VAR_2, VAR_4, 0,
       VAR_0, 0);
 if (VAR_6 != VAR_5)
  FUNC_1(VAR_2, VAR_4, 0,
         VAR_1,
         VAR_5);
}
