
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack {int dummy; } ;
struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int card; } ;
struct snd_pcm {int dummy; } ;
struct hdac_hdmi_priv {int pcm_list; int chmap; TYPE_1__* dai_map; struct hdac_device* hdev; } ;
struct hdac_hdmi_pcm {int pcm_id; int head; int port_list; int lock; struct snd_soc_jack* jack; scalar_t__ jack_event; int cvt; } ;
struct hdac_device {int dev; } ;
struct TYPE_2__ {int cvt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int,int) ;
 struct hdac_hdmi_pcm* FUNC_2 (int *,int,int ) ;
 struct snd_pcm* FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_pcm*,int,int *) ;
 struct hdac_hdmi_priv* FUNC_7 (struct snd_soc_component*) ;

int FUNC_8(struct snd_soc_dai *VAR_2, int VAR_3,
    struct snd_soc_jack *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_2->component;
 struct hdac_hdmi_priv *VAR_6 = FUNC_7(VAR_5);
 struct hdac_device *VAR_7 = VAR_6->hdev;
 struct hdac_hdmi_pcm *VAR_8;
 struct snd_pcm *VAR_9;
 int VAR_10;





 VAR_8 = FUNC_2(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->pcm_id = VAR_3;
 VAR_8->cvt = VAR_6->dai_map[VAR_2->id].cvt;
 VAR_8->jack_event = 0;
 VAR_8->jack = VAR_4;
 FUNC_5(&VAR_8->lock);
 FUNC_0(&VAR_8->port_list);
 VAR_9 = FUNC_3(VAR_2->component->card, VAR_3);
 if (VAR_9) {
  VAR_10 = FUNC_6(VAR_9, VAR_3, &VAR_6->chmap);
  if (VAR_10 < 0) {
   FUNC_1(&VAR_7->dev,
    "chmap control add failed with err: %d for pcm: %d\n",
    VAR_10, VAR_3);
   return VAR_10;
  }
 }

 FUNC_4(&VAR_8->head, &VAR_6->pcm_list);

 return 0;
}
