
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_3__* runtime; } ;
struct hdmi_spec_per_pin {int num_mux_nids; int setup; int mux_idx; int channels; int pcm_idx; int pin_nid; int dev_id; int cvt_nid; struct hda_codec* codec; } ;
struct hdmi_spec {int pcm_in_use; int pcm_used; } ;
struct hda_pcm_stream {int nid; } ;
struct hda_pcm {TYPE_2__* pcm; struct hda_pcm_stream* stream; } ;
struct hda_codec {int dummy; } ;
struct TYPE_6__ {int channels; } ;
struct TYPE_5__ {TYPE_1__* streams; } ;
struct TYPE_4__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 struct hda_pcm* FUNC_1 (struct hdmi_spec*,int ) ;
 int FUNC_2 (struct hdmi_spec*,struct hdmi_spec_per_pin*,int ) ;
 int FUNC_3 (struct hda_codec*,struct hdmi_spec_per_pin*,int) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_5 (struct hda_codec*,int ,int ) ;
 int FUNC_6 (struct hda_codec*,int ,int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct hdmi_spec *VAR_1,
      struct hdmi_spec_per_pin *VAR_2)
{
 struct hda_codec *VAR_3 = VAR_2->codec;
 struct hda_pcm *VAR_4;
 struct hda_pcm_stream *VAR_5;
 struct snd_pcm_substream *VAR_6;
 int VAR_7;
 bool VAR_8;

 if (VAR_2->pcm_idx >= 0 && VAR_2->pcm_idx < VAR_1->pcm_used)
  VAR_4 = FUNC_1(VAR_1, VAR_2->pcm_idx);
 else
  return;
 if (!VAR_4->pcm)
  return;
 if (!FUNC_7(VAR_2->pcm_idx, &VAR_1->pcm_in_use))
  return;


 VAR_5 = VAR_4->stream;
 VAR_6 = VAR_4->pcm->streams[0].substream;

 VAR_2->cvt_nid = VAR_5->nid;

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_5->nid);
 if (VAR_7 < VAR_2->num_mux_nids) {
  FUNC_5(VAR_3, VAR_2->pin_nid,
       VAR_2->dev_id);
  FUNC_4(VAR_3, VAR_2->pin_nid, 0,
    VAR_0,
    VAR_7);
 }
 FUNC_6(VAR_3, VAR_2->pcm_idx, VAR_5->nid);

 VAR_8 = FUNC_0(VAR_3, VAR_5->nid);
 if (VAR_6->runtime)
  VAR_2->channels = VAR_6->runtime->channels;
 VAR_2->setup = 1;
 VAR_2->mux_idx = VAR_7;

 FUNC_3(VAR_3, VAR_2, VAR_8);
}
