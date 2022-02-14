
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs35l33_private {int regmap; scalar_t__ is_tdm_mode; int mclk_int; } ;
struct TYPE_2__ {int int_fs_ratio; int adsp_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,int,int) ;
 struct cs35l33_private* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_7,
     struct snd_pcm_hw_params *VAR_8,
     struct snd_soc_dai *VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_9->component;
 struct cs35l33_private *VAR_11 = FUNC_5(VAR_10);
 int VAR_12 = FUNC_3(VAR_8);
 int VAR_13 = FUNC_0(VAR_11->mclk_int, FUNC_2(VAR_8));

 if (VAR_13 < 0)
  return VAR_13;

 FUNC_4(VAR_11->regmap, VAR_3,
  VAR_0 | VAR_4,
  VAR_6[VAR_13].int_fs_ratio
  | VAR_6[VAR_13].adsp_rate);

 if (VAR_11->is_tdm_mode) {
  VAR_12 = (VAR_12 / 8) - 1;
  if (VAR_12 > 2)
   VAR_12 = 2;
  FUNC_4(VAR_11->regmap, VAR_5,
   VAR_1,
   VAR_12 << VAR_2);
 }

 FUNC_1(VAR_10->dev, "sample rate=%d, bits per sample=%d\n",
  FUNC_2(VAR_8), FUNC_3(VAR_8));

 return 0;
}
