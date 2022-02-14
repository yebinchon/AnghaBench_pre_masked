
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; } ;
struct hdac_hda_priv {int codec; } ;
struct TYPE_2__ {int (* close ) (struct hda_pcm_stream*,int *,struct snd_pcm_substream*) ;} ;
struct hda_pcm_stream {TYPE_1__ ops; } ;
struct hda_pcm {struct hda_pcm_stream* stream; } ;


 int FUNC_0 (struct hda_pcm*) ;
 struct hdac_hda_priv* FUNC_1 (struct snd_soc_component*) ;
 struct hda_pcm* FUNC_2 (struct hdac_hda_priv*,struct snd_soc_dai*) ;
 int FUNC_3 (struct hda_pcm_stream*,int *,struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_0,
          struct snd_soc_dai *VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_1->component;
 struct hdac_hda_priv *VAR_3;
 struct hda_pcm_stream *VAR_4;
 struct hda_pcm *VAR_5;

 VAR_3 = FUNC_1(VAR_2);
 VAR_5 = FUNC_2(VAR_3, VAR_1);
 if (!VAR_5)
  return;

 VAR_4 = &VAR_5->stream[VAR_0->stream];

 VAR_4->ops.close(VAR_4, &VAR_3->codec, VAR_0);

 FUNC_0(VAR_5);
}
