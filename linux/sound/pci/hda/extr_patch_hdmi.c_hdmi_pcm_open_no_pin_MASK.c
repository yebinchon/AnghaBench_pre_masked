
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rates; int formats; int channels_max; int channels_min; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct hdmi_spec_per_cvt {int assigned; int maxbps; int formats; int rates; int channels_max; int channels_min; int cvt_nid; } ;
struct hdmi_spec {int pcm_in_use; } ;
struct hda_pcm_stream {int rates; int formats; int channels_max; int channels_min; int maxbps; int nid; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hdmi_spec_per_cvt* FUNC_0 (struct hdmi_spec*,int) ;
 int FUNC_1 (struct hda_codec*,int,int*) ;
 int FUNC_2 (struct hda_codec*,struct hda_pcm_stream*) ;
 int FUNC_3 (struct hda_codec*,int *,int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hda_pcm_stream *VAR_2,
    struct hda_codec *VAR_3,
    struct snd_pcm_substream *VAR_4)
{
 struct hdmi_spec *VAR_5 = VAR_3->spec;
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 int VAR_7, VAR_8;
 struct hdmi_spec_per_cvt *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_8 = FUNC_2(VAR_3, VAR_2);
 if (VAR_8 < 0)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_3, -1, &VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_0(VAR_5, VAR_7);
 VAR_9->assigned = 1;
 VAR_2->nid = VAR_9->cvt_nid;

 FUNC_3(VAR_3, ((void*)0), VAR_9->cvt_nid);

 FUNC_4(VAR_8, &VAR_5->pcm_in_use);



 VAR_2->channels_min = VAR_9->channels_min;
 VAR_2->channels_max = VAR_9->channels_max;
 VAR_2->rates = VAR_9->rates;
 VAR_2->formats = VAR_9->formats;
 VAR_2->maxbps = VAR_9->maxbps;


 VAR_6->hw.channels_min = VAR_2->channels_min;
 VAR_6->hw.channels_max = VAR_2->channels_max;
 VAR_6->hw.formats = VAR_2->formats;
 VAR_6->hw.rates = VAR_2->rates;

 FUNC_5(VAR_4->runtime, 0,
       VAR_1, 2);
 return 0;
}
