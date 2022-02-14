
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uda134x_priv {struct snd_pcm_substream* slave_substream; struct snd_pcm_substream* master_substream; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 struct uda134x_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0,
 struct snd_soc_dai *VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_1->component;
 struct uda134x_priv *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->master_substream == VAR_0)
  VAR_3->master_substream = VAR_3->slave_substream;

 VAR_3->slave_substream = ((void*)0);
}
