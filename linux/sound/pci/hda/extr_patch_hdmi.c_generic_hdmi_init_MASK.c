
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int dev_id; int pin_nid; } ;
struct hdmi_spec {int use_jack_detect; int num_pins; int bind_lock; } ;
struct hda_codec {int jackpoll_interval; struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 scalar_t__ FUNC_0 (struct hda_codec*) ;
 struct hdmi_spec_per_pin* FUNC_1 (struct hdmi_spec*,int) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (struct hda_codec*,int ,int ) ;
 int FUNC_7 (struct hda_codec*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_1)
{
 struct hdmi_spec *VAR_2 = VAR_1->spec;
 int VAR_3;

 FUNC_3(&VAR_2->bind_lock);
 VAR_2->use_jack_detect = !VAR_1->jackpoll_interval;
 for (VAR_3 = 0; VAR_3 < VAR_2->num_pins; VAR_3++) {
  struct hdmi_spec_per_pin *VAR_4 = FUNC_1(VAR_2, VAR_3);
  hda_nid_t VAR_5 = VAR_4->pin_nid;
  int VAR_6 = VAR_4->dev_id;

  FUNC_7(VAR_1, VAR_5, VAR_6);
  FUNC_2(VAR_1, VAR_5);
  if (FUNC_0(VAR_1))
   continue;
  if (VAR_2->use_jack_detect)
   FUNC_5(VAR_1, VAR_5);
  else
   FUNC_6(VAR_1, VAR_5,
           VAR_0);
 }
 FUNC_4(&VAR_2->bind_lock);
 return 0;
}
