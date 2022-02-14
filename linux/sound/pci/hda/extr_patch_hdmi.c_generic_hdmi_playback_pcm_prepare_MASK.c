
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; } ;
struct hdmi_spec_per_pin {int setup; int lock; int channels; int dev_id; int pin_nid; } ;
struct TYPE_4__ {int (* setup_stream ) (struct hda_codec*,int ,int ,unsigned int,unsigned int) ;} ;
struct hdmi_spec {int pcm_lock; TYPE_2__ ops; scalar_t__ dyn_pin_out; scalar_t__ dyn_pcm_assign; } ;
struct hda_pcm_stream {int nid; } ;
struct hda_codec {TYPE_1__* bus; int core; struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_3__ {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (struct hda_codec*) ;
 struct hdmi_spec_per_pin* FUNC_2 (struct hdmi_spec*,int) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,struct hdmi_spec_per_pin*,int) ;
 int FUNC_5 (struct hda_codec*,struct hda_pcm_stream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct hda_codec*,struct hdmi_spec_per_pin*,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_11 (struct hda_codec*,int ,unsigned int,int ,unsigned int) ;
 int FUNC_12 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_13 (int *,struct snd_pcm_substream*) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (struct hda_codec*,int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_16(struct hda_pcm_stream *VAR_6,
        struct hda_codec *VAR_7,
        unsigned int VAR_8,
        unsigned int VAR_9,
        struct snd_pcm_substream *VAR_10)
{
 hda_nid_t VAR_11 = VAR_6->nid;
 struct hdmi_spec *VAR_12 = VAR_7->spec;
 int VAR_13;
 struct hdmi_spec_per_pin *VAR_14;
 hda_nid_t VAR_15;
 struct snd_pcm_runtime *VAR_16 = VAR_10->runtime;
 bool VAR_17;
 int VAR_18, VAR_19;
 int VAR_20 = 0;

 FUNC_6(&VAR_12->pcm_lock);
 VAR_13 = FUNC_5(VAR_7, VAR_6);
 if (VAR_12->dyn_pcm_assign && VAR_13 < 0) {




  FUNC_8(VAR_7, ((void*)0), VAR_11);
  FUNC_11(VAR_7, VAR_11,
     VAR_8, 0, VAR_9);
  goto unlock;
 }

 if (FUNC_9(VAR_13 < 0)) {
  VAR_20 = -VAR_4;
  goto unlock;
 }
 VAR_14 = FUNC_2(VAR_12, VAR_13);
 VAR_15 = VAR_14->pin_nid;
 FUNC_8(VAR_7, VAR_14, 0);



 if (FUNC_1(VAR_7))
  FUNC_14(&VAR_7->core, VAR_15, VAR_14->dev_id,
      VAR_16->rate);

 VAR_17 = FUNC_0(VAR_7, VAR_11);
 FUNC_6(&VAR_14->lock);
 VAR_14->channels = VAR_10->runtime->channels;
 VAR_14->setup = 1;

 if (FUNC_3(VAR_7, VAR_11) & VAR_3) {
  VAR_19 = FUNC_13(&VAR_7->bus->core,
       VAR_10);
  FUNC_12(VAR_7, VAR_11, 0,
        VAR_2,
        VAR_19);
 }

 FUNC_4(VAR_7, VAR_14, VAR_17);
 FUNC_7(&VAR_14->lock);
 if (VAR_12->dyn_pin_out) {
  VAR_18 = FUNC_10(VAR_7, VAR_15, 0,
         VAR_0, 0);
  FUNC_12(VAR_7, VAR_15, 0,
        VAR_1,
        VAR_18 | VAR_5);
 }


 VAR_20 = VAR_12->ops.setup_stream(VAR_7, VAR_11, VAR_15,
     VAR_8, VAR_9);
 unlock:
 FUNC_7(&VAR_12->pcm_lock);
 return VAR_20;
}
