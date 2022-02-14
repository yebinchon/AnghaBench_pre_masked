
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rates; int formats; int channels_max; int channels_min; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct hdmi_eld {int info; scalar_t__ eld_valid; } ;
struct hdmi_spec_per_pin {struct hdmi_eld sink_eld; int mux_idx; int pin_nid; int dev_id; int cvt_nid; } ;
struct hdmi_spec_per_cvt {int assigned; int maxbps; int formats; int rates; int channels_max; int channels_min; int cvt_nid; } ;
struct hdmi_spec {int pcm_lock; int pcm_in_use; int dyn_pcm_assign; } ;
struct hda_pcm_stream {int rates; int formats; int channels_max; int channels_min; int nid; int maxbps; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hdmi_spec_per_cvt* FUNC_0 (struct hdmi_spec*,int) ;
 struct hdmi_spec_per_pin* FUNC_1 (struct hdmi_spec*,int) ;
 int FUNC_2 (struct hda_codec*,int,int*) ;
 int FUNC_3 (struct hda_pcm_stream*,struct hda_codec*,struct snd_pcm_substream*) ;
 int FUNC_4 (struct hda_codec*,struct hda_pcm_stream*) ;
 int FUNC_5 (struct hda_codec*,struct hda_pcm_stream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct hda_codec*,struct hdmi_spec_per_pin*,int ) ;
 int FUNC_9 (int,int *) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_12 (struct hda_codec*,int ,int ) ;
 int FUNC_13 (struct hda_codec*,int,int ) ;
 int FUNC_14 (struct hda_codec*,int) ;
 int FUNC_15 (int *,struct hda_pcm_stream*) ;
 int FUNC_16 (struct snd_pcm_runtime*,int ,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_17(struct hda_pcm_stream *VAR_5,
    struct hda_codec *VAR_6,
    struct snd_pcm_substream *VAR_7)
{
 struct hdmi_spec *VAR_8 = VAR_6->spec;
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 int VAR_10, VAR_11, VAR_12;
 struct hdmi_spec_per_pin *VAR_13;
 struct hdmi_eld *VAR_14;
 struct hdmi_spec_per_cvt *VAR_15 = ((void*)0);
 int VAR_16;


 VAR_12 = FUNC_4(VAR_6, VAR_5);
 if (VAR_12 < 0)
  return -VAR_1;

 FUNC_6(&VAR_8->pcm_lock);
 VAR_10 = FUNC_5(VAR_6, VAR_5);
 if (!VAR_8->dyn_pcm_assign) {
  if (FUNC_10(VAR_10 < 0)) {
   VAR_16 = -VAR_1;
   goto unlock;
  }
 } else {



  if (VAR_10 < 0) {
   VAR_16 = FUNC_3(VAR_5, VAR_6, VAR_7);
   goto unlock;
  }
 }

 VAR_16 = FUNC_2(VAR_6, VAR_10, &VAR_11);
 if (VAR_16 < 0)
  goto unlock;

 VAR_15 = FUNC_0(VAR_8, VAR_11);

 VAR_15->assigned = 1;

 FUNC_9(VAR_12, &VAR_8->pcm_in_use);
 VAR_13 = FUNC_1(VAR_8, VAR_10);
 VAR_13->cvt_nid = VAR_15->cvt_nid;
 VAR_5->nid = VAR_15->cvt_nid;

 FUNC_12(VAR_6, VAR_13->pin_nid, VAR_13->dev_id);
 FUNC_11(VAR_6, VAR_13->pin_nid, 0,
       VAR_0,
       VAR_13->mux_idx);


 FUNC_8(VAR_6, VAR_13, 0);

 FUNC_13(VAR_6, VAR_12, VAR_15->cvt_nid);


 VAR_5->channels_min = VAR_15->channels_min;
 VAR_5->channels_max = VAR_15->channels_max;
 VAR_5->rates = VAR_15->rates;
 VAR_5->formats = VAR_15->formats;
 VAR_5->maxbps = VAR_15->maxbps;

 VAR_14 = &VAR_13->sink_eld;

 if (!VAR_4 && VAR_14->eld_valid) {
  FUNC_15(&VAR_14->info, VAR_5);
  if (VAR_5->channels_min > VAR_5->channels_max ||
      !VAR_5->rates || !VAR_5->formats) {
   VAR_15->assigned = 0;
   VAR_5->nid = 0;
   FUNC_14(VAR_6, VAR_12);
   VAR_16 = -VAR_2;
   goto unlock;
  }
 }


 VAR_9->hw.channels_min = VAR_5->channels_min;
 VAR_9->hw.channels_max = VAR_5->channels_max;
 VAR_9->hw.formats = VAR_5->formats;
 VAR_9->hw.rates = VAR_5->rates;

 FUNC_16(VAR_7->runtime, 0,
       VAR_3, 2);
 unlock:
 FUNC_7(&VAR_8->pcm_lock);
 return VAR_16;
}
