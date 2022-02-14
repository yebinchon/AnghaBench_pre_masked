
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_chmap_elem {int dummy; } ;
struct snd_pcm_chmap {int stream; int max_channels; TYPE_3__* kctl; struct snd_pcm_chmap_elem const* chmap; struct snd_pcm* pcm; } ;
struct snd_pcm {TYPE_2__* streams; int card; int device; } ;
struct TYPE_6__ {int c; } ;
struct snd_kcontrol_new {int access; char* name; unsigned long private_value; int count; int device; TYPE_1__ tlv; int get; int info; int iface; } ;
struct TYPE_8__ {int private_free; } ;
struct TYPE_7__ {TYPE_3__* chmap_kctl; int substream_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct snd_pcm_chmap*) ;
 struct snd_pcm_chmap* FUNC_2 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (struct snd_kcontrol_new*,struct snd_pcm_chmap*) ;

int FUNC_5(struct snd_pcm *VAR_12, int VAR_13,
      const struct snd_pcm_chmap_elem *VAR_14,
      int VAR_15,
      unsigned long VAR_16,
      struct snd_pcm_chmap **VAR_17)
{
 struct snd_pcm_chmap *VAR_18;
 struct snd_kcontrol_new VAR_19 = {
  .iface = VAR_6,
  .access = VAR_3 |
   VAR_5 |
   VAR_4,
  .info = VAR_9,
  .get = VAR_8,
  .tlv.c = VAR_11,
 };
 int VAR_20;

 if (FUNC_0(VAR_12->streams[VAR_13].chmap_kctl))
  return -VAR_0;
 VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;
 VAR_18->pcm = VAR_12;
 VAR_18->stream = VAR_13;
 VAR_18->chmap = VAR_14;
 VAR_18->max_channels = VAR_15;
 if (VAR_13 == VAR_7)
  VAR_19.name = "Playback Channel Map";
 else
  VAR_19.name = "Capture Channel Map";
 VAR_19.device = VAR_12->device;
 VAR_19.count = VAR_12->streams[VAR_13].substream_count;
 VAR_19.private_value = VAR_16;
 VAR_18->kctl = FUNC_4(&VAR_19, VAR_18);
 if (!VAR_18->kctl) {
  FUNC_1(VAR_18);
  return -VAR_1;
 }
 VAR_18->kctl->private_free = VAR_10;
 VAR_20 = FUNC_3(VAR_12->card, VAR_18->kctl);
 if (VAR_20 < 0)
  return VAR_20;
 VAR_12->streams[VAR_13].chmap_kctl = VAR_18->kctl;
 if (VAR_17)
  *VAR_17 = VAR_18;
 return 0;
}
