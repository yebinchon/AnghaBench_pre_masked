
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct pcm1789_private {int format; int regmap; int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 struct pcm1789_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
        struct snd_pcm_hw_params *VAR_5,
        struct snd_soc_dai *VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_6->component;
 struct pcm1789_private *VAR_8 = FUNC_4(VAR_7);
 int VAR_9 = 0, VAR_10;

 VAR_8->rate = FUNC_1(VAR_5);

 switch (VAR_8->format & VAR_3) {
 case 128:
  switch (FUNC_2(VAR_5)) {
  case 24:
   VAR_9 = 2;
   break;
  case 16:
   VAR_9 = 3;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 130:
  switch (FUNC_2(VAR_5)) {
  case 16:
  case 24:
  case 32:
   VAR_9 = 0;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 129:
  switch (FUNC_2(VAR_5)) {
  case 16:
  case 24:
  case 32:
   VAR_9 = 1;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  FUNC_0(VAR_7->dev, "Invalid DAI format\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_8->regmap, VAR_1,
     VAR_2, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
