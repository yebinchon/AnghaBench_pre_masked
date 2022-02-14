
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec {int pcm_used; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
struct TYPE_2__ {struct hda_pcm_stream* stream; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*,struct hda_pcm_stream*) ;
 TYPE_1__* FUNC_1 (struct hdmi_spec*,int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1,
   struct hda_pcm_stream *VAR_2)
{
 struct hdmi_spec *VAR_3 = VAR_1->spec;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->pcm_used; VAR_4++)
  if (FUNC_1(VAR_3, VAR_4)->stream == VAR_2)
   return VAR_4;

 FUNC_0(VAR_1, "HDMI: hinfo %p not registered\n", VAR_2);
 return -VAR_0;
}
