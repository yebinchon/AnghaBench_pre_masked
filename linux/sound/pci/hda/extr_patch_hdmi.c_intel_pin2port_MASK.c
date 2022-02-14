
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {int port_num; int* port_map; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*,char*,int) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, int VAR_1)
{
 struct hda_codec *VAR_2 = VAR_0;
 struct hdmi_spec *VAR_3 = VAR_2->spec;
 int VAR_4, VAR_5;

 if (!VAR_3->port_num) {
  VAR_4 = FUNC_2(VAR_2);
  if (FUNC_0(VAR_1 < VAR_4 || VAR_1 >= VAR_4 + 3))
   return -1;
  return VAR_1 - VAR_4 + 1;
 }





 for (VAR_5 = 0; VAR_5 < VAR_3->port_num; VAR_5++) {
  if (VAR_1 == VAR_3->port_map[VAR_5])
   return VAR_5 + 1;
 }


 FUNC_1(VAR_2, "Can't find the HDMI/DP port for pin %d\n", VAR_1);
 return -1;
}
