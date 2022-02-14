
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hdmi_spec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0,
   hda_nid_t VAR_1, int VAR_2, hda_nid_t VAR_3)
{
 int VAR_4;
 struct hdmi_spec *VAR_5 = VAR_0->spec;






 VAR_4 = FUNC_0(VAR_5, VAR_3);
 if (VAR_4 >= 0)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
}
