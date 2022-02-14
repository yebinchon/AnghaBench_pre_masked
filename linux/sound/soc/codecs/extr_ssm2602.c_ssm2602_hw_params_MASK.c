
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2602_priv {int regmap; int sysclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,int) ;
 struct ssm2602_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_4,
 struct snd_pcm_hw_params *VAR_5,
 struct snd_soc_dai *VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_6->component;
 struct ssm2602_priv *VAR_8 = FUNC_4(VAR_7);
 int VAR_9 = FUNC_5(VAR_8->sysclk, FUNC_0(VAR_5));
 unsigned int VAR_10;

 if (VAR_9 < 0)
  return VAR_9;

 FUNC_3(VAR_8->regmap, VAR_3, VAR_9);


 switch (FUNC_1(VAR_5)) {
 case 16:
  VAR_10 = 0x0;
  break;
 case 20:
  VAR_10 = 0x4;
  break;
 case 24:
  VAR_10 = 0x8;
  break;
 case 32:
  VAR_10 = 0xc;
  break;
 default:
  return -VAR_0;
 }
 FUNC_2(VAR_8->regmap, VAR_2,
  VAR_1, VAR_10);
 return 0;
}
