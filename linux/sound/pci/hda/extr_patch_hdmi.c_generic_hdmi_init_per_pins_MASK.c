
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int work; int lock; struct hda_codec* codec; } ;
struct hdmi_spec {int num_pins; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hdmi_spec_per_pin*,int) ;
 struct hdmi_spec_per_pin* FUNC_2 (struct hdmi_spec*,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_1)
{
 struct hdmi_spec *VAR_2 = VAR_1->spec;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_pins; VAR_3++) {
  struct hdmi_spec_per_pin *VAR_4 = FUNC_2(VAR_2, VAR_3);

  VAR_4->codec = VAR_1;
  FUNC_3(&VAR_4->lock);
  FUNC_0(&VAR_4->work, VAR_0);
  FUNC_1(VAR_4, VAR_3);
 }
 return 0;
}
