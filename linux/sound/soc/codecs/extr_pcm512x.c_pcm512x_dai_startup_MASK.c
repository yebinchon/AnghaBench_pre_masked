
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct pcm512x_priv {int fmt; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_soc_dai*) ;
 struct pcm512x_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
          struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;
 struct pcm512x_priv *VAR_5 = FUNC_2(VAR_4);

 switch (VAR_5->fmt & VAR_1) {
 case 130:
 case 129:
  return FUNC_0(VAR_2, VAR_3);

 case 128:
  return FUNC_1(VAR_2, VAR_3);

 default:
  return -VAR_0;
 }
}
