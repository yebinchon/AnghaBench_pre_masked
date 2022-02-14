
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_jack {int dummy; } ;
struct hdmi_spec_per_pin {int lock; int dev_id; int pin_nid; } ;
struct hdmi_eld {int monitor_present; int eld_valid; int eld_size; int eld_buffer; int info; } ;
struct hdmi_spec {struct hdmi_eld temp_eld; } ;
struct hda_codec {int core; struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_jack* FUNC_3 (struct hda_codec*,struct hdmi_spec_per_pin*) ;
 int FUNC_4 (int *,int ,int ,int*,int ,int ) ;
 scalar_t__ FUNC_5 (struct hda_codec*,int *,int ,int) ;
 int FUNC_6 (struct snd_jack*,int ) ;
 int FUNC_7 (struct hda_codec*,struct hdmi_spec_per_pin*,struct hdmi_eld*) ;

__attribute__((used)) static void FUNC_8(struct hda_codec *VAR_3,
          struct hdmi_spec_per_pin *VAR_4)
{
 struct hdmi_spec *VAR_5 = VAR_3->spec;
 struct hdmi_eld *VAR_6 = &VAR_5->temp_eld;
 struct snd_jack *VAR_7 = ((void*)0);
 bool VAR_8;
 int VAR_9;

 FUNC_1(&VAR_4->lock);
 VAR_6->monitor_present = 0;
 VAR_9 = FUNC_4(&VAR_3->core, VAR_4->pin_nid,
          VAR_4->dev_id, &VAR_6->monitor_present,
          VAR_6->eld_buffer, VAR_1);
 if (VAR_9 > 0) {
  VAR_9 = FUNC_0(VAR_9, VAR_1);
  if (FUNC_5(VAR_3, &VAR_6->info,
           VAR_6->eld_buffer, VAR_9) < 0)
   VAR_9 = -VAR_0;
 }

 if (VAR_9 > 0) {
  VAR_6->eld_valid = 1;
  VAR_6->eld_size = VAR_9;
 } else {
  VAR_6->eld_valid = 0;
  VAR_6->eld_size = 0;
 }




 VAR_7 = FUNC_3(VAR_3, VAR_4);
 VAR_8 = FUNC_7(VAR_3, VAR_4, VAR_6);
 if (VAR_7 == ((void*)0))
  VAR_7 = FUNC_3(VAR_3, VAR_4);
 if (VAR_8 && VAR_7)
  FUNC_6(VAR_7,
    (VAR_6->monitor_present && VAR_6->eld_valid) ?
    VAR_2 : 0);
 FUNC_2(&VAR_4->lock);
}
