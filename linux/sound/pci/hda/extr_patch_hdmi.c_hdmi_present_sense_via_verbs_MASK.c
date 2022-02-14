
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec_per_pin {int lock; int work; int pin_nid; struct hda_codec* codec; } ;
struct TYPE_2__ {scalar_t__ (* pin_get_eld ) (struct hda_codec*,int ,int ,int *) ;} ;
struct hdmi_eld {int monitor_present; int eld_valid; int eld_size; int eld_buffer; int info; } ;
struct hdmi_spec {TYPE_1__ ops; struct hdmi_eld temp_eld; } ;
struct hda_jack_tbl {int block_report; int pin_sense; } ;
struct hda_codec {int addr; struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,char*,int ,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 struct hda_jack_tbl* FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_7 (struct hda_codec*,int *,int ,int ) ;
 scalar_t__ FUNC_8 (struct hda_codec*,int ,int ,int *) ;
 int FUNC_9 (struct hda_codec*,struct hdmi_spec_per_pin*,struct hdmi_eld*) ;

__attribute__((used)) static bool FUNC_10(struct hdmi_spec_per_pin *VAR_2,
      int VAR_3)
{
 struct hda_jack_tbl *VAR_4;
 struct hda_codec *VAR_5 = VAR_2->codec;
 struct hdmi_spec *VAR_6 = VAR_5->spec;
 struct hdmi_eld *VAR_7 = &VAR_6->temp_eld;
 hda_nid_t VAR_8 = VAR_2->pin_nid;
 int VAR_9;
 bool VAR_10;
 bool VAR_11 = 0;

 VAR_9 = FUNC_6(VAR_5, VAR_8);

 FUNC_2(&VAR_2->lock);
 VAR_7->monitor_present = !!(VAR_9 & VAR_1);
 if (VAR_7->monitor_present)
  VAR_7->eld_valid = !!(VAR_9 & VAR_0);
 else
  VAR_7->eld_valid = 0;

 FUNC_0(VAR_5,
  "HDMI status: Codec=%d Pin=%d Presence_Detect=%d ELD_Valid=%d\n",
  VAR_5->addr, VAR_8, VAR_7->monitor_present, VAR_7->eld_valid);

 if (VAR_7->eld_valid) {
  if (VAR_6->ops.pin_get_eld(VAR_5, VAR_8, VAR_7->eld_buffer,
           &VAR_7->eld_size) < 0)
   VAR_7->eld_valid = 0;
  else {
   if (FUNC_7(VAR_5, &VAR_7->info, VAR_7->eld_buffer,
          VAR_7->eld_size) < 0)
    VAR_7->eld_valid = 0;
  }
  if (!VAR_7->eld_valid && VAR_3)
   VAR_11 = 1;
 }

 if (VAR_11)
  FUNC_4(&VAR_2->work, FUNC_1(300));
 else
  FUNC_9(VAR_5, VAR_2, VAR_7);

 VAR_10 = !VAR_3 || !VAR_7->monitor_present || VAR_7->eld_valid;

 VAR_4 = FUNC_5(VAR_5, VAR_8);
 if (VAR_4) {
  VAR_4->block_report = !VAR_10;
  VAR_4->pin_sense = (VAR_7->monitor_present && VAR_7->eld_valid) ?
   VAR_1 : 0;
 }
 FUNC_3(&VAR_2->lock);
 return VAR_10;
}
