
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct adau1373_dai {unsigned int sysclk; int enable_src; } ;
struct adau1373 {int regmap; struct adau1373_dai* dais; } ;


 int FUNC_0 (size_t) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,int,unsigned int) ;
 struct adau1373* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_9,
 struct snd_pcm_hw_params *VAR_10, struct snd_soc_dai *VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_11->component;
 struct adau1373 *VAR_13 = FUNC_5(VAR_12);
 struct adau1373_dai *VAR_14 = &VAR_13->dais[VAR_11->id];
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;

 VAR_16 = VAR_14->sysclk;

 if (VAR_16 % FUNC_2(VAR_10) != 0)
  return -VAR_8;

 switch (VAR_16 / FUNC_2(VAR_10)) {
 case 1024:
  VAR_15 = 0;
  break;
 case 1536:
  VAR_15 = 1;
  break;
 case 2048:
  VAR_15 = 2;
  break;
 case 3072:
  VAR_15 = 3;
  break;
 case 4096:
  VAR_15 = 4;
  break;
 case 6144:
  VAR_15 = 5;
  break;
 case 5632:
  VAR_15 = 6;
  break;
 default:
  return -VAR_8;
 }

 VAR_14->enable_src = (VAR_15 != 0);

 FUNC_4(VAR_13->regmap, FUNC_0(VAR_11->id),
  VAR_2 | VAR_1,
  (VAR_15 << 2) | VAR_0);

 switch (FUNC_3(VAR_10)) {
 case 16:
  VAR_17 = VAR_3;
  break;
 case 20:
  VAR_17 = VAR_4;
  break;
 case 24:
  VAR_17 = VAR_5;
  break;
 case 32:
  VAR_17 = VAR_6;
  break;
 default:
  return -VAR_8;
 }

 return FUNC_4(VAR_13->regmap, FUNC_1(VAR_11->id),
   VAR_7, VAR_17);
}
