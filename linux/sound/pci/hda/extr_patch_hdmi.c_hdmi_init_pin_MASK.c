
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {scalar_t__ dyn_pin_out; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_5, hda_nid_t VAR_6)
{
 struct hdmi_spec *VAR_7 = VAR_5->spec;
 int VAR_8;


 if (FUNC_0(VAR_5, VAR_6) & VAR_2)
  FUNC_1(VAR_5, VAR_6, 0,
    VAR_0, VAR_3);

 if (VAR_7->dyn_pin_out)

  VAR_8 = 0;
 else



  VAR_8 = VAR_4;

 FUNC_1(VAR_5, VAR_6, 0,
       VAR_1, VAR_8);
}
