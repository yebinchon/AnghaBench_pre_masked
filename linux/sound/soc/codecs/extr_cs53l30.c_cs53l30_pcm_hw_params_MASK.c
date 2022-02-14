
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs53l30_private {int regmap; int mclk_rate; } ;
struct TYPE_2__ {int asp_rate; int mclk_int_scale; int internal_fs_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct cs53l30_private* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_8,
     struct snd_pcm_hw_params *VAR_9,
     struct snd_soc_dai *VAR_10)
{
 struct cs53l30_private *VAR_11 = FUNC_3(VAR_10->component);
 int VAR_12 = FUNC_1(VAR_9);
 int VAR_13;


 VAR_13 = FUNC_0(VAR_11->mclk_rate, VAR_12);
 if (VAR_13 < 0)
  return -VAR_6;

 FUNC_2(VAR_11->regmap, VAR_3,
      VAR_2,
      VAR_7[VAR_13].internal_fs_ratio);

 FUNC_2(VAR_11->regmap, VAR_4,
      VAR_5,
      VAR_7[VAR_13].mclk_int_scale);

 FUNC_2(VAR_11->regmap, VAR_0,
      VAR_1,
      VAR_7[VAR_13].asp_rate);

 return 0;
}
