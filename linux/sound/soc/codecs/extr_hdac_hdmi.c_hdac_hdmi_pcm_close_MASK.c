
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; } ;
struct snd_pcm_substream {int dummy; } ;
struct hdac_hdmi_priv {struct hdac_hdmi_dai_port_map* dai_map; } ;
struct hdac_hdmi_pcm {int chmap_set; int lock; scalar_t__ channels; int chmap; } ;
struct hdac_hdmi_dai_port_map {int * port; int cvt; } ;


 struct hdac_hdmi_pcm* FUNC_0 (struct hdac_hdmi_priv*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct hdac_hdmi_priv* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_5(struct snd_pcm_substream *VAR_0,
  struct snd_soc_dai *VAR_1)
{
 struct hdac_hdmi_priv *VAR_2 = FUNC_4(VAR_1);
 struct hdac_hdmi_dai_port_map *VAR_3;
 struct hdac_hdmi_pcm *VAR_4;

 VAR_3 = &VAR_2->dai_map[VAR_1->id];

 VAR_4 = FUNC_0(VAR_2, VAR_3->cvt);

 if (VAR_4) {
  FUNC_2(&VAR_4->lock);
  VAR_4->chmap_set = 0;
  FUNC_1(VAR_4->chmap, 0, sizeof(VAR_4->chmap));
  VAR_4->channels = 0;
  FUNC_3(&VAR_4->lock);
 }

 if (VAR_3->port)
  VAR_3->port = ((void*)0);
}
