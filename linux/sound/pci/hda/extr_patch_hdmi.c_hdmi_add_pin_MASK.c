
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int pcm_idx; int dev_id; int non_pcm; int pin_nid_idx; int pin_nid; int * pcm; } ;
struct hdmi_spec {int dev_num; int num_pins; int num_nids; scalar_t__ dyn_pcm_assign; int pins; } ;
struct hda_codec {scalar_t__ dp_mst; struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int * FUNC_1 (struct hdmi_spec*,int) ;
 int FUNC_2 (struct hda_codec*,int) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_4 (struct hda_codec*) ;
 struct hdmi_spec_per_pin* FUNC_5 (int *) ;
 unsigned int FUNC_6 (struct hda_codec*,int ) ;
 int FUNC_7 (struct hda_codec*,int ) ;
 unsigned int FUNC_8 (struct hda_codec*,int ) ;
 int FUNC_9 (struct hda_codec*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct hda_codec *VAR_4, hda_nid_t VAR_5)
{
 struct hdmi_spec *VAR_6 = VAR_4->spec;
 unsigned int VAR_7, VAR_8;
 int VAR_9;
 struct hdmi_spec_per_pin *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;

 VAR_7 = FUNC_8(VAR_4, VAR_5);
 if (!(VAR_7 & (VAR_2 | VAR_1)))
  return 0;





 VAR_8 = FUNC_6(VAR_4, VAR_5);
 if (FUNC_0(VAR_8) == VAR_0)
  return 0;





 if (FUNC_4(VAR_4)) {
  VAR_12 = 3;
  VAR_6->dev_num = 3;
 } else if (VAR_6->dyn_pcm_assign && VAR_4->dp_mst) {
  VAR_12 = FUNC_7(VAR_4, VAR_5) + 1;




  VAR_6->dev_num = (VAR_6->dev_num > VAR_12) ?
   VAR_6->dev_num : VAR_12;
 } else {





  VAR_12 = 1;
  VAR_6->dev_num = 1;
 }

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_9 = VAR_6->num_pins;
  VAR_10 = FUNC_5(&VAR_6->pins);

  if (!VAR_10)
   return -VAR_3;

  if (VAR_6->dyn_pcm_assign) {
   VAR_10->pcm = ((void*)0);
   VAR_10->pcm_idx = -1;
  } else {
   VAR_10->pcm = FUNC_1(VAR_6, VAR_9);
   VAR_10->pcm_idx = VAR_9;
  }
  VAR_10->pin_nid = VAR_5;
  VAR_10->pin_nid_idx = VAR_6->num_nids;
  VAR_10->dev_id = VAR_13;
  VAR_10->non_pcm = 0;
  FUNC_9(VAR_4, VAR_5, VAR_13);
  if (FUNC_4(VAR_4))
   FUNC_3(VAR_4, VAR_5);
  VAR_11 = FUNC_2(VAR_4, VAR_9);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_6->num_pins++;
 }
 VAR_6->num_nids++;

 return 0;
}
