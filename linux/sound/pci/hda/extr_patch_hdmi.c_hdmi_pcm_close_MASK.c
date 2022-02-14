
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hdmi_spec_per_pin {int chmap_set; int setup; int lock; scalar_t__ channels; int chmap; int pin_nid; } ;
struct hdmi_spec_per_cvt {scalar_t__ assigned; } ;
struct hdmi_spec {int pcm_lock; scalar_t__ dyn_pin_out; scalar_t__ dyn_pcm_assign; int pcm_in_use; } ;
struct hda_pcm_stream {scalar_t__ nid; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 struct hdmi_spec_per_cvt* FUNC_2 (struct hdmi_spec*,int) ;
 struct hdmi_spec_per_pin* FUNC_3 (struct hdmi_spec*,int) ;
 int FUNC_4 (struct hda_codec*,struct hda_pcm_stream*) ;
 int FUNC_5 (struct hda_codec*,struct hda_pcm_stream*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_11 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_12 (struct hda_codec*,int) ;

__attribute__((used)) static int FUNC_13(struct hda_pcm_stream *VAR_4,
     struct hda_codec *VAR_5,
     struct snd_pcm_substream *VAR_6)
{
 struct hdmi_spec *VAR_7 = VAR_5->spec;
 int VAR_8, VAR_9, VAR_10;
 struct hdmi_spec_per_cvt *VAR_11;
 struct hdmi_spec_per_pin *VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 if (VAR_4->nid) {
  VAR_10 = FUNC_4(VAR_5, VAR_4);
  if (FUNC_9(VAR_10 < 0))
   return -VAR_2;
  VAR_8 = FUNC_1(VAR_5, VAR_4->nid);
  if (FUNC_9(VAR_8 < 0))
   return -VAR_2;
  VAR_11 = FUNC_2(VAR_7, VAR_8);

  FUNC_9(!VAR_11->assigned);
  VAR_11->assigned = 0;
  VAR_4->nid = 0;

  FUNC_7(&VAR_7->pcm_lock);
  FUNC_12(VAR_5, VAR_10);
  FUNC_0(VAR_10, &VAR_7->pcm_in_use);
  VAR_9 = FUNC_5(VAR_5, VAR_4);
  if (VAR_7->dyn_pcm_assign && VAR_9 < 0)
   goto unlock;

  if (FUNC_9(VAR_9 < 0)) {
   VAR_14 = -VAR_2;
   goto unlock;
  }
  VAR_12 = FUNC_3(VAR_7, VAR_9);

  if (VAR_7->dyn_pin_out) {
   VAR_13 = FUNC_10(VAR_5, VAR_12->pin_nid, 0,
     VAR_0, 0);
   FUNC_11(VAR_5, VAR_12->pin_nid, 0,
         VAR_1,
         VAR_13 & ~VAR_3);
  }

  FUNC_7(&VAR_12->lock);
  VAR_12->chmap_set = 0;
  FUNC_6(VAR_12->chmap, 0, sizeof(VAR_12->chmap));

  VAR_12->setup = 0;
  VAR_12->channels = 0;
  FUNC_8(&VAR_12->lock);
 unlock:
  FUNC_8(&VAR_7->pcm_lock);
 }

 return VAR_14;
}
