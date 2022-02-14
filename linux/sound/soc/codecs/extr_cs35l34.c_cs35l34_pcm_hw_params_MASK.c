
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs35l34_private {int regmap; int mclk_int; } ;
struct TYPE_2__ {int adsp_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct cs35l34_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3,
     struct snd_pcm_hw_params *VAR_4,
     struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct cs35l34_private *VAR_7 = FUNC_4(VAR_6);
 int VAR_8 = FUNC_2(VAR_4);
 int VAR_9;

 int VAR_10 = FUNC_0(VAR_7->mclk_int, VAR_8);

 if (VAR_10 < 0) {
  FUNC_1(VAR_6->dev, "ERROR: Invalid mclk %d and/or srate %d\n",
   VAR_7->mclk_int, VAR_8);
  return VAR_10;
 }

 VAR_9 = FUNC_3(VAR_7->regmap, VAR_0,
  VAR_1, VAR_2[VAR_10].adsp_rate);
 if (VAR_9 != 0)
  FUNC_1(VAR_6->dev, "Failed to set clock state %d\n", VAR_9);

 return VAR_9;
}
