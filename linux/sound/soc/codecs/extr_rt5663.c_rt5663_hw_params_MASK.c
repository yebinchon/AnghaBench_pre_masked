
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5663_priv {int lrck; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int) ;
 struct rt5663_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_10,
 struct snd_pcm_hw_params *VAR_11, struct snd_soc_dai *VAR_12)
{
 struct snd_soc_component *VAR_13 = VAR_12->component;
 struct rt5663_priv *VAR_14 = FUNC_5(VAR_13);
 unsigned int VAR_15 = 0;
 int VAR_16;

 VAR_14->lrck = FUNC_2(VAR_11);

 FUNC_0(VAR_12->dev, "bclk is %dHz and sysclk is %dHz\n",
  VAR_14->lrck, VAR_14->sysclk);

 VAR_16 = FUNC_4(VAR_14->sysclk, VAR_14->lrck);
 if (VAR_16 < 0) {
  FUNC_1(VAR_13->dev, "Unsupported clock setting %d for DAI %d\n",
   VAR_14->lrck, VAR_12->id);
  return -VAR_0;
 }

 FUNC_0(VAR_12->dev, "pre_div is %d for iis %d\n", VAR_16, VAR_12->id);

 switch (FUNC_3(VAR_11)) {
 case 8:
  VAR_15 = VAR_6;
  break;
 case 16:
  VAR_15 = VAR_3;
  break;
 case 20:
  VAR_15 = VAR_4;
  break;
 case 24:
  VAR_15 = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 FUNC_6(VAR_13, VAR_2,
  VAR_7, VAR_15);

 FUNC_6(VAR_13, VAR_1,
  VAR_8, VAR_16 << VAR_9);

 return 0;
}
