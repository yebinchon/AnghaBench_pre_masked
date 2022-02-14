
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; } ;
struct hdac_hda_priv {int codec; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_pcm {struct hda_pcm_stream* stream; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct hda_pcm_stream*,struct snd_pcm_substream*) ;
 struct hdac_hda_priv* FUNC_1 (struct snd_soc_component*) ;
 struct hda_pcm* FUNC_2 (struct hdac_hda_priv*,struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct hdac_hda_priv *VAR_4;
 struct hda_pcm_stream *VAR_5;
 struct hda_pcm *VAR_6;

 VAR_4 = FUNC_1(VAR_3);
 VAR_6 = FUNC_2(VAR_4, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = &VAR_6->stream[VAR_1->stream];
 FUNC_0(&VAR_4->codec, VAR_5, VAR_1);

 return 0;
}
