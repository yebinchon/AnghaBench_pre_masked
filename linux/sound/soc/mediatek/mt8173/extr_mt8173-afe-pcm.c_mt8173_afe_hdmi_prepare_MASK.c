
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; int channels; } ;
struct mtk_base_afe {int regmap; struct mt8173_afe_private* platform_priv; } ;
struct mt8173_afe_private {int * clocks; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_1 (struct mtk_base_afe*,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 struct mtk_base_afe* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_17,
       struct snd_soc_dai *VAR_18)
{
 struct snd_pcm_runtime * const VAR_19 = VAR_17->runtime;
 struct mtk_base_afe *VAR_20 = FUNC_3(VAR_18);
 struct mt8173_afe_private *VAR_21 = VAR_20->platform_priv;

 unsigned int VAR_22;

 FUNC_1(VAR_20, VAR_21->clocks[VAR_16],
     VAR_19->rate * 128,
     VAR_21->clocks[VAR_15],
     VAR_19->rate * VAR_19->channels * 32);

 VAR_22 = VAR_9 |
       VAR_11 |
       VAR_7 |
       VAR_12 |
       VAR_13 |
       VAR_8 |
       FUNC_0(32);
 FUNC_2(VAR_20->regmap, VAR_6, ~VAR_10, VAR_22);


 switch (VAR_19->channels) {
 case 1:
 case 2:
  VAR_22 = VAR_1;
  VAR_22 |= (VAR_5 << 4);
  VAR_22 |= (VAR_5 << 8);
  VAR_22 |= (VAR_5 << 12);
  break;
 case 3:
 case 4:
  VAR_22 = VAR_1;
  VAR_22 |= (VAR_2 << 4);
  VAR_22 |= (VAR_5 << 8);
  VAR_22 |= (VAR_5 << 12);
  break;
 case 5:
 case 6:
  VAR_22 = VAR_1;
  VAR_22 |= (VAR_2 << 4);
  VAR_22 |= (VAR_3 << 8);
  VAR_22 |= (VAR_5 << 12);
  break;
 case 7:
 case 8:
  VAR_22 = VAR_1;
  VAR_22 |= (VAR_2 << 4);
  VAR_22 |= (VAR_3 << 8);
  VAR_22 |= (VAR_4 << 12);
  break;
 default:
  VAR_22 = 0;
 }
 FUNC_2(VAR_20->regmap, VAR_14, 0x0000ffff, VAR_22);

 FUNC_2(VAR_20->regmap, VAR_0,
      0x000000f0, VAR_19->channels << 4);
 return 0;
}
