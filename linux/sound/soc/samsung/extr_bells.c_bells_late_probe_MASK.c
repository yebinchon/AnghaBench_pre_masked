
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_soc_card {size_t num_rtd; TYPE_1__* dai_link; struct bells_drvdata* drvdata; } ;
struct bells_drvdata {int asyncclk_rate; int sysclk_rate; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int ,int ) ;
 struct snd_soc_pcm_runtime* FUNC_3 (struct snd_soc_card*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_card *VAR_13)
{
 struct bells_drvdata *VAR_14 = VAR_13->drvdata;
 struct snd_soc_pcm_runtime *VAR_15;
 struct snd_soc_component *VAR_16;
 struct snd_soc_component *VAR_17;
 struct snd_soc_dai *VAR_18;
 struct snd_soc_dai *VAR_19;
 struct snd_soc_dai *VAR_20;
 struct snd_soc_dai *VAR_21;
 int VAR_22;

 VAR_15 = FUNC_3(VAR_13, VAR_13->dai_link[VAR_5].name);
 VAR_16 = VAR_15->codec_dai->component;

 VAR_15 = FUNC_3(VAR_13, VAR_13->dai_link[VAR_8].name);
 VAR_17 = VAR_15->codec_dai->component;
 VAR_18 = VAR_15->codec_dai;

 VAR_22 = FUNC_1(VAR_17, VAR_4,
           VAR_2,
           VAR_14->sysclk_rate,
           VAR_9);
 if (VAR_22 != 0) {
  FUNC_0(VAR_17->dev, "Failed to set SYSCLK: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_1(VAR_16, 0, 0, VAR_11, 0);
 if (VAR_22 != 0) {
  FUNC_0(VAR_16->dev, "Failed to set WM0010 clock: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_2(VAR_18, VAR_4, 0, 0);
 if (VAR_22 != 0)
  FUNC_0(VAR_18->dev, "Failed to set AIF1 clock: %d\n", VAR_22);

 VAR_22 = FUNC_1(VAR_17, VAR_1, 0,
           VAR_11, VAR_10);
 if (VAR_22 != 0)
  FUNC_0(VAR_17->dev, "Failed to set OPCLK: %d\n", VAR_22);

 if (VAR_13->num_rtd == VAR_6)
  return 0;

 VAR_22 = FUNC_1(VAR_17, VAR_0,
           VAR_3,
           VAR_14->asyncclk_rate,
           VAR_9);
 if (VAR_22 != 0) {
  FUNC_0(VAR_17->dev, "Failed to set ASYNCCLK: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_15 = FUNC_3(VAR_13, VAR_13->dai_link[VAR_6].name);
 VAR_19 = VAR_15->cpu_dai;

 VAR_22 = FUNC_2(VAR_19, VAR_0, 0, 0);
 if (VAR_22 != 0) {
  FUNC_0(VAR_19->dev, "Failed to set AIF2 clock: %d\n", VAR_22);
  return VAR_22;
 }

 if (VAR_13->num_rtd == VAR_7)
  return 0;

 VAR_15 = FUNC_3(VAR_13, VAR_13->dai_link[VAR_7].name);
 VAR_20 = VAR_15->cpu_dai;
 VAR_21 = VAR_15->codec_dai;

 VAR_22 = FUNC_2(VAR_20, VAR_4, 0, 0);
 if (VAR_22 != 0) {
  FUNC_0(VAR_18->dev, "Failed to set AIF1 clock: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_1(VAR_21->component, VAR_12,
           0, VAR_11, 0);
 if (VAR_22 != 0) {
  FUNC_0(VAR_21->dev, "Failed to set MCLK: %d\n", VAR_22);
  return VAR_22;
 }

 return 0;
}
