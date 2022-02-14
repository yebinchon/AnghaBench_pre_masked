
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_priv {scalar_t__ extclk; struct ssp_device* ssp; } ;
struct ssp_device {scalar_t__ clk; } ;
struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ssp_device*) ;
 int FUNC_3 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 struct ssp_priv* FUNC_4 (struct snd_soc_dai*) ;
 int FUNC_5 (struct snd_soc_dai*,struct snd_pcm_substream*,int *) ;

__attribute__((used)) static void FUNC_6(struct snd_pcm_substream *VAR_0,
        struct snd_soc_dai *VAR_1)
{
 struct ssp_priv *VAR_2 = FUNC_4(VAR_1);
 struct ssp_device *VAR_3 = VAR_2->ssp;

 if (!VAR_1->active) {
  FUNC_2(VAR_3);
  FUNC_0(VAR_3->clk);
 }

 if (VAR_2->extclk)
  FUNC_0(VAR_2->extclk);

 FUNC_1(FUNC_3(VAR_1, VAR_0));
 FUNC_5(VAR_1, VAR_0, ((void*)0));
}
