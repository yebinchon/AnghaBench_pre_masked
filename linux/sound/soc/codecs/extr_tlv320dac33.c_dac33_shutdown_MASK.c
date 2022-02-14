
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {int * substream; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 struct tlv320dac33_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0,
        struct snd_soc_dai *VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_1->component;
 struct tlv320dac33_priv *VAR_3 = FUNC_0(VAR_2);

 VAR_3->substream = ((void*)0);
}
