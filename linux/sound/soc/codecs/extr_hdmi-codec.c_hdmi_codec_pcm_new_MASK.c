
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_3__* card; TYPE_4__* pcm; } ;
struct TYPE_6__ {int channels_max; } ;
struct snd_soc_dai_driver {TYPE_1__ playback; } ;
struct snd_soc_dai {int component; struct snd_soc_dai_driver* driver; } ;
struct snd_kcontrol_new {int access; char* name; int device; int get; int info; int iface; } ;
struct snd_kcontrol {int dummy; } ;
struct hdmi_codec_priv {int chmap_idx; TYPE_5__* chmap_info; } ;
struct TYPE_10__ {int chmap; TYPE_2__* kctl; struct hdmi_codec_priv* private_data; } ;
struct TYPE_9__ {int device; } ;
struct TYPE_8__ {int snd_card; } ;
struct TYPE_7__ {int get; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_1 (struct snd_kcontrol_new*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int *,int ,int ,TYPE_5__**) ;
 struct hdmi_codec_priv* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_10,
         struct snd_soc_dai *VAR_11)
{
 struct snd_soc_dai_driver *VAR_12 = VAR_11->driver;
 struct hdmi_codec_priv *VAR_13 = FUNC_3(VAR_11);
 struct snd_kcontrol *VAR_14;
 struct snd_kcontrol_new VAR_15 = {
  .access = VAR_2 |
     VAR_3,
  .iface = VAR_4,
  .name = "ELD",
  .info = VAR_9,
  .get = VAR_8,
  .device = VAR_10->pcm->device,
 };
 int VAR_16;

 VAR_16 = FUNC_2(VAR_10->pcm, VAR_5,
          ((void*)0), VAR_12->playback.channels_max, 0,
          &VAR_13->chmap_info);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_13->chmap_info->private_data = VAR_13;
 VAR_13->chmap_info->kctl->get = VAR_6;


 VAR_13->chmap_info->chmap = VAR_7;
 VAR_13->chmap_idx = VAR_1;


 VAR_14 = FUNC_1(&VAR_15, VAR_11->component);
 if (!VAR_14)
  return -VAR_0;

 return FUNC_0(VAR_10->card->snd_card, VAR_14);
}
