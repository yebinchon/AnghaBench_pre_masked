
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct mxs_saif {int clk; } ;


 int FUNC_0 (int ) ;
 struct mxs_saif* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
         struct snd_soc_dai *VAR_1)
{
 struct mxs_saif *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->clk);
}
