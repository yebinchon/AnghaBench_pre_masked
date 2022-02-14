
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsed_hdmi_eld {size_t conn_type; int sad_count; scalar_t__ sad; scalar_t__ spk_alloc; int monitor_name; } ;
struct hda_codec {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*,char*,...) ;
 int * VAR_1 ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,int) ;

void FUNC_3(struct hda_codec *VAR_2, struct parsed_hdmi_eld *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2, "HDMI: detected monitor %s at connection type %s\n",
   VAR_3->monitor_name,
   VAR_1[VAR_3->conn_type]);

 if (VAR_3->spk_alloc) {
  char VAR_5[VAR_0];
  FUNC_2(VAR_3->spk_alloc, VAR_5, sizeof(VAR_5));
  FUNC_0(VAR_2, "HDMI: available speakers:%s\n", VAR_5);
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->sad_count; VAR_4++)
  FUNC_1(VAR_2, VAR_3->sad + VAR_4);
}
