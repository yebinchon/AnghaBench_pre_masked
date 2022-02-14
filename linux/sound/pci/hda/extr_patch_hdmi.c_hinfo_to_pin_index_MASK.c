
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdmi_spec_per_pin {TYPE_2__* pcm; } ;
struct hdmi_spec {int num_pins; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
struct TYPE_4__ {TYPE_1__* pcm; } ;
struct TYPE_3__ {struct hda_pcm_stream* stream; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*,struct hda_pcm_stream*) ;
 struct hdmi_spec_per_pin* FUNC_1 (struct hdmi_spec*,int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1,
         struct hda_pcm_stream *VAR_2)
{
 struct hdmi_spec *VAR_3 = VAR_1->spec;
 struct hdmi_spec_per_pin *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_pins; VAR_5++) {
  VAR_4 = FUNC_1(VAR_3, VAR_5);
  if (VAR_4->pcm &&
   VAR_4->pcm->pcm->stream == VAR_2)
   return VAR_5;
 }

 FUNC_0(VAR_1, "HDMI: hinfo %p not registered\n", VAR_2);
 return -VAR_0;
}
