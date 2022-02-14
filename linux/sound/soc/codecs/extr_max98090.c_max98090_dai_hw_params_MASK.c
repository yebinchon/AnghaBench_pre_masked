
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max98090_priv {int bclk; int lrclk; int pclk; int dmic_freq; scalar_t__ master; struct max98090_cdata* dai; } ;
struct max98090_cdata {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct max98090_priv*,int ,int ,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 struct max98090_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_6,
       struct snd_pcm_hw_params *VAR_7,
       struct snd_soc_dai *VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_8->component;
 struct max98090_priv *VAR_10 = FUNC_5(VAR_9);
 struct max98090_cdata *VAR_11;

 VAR_11 = &VAR_10->dai[0];
 VAR_10->bclk = FUNC_7(VAR_7);
 if (FUNC_2(VAR_7) == 1)
  VAR_10->bclk *= 2;

 VAR_10->lrclk = FUNC_3(VAR_7);

 switch (FUNC_4(VAR_7)) {
 case 16:
  FUNC_6(VAR_9, VAR_4,
   VAR_5, 0);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_10->master)
  FUNC_0(VAR_9);

 VAR_11->rate = VAR_10->lrclk;


 if (VAR_10->lrclk < 24000)
  FUNC_6(VAR_9, VAR_3,
   VAR_2, 0);
 else
  FUNC_6(VAR_9, VAR_3,
   VAR_2, VAR_2);


 if (VAR_10->lrclk < 50000)
  FUNC_6(VAR_9, VAR_3,
   VAR_1, 0);
 else
  FUNC_6(VAR_9, VAR_3,
   VAR_1, VAR_1);

 FUNC_1(VAR_10, VAR_10->dmic_freq, VAR_10->pclk,
    VAR_10->lrclk);

 return 0;
}
