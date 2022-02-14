
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct lochnagar_sc_priv {int mclk; } ;


 int FUNC_0 (int ) ;
 struct lochnagar_sc_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
           struct snd_soc_dai *VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_1->component;
 struct lochnagar_sc_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->mclk);
}
