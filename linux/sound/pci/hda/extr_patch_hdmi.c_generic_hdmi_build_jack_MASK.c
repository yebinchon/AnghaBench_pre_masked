
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdmi_spec_per_pin {int pin_nid; } ;
struct hdmi_spec {TYPE_1__* pcm_rec; scalar_t__ dyn_pcm_assign; } ;
struct hda_jack_tbl {int jack; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hdmi_str ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {int jack; } ;


 int FUNC_0 (struct hda_codec*,struct hdmi_spec*,int,char*) ;
 TYPE_2__* FUNC_1 (struct hdmi_spec*,int) ;
 struct hdmi_spec_per_pin* FUNC_2 (struct hdmi_spec*,int) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,int ,char*,int,int ,int *) ;
 struct hda_jack_tbl* FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int FUNC_9(struct hda_codec *VAR_0, int VAR_1)
{
 char VAR_2[32] = "HDMI/DP";
 struct hdmi_spec *VAR_3 = VAR_0->spec;
 struct hdmi_spec_per_pin *VAR_4;
 struct hda_jack_tbl *VAR_5;
 int VAR_6 = FUNC_1(VAR_3, VAR_1)->device;
 bool VAR_7;
 int VAR_8;

 if (VAR_6 > 0)
  FUNC_6(VAR_2 + FUNC_7(VAR_2), ",pcm=%d", VAR_6);

 if (VAR_3->dyn_pcm_assign)
  return FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);






 VAR_4 = FUNC_2(VAR_3, VAR_1);
 VAR_7 = !FUNC_3(VAR_0, VAR_4->pin_nid);
 if (VAR_7)
  FUNC_8(VAR_2, " Phantom",
   sizeof(VAR_2) - FUNC_7(VAR_2) - 1);
 VAR_8 = FUNC_4(VAR_0, VAR_4->pin_nid, VAR_2,
        VAR_7, 0, ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;
 VAR_5 = FUNC_5(VAR_0, VAR_4->pin_nid);
 if (VAR_5 == ((void*)0))
  return 0;



 VAR_3->pcm_rec[VAR_1].jack = VAR_5->jack;
 return 0;
}
