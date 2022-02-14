
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5616_priv {int* lrck; int* bclk; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int) ;
 struct rt5616_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_9,
       struct snd_pcm_hw_params *VAR_10,
       struct snd_soc_dai *VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_11->component;
 struct rt5616_priv *VAR_13 = FUNC_5(VAR_12);
 unsigned int VAR_14 = 0, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_13->lrck[VAR_11->id] = FUNC_3(VAR_10);

 VAR_17 = FUNC_4(VAR_13->sysclk, VAR_13->lrck[VAR_11->id]);

 if (VAR_17 < 0) {
  FUNC_1(VAR_12->dev, "Unsupported clock setting\n");
  return -VAR_0;
 }
 VAR_19 = FUNC_7(VAR_10);
 if (VAR_19 < 0) {
  FUNC_1(VAR_12->dev, "Unsupported frame size: %d\n", VAR_19);
  return -VAR_0;
 }
 VAR_18 = VAR_19 > 32 ? 1 : 0;
 VAR_13->bclk[VAR_11->id] = VAR_13->lrck[VAR_11->id] * (32 << VAR_18);

 FUNC_0(VAR_11->dev, "bclk is %dHz and lrck is %dHz\n",
  VAR_13->bclk[VAR_11->id], VAR_13->lrck[VAR_11->id]);
 FUNC_0(VAR_11->dev, "bclk_ms is %d and pre_div is %d for iis %d\n",
  VAR_18, VAR_17, VAR_11->id);

 switch (FUNC_2(VAR_10)) {
 case 131:
  break;
 case 130:
  VAR_14 |= VAR_3;
  break;
 case 129:
  VAR_14 |= VAR_4;
  break;
 case 128:
  VAR_14 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }

 VAR_16 = VAR_7;
 VAR_15 = VAR_17 << VAR_8;
 FUNC_6(VAR_12, VAR_2,
       VAR_6, VAR_14);
 FUNC_6(VAR_12, VAR_1, VAR_16, VAR_15);

 return 0;
}
