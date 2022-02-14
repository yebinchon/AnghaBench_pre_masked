
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {size_t id; TYPE_2__* driver; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct hdac_hdmi_priv {struct hdac_hdmi_dai_port_map* dai_map; } ;
struct hdac_hdmi_pcm {int format; int channels; } ;
struct hdac_hdmi_dai_port_map {int cvt; } ;
struct TYPE_3__ {int sig_bits; } ;
struct TYPE_4__ {TYPE_1__ playback; } ;


 int VAR_0 ;
 struct hdac_hdmi_pcm* FUNC_0 (struct hdac_hdmi_priv*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 struct hdac_hdmi_priv* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1,
 struct snd_pcm_hw_params *VAR_2, struct snd_soc_dai *VAR_3)
{
 struct hdac_hdmi_priv *VAR_4 = FUNC_5(VAR_3);
 struct hdac_hdmi_dai_port_map *VAR_5;
 struct hdac_hdmi_pcm *VAR_6;
 int VAR_7;

 VAR_5 = &VAR_4->dai_map[VAR_3->id];

 VAR_7 = FUNC_4(FUNC_3(VAR_2),
   FUNC_1(VAR_2), FUNC_2(VAR_2),
   VAR_3->driver->playback.sig_bits, 0);

 VAR_6 = FUNC_0(VAR_4, VAR_5->cvt);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->format = VAR_7;
 VAR_6->channels = FUNC_1(VAR_2);

 return 0;
}
