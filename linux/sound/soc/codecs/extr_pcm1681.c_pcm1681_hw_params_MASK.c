
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct pcm1681_private {int format; int regmap; int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (int ,int ,int,int) ;
 struct pcm1681_private* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3,
        struct snd_pcm_hw_params *VAR_4,
        struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct pcm1681_private *VAR_7 = FUNC_5(VAR_6);
 int VAR_8 = 0, VAR_9;

 VAR_7->rate = FUNC_1(VAR_4);

 switch (VAR_7->format & VAR_2) {
 case 128:
  switch (FUNC_2(VAR_4)) {
  case 24:
   VAR_8 = 0;
   break;
  case 16:
   VAR_8 = 3;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 130:
  VAR_8 = 0x04;
  break;
 case 129:
  VAR_8 = 0x05;
  break;
 default:
  FUNC_0(VAR_6->dev, "Invalid DAI format\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_4(VAR_7->regmap, VAR_1, 0x0f, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_3(VAR_6);
}
