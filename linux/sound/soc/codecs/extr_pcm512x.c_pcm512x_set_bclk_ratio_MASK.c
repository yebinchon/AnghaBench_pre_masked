
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct pcm512x_priv {unsigned int bclk_ratio; } ;


 int VAR_0 ;
 struct pcm512x_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1, unsigned int VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_1->component;
 struct pcm512x_priv *VAR_4 = FUNC_0(VAR_3);

 if (VAR_2 > 256)
  return -VAR_0;

 VAR_4->bclk_ratio = VAR_2;

 return 0;
}
