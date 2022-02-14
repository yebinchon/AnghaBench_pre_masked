
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; } ;
struct hdac_hda_priv {int codec; } ;
struct TYPE_2__ {int (* open ) (struct hda_pcm_stream*,int *,struct snd_pcm_substream*) ;} ;
struct hda_pcm_stream {TYPE_1__ ops; } ;
struct hda_pcm {struct hda_pcm_stream* stream; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_pcm*) ;
 int FUNC_1 (struct hda_pcm*) ;
 struct hdac_hda_priv* FUNC_2 (struct snd_soc_component*) ;
 struct hda_pcm* FUNC_3 (struct hdac_hda_priv*,struct snd_soc_dai*) ;
 int FUNC_4 (struct hda_pcm_stream*,int *,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
        struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct hdac_hda_priv *VAR_4;
 struct hda_pcm_stream *VAR_5;
 struct hda_pcm *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(VAR_3);
 VAR_6 = FUNC_3(VAR_4, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_6);

 VAR_5 = &VAR_6->stream[VAR_1->stream];

 VAR_7 = VAR_5->ops.open(VAR_5, &VAR_4->codec, VAR_1);
 if (VAR_7 < 0)
  FUNC_1(VAR_6);

 return VAR_7;
}
