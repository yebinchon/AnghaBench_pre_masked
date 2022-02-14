
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int FUNC_0 (struct hdmi_spec*) ;
 int FUNC_1 (struct hdmi_spec*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct hdmi_spec *VAR_1 = VAR_0->spec;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
