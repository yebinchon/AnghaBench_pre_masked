
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {int port_num; int* port_map; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int FUNC_0 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_0, int VAR_1)
{
 struct hdmi_spec *VAR_2 = VAR_0->spec;

 if (!VAR_2->port_num) {

  if (VAR_1 < 1 || VAR_1 > 3)
   return 0;

  return VAR_1 + FUNC_0(VAR_0) - 1;
 }

 if (VAR_1 < 1 || VAR_1 > VAR_2->port_num)
  return 0;
 return VAR_2->port_map[VAR_1 - 1];
}
