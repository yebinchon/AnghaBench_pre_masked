
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdmi_eld {int eld_valid; scalar_t__ monitor_present; int info; int eld_size; int eld_buffer; } ;
struct hdmi_spec_per_pin {int pcm_idx; int non_pcm; scalar_t__ setup; struct hdmi_eld sink_eld; } ;
struct hdmi_spec {scalar_t__ dyn_pcm_assign; } ;
struct hda_codec {int card; struct hdmi_spec* spec; } ;
struct TYPE_4__ {TYPE_1__* eld_ctl; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct hdmi_spec*,int) ;
 int FUNC_1 (struct hdmi_spec*,struct hdmi_spec_per_pin*) ;
 int FUNC_2 (struct hdmi_spec*,struct hdmi_spec_per_pin*) ;
 int FUNC_3 (struct hdmi_spec*,struct hdmi_spec_per_pin*) ;
 int FUNC_4 (struct hdmi_spec*,struct hdmi_spec_per_pin*) ;
 int FUNC_5 (struct hda_codec*,struct hdmi_spec_per_pin*,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct hda_codec*,struct hdmi_spec_per_pin*,int ) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (struct hda_codec*,int *) ;

__attribute__((used)) static bool FUNC_11(struct hda_codec *VAR_2,
         struct hdmi_spec_per_pin *VAR_3,
         struct hdmi_eld *VAR_4)
{
 struct hdmi_eld *VAR_5 = &VAR_3->sink_eld;
 struct hdmi_spec *VAR_6 = VAR_2->spec;
 bool VAR_7 = VAR_5->eld_valid;
 bool VAR_8;
 int VAR_9;


 VAR_9 = VAR_3->pcm_idx;
 if (VAR_6->dyn_pcm_assign) {
  if (VAR_4->eld_valid) {
   FUNC_1(VAR_6, VAR_3);
   FUNC_4(VAR_6, VAR_3);
  } else {
   FUNC_3(VAR_6, VAR_3);
   FUNC_2(VAR_6, VAR_3);
  }
 }



 if (VAR_9 == -1)
  VAR_9 = VAR_3->pcm_idx;

 if (VAR_4->eld_valid)
  FUNC_10(VAR_2, &VAR_4->info);

 VAR_8 = (VAR_5->eld_valid != VAR_4->eld_valid);
 VAR_8 |= (VAR_5->monitor_present != VAR_4->monitor_present);
 if (!VAR_8 && VAR_4->eld_valid && VAR_5->eld_valid)
  if (VAR_5->eld_size != VAR_4->eld_size ||
      FUNC_6(VAR_5->eld_buffer, VAR_4->eld_buffer,
      VAR_4->eld_size) != 0)
   VAR_8 = 1;

 if (VAR_8) {
  VAR_5->monitor_present = VAR_4->monitor_present;
  VAR_5->eld_valid = VAR_4->eld_valid;
  VAR_5->eld_size = VAR_4->eld_size;
  if (VAR_4->eld_valid)
   FUNC_7(VAR_5->eld_buffer, VAR_4->eld_buffer,
          VAR_4->eld_size);
  VAR_5->info = VAR_4->info;
 }







 if (VAR_4->eld_valid && !VAR_7 && VAR_3->setup) {
  FUNC_8(VAR_2, VAR_3, 0);
  FUNC_5(VAR_2, VAR_3, VAR_3->non_pcm);
 }

 if (VAR_8 && VAR_9 >= 0)
  FUNC_9(VAR_2->card,
          VAR_1 |
          VAR_0,
          &FUNC_0(VAR_6, VAR_9)->eld_ctl->id);
 return VAR_8;
}
