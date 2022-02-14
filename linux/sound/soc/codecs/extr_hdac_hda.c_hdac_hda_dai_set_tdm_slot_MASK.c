
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct hdac_hda_priv {struct hdac_hda_pcm* pcm; } ;
struct hdac_hda_pcm {unsigned int* stream_tag; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct hdac_hda_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2,
         unsigned int VAR_3, unsigned int VAR_4,
         int VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_2->component;
 struct hdac_hda_priv *VAR_8;
 struct hdac_hda_pcm *VAR_9;

 VAR_8 = FUNC_0(VAR_7);
 VAR_9 = &VAR_8->pcm[VAR_2->id];
 if (VAR_3)
  VAR_9[VAR_2->id].stream_tag[VAR_1] = VAR_3;
 else
  VAR_9[VAR_2->id].stream_tag[VAR_0] = VAR_4;

 return 0;
}
