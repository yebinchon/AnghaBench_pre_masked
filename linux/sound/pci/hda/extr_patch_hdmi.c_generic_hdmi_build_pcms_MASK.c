
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec {int num_nids; int dev_num; int pcm_used; TYPE_1__* pcm_rec; } ;
struct hda_pcm_stream {int substreams; int ops; } ;
struct hda_pcm {int own_chmap; struct hda_pcm_stream* stream; int pcm_type; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
struct TYPE_2__ {struct hda_pcm* pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct hda_pcm* FUNC_0 (struct hda_codec*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_4)
{
 struct hdmi_spec *VAR_5 = VAR_4->spec;
 int VAR_6;







 for (VAR_6 = 0; VAR_6 < VAR_5->num_nids + VAR_5->dev_num - 1; VAR_6++) {
  struct hda_pcm *VAR_7;
  struct hda_pcm_stream *VAR_8;

  VAR_7 = FUNC_0(VAR_4, "HDMI %d", VAR_6);
  if (!VAR_7)
   return -VAR_0;

  VAR_5->pcm_rec[VAR_6].pcm = VAR_7;
  VAR_5->pcm_used++;
  VAR_7->pcm_type = VAR_1;
  VAR_7->own_chmap = 1;

  VAR_8 = &VAR_7->stream[VAR_2];
  VAR_8->substreams = 1;
  VAR_8->ops = VAR_3;

  if (VAR_5->pcm_used >= 16)
   break;

 }

 return 0;
}
