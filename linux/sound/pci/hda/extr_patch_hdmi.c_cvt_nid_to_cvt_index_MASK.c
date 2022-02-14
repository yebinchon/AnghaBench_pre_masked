
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec {int num_cvts; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_2__ {scalar_t__ cvt_nid; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*,scalar_t__) ;
 TYPE_1__* FUNC_1 (struct hdmi_spec*,int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1, hda_nid_t VAR_2)
{
 struct hdmi_spec *VAR_3 = VAR_1->spec;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_cvts; VAR_4++)
  if (FUNC_1(VAR_3, VAR_4)->cvt_nid == VAR_2)
   return VAR_4;

 FUNC_0(VAR_1, "HDMI: cvt nid %d not registered\n", VAR_2);
 return -VAR_0;
}
