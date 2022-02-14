
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct pcm179x_private {int format; int regmap; int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int,int) ;
 struct pcm179x_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6,
        struct snd_pcm_hw_params *VAR_7,
        struct snd_soc_dai *VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_8->component;
 struct pcm179x_private *VAR_10 = FUNC_4(VAR_9);
 int VAR_11 = 0, VAR_12;

 VAR_10->rate = FUNC_1(VAR_7);

 switch (VAR_10->format & VAR_5) {
 case 128:
  switch (FUNC_2(VAR_7)) {
  case 24:
  case 32:
   VAR_11 = 2;
   break;
  case 16:
   VAR_11 = 0;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 129:
  switch (FUNC_2(VAR_7)) {
  case 24:
  case 32:
   VAR_11 = 5;
   break;
  case 16:
   VAR_11 = 4;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  FUNC_0(VAR_9->dev, "Invalid DAI format\n");
  return -VAR_0;
 }

 VAR_11 = VAR_11 << VAR_4 | VAR_1;

 VAR_12 = FUNC_3(VAR_10->regmap, VAR_2,
     VAR_3 | VAR_1, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
