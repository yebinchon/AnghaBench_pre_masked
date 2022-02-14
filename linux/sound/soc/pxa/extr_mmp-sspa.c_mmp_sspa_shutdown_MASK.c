
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sspa_priv {int sysclk; TYPE_1__* sspa; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int clk; } ;


 int FUNC_0 (int ) ;
 struct sspa_priv* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
 struct snd_soc_dai *VAR_1)
{
 struct sspa_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->sspa->clk);
 FUNC_0(VAR_2->sysclk);

}
