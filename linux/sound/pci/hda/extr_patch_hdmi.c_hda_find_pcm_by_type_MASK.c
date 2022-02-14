
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {unsigned int num_pins; } ;
struct hda_pcm {int pcm_type; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 struct hda_pcm* FUNC_0 (struct hdmi_spec*,unsigned int) ;

__attribute__((used)) static struct hda_pcm *FUNC_1(struct hda_codec *VAR_0, int VAR_1)
{
 struct hdmi_spec *VAR_2 = VAR_0->spec;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_pins; VAR_3++) {
  struct hda_pcm *VAR_4 = FUNC_0(VAR_2, VAR_3);

  if (VAR_4->pcm_type == VAR_1)
   return VAR_4;
 }

 return ((void*)0);
}
