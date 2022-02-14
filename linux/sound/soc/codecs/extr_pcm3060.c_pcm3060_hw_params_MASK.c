
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct pcm3060_priv {int regmap; TYPE_1__* dai; } ;
struct TYPE_2__ {unsigned int sclk_freq; int is_master; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int ,char*,...) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (int ,unsigned int,int ,unsigned int) ;
 struct pcm3060_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_12,
        struct snd_pcm_hw_params *VAR_13,
        struct snd_soc_dai *VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_14->component;
 struct pcm3060_priv *VAR_16 = FUNC_3(VAR_15);
 unsigned int VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;

 if (!VAR_16->dai[VAR_14->id].is_master) {
  VAR_20 = VAR_11;
  goto val_ready;
 }

 VAR_17 = FUNC_1(VAR_13);
 if (!VAR_17) {
  FUNC_0(VAR_15->dev, "rate is not configured\n");
  return -VAR_0;
 }

 VAR_18 = VAR_16->dai[VAR_14->id].sclk_freq / VAR_17;

 switch (VAR_18) {
 case 768:
  VAR_20 = VAR_10;
  break;
 case 512:
  VAR_20 = VAR_9;
  break;
 case 384:
  VAR_20 = VAR_8;
  break;
 case 256:
  VAR_20 = VAR_7;
  break;
 case 192:
  VAR_20 = VAR_6;
  break;
 case 128:
  VAR_20 = VAR_5;
  break;
 default:
  FUNC_0(VAR_15->dev, "unsupported ratio: %d\n", VAR_18);
  return -VAR_0;
 }

val_ready:
 if (VAR_14->id == VAR_1)
  VAR_19 = VAR_2;
 else
  VAR_19 = VAR_3;

 FUNC_2(VAR_16->regmap, VAR_19, VAR_4, VAR_20);

 return 0;
}
