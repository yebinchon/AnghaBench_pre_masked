
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs4341_priv {int fmt; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct cs4341_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_8,
       struct snd_pcm_hw_params *VAR_9,
       struct snd_soc_dai *VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_10->component;
 struct cs4341_priv *VAR_12 = FUNC_2(VAR_11);
 unsigned int VAR_13 = 0;
 int VAR_14 = 0;

 switch (FUNC_1(VAR_9)) {
 case 131:
  VAR_14 = 1;
  break;
 case 132:
  break;
 default:
  FUNC_0(VAR_11->dev, "Unsupported PCM format 0x%08x.\n",
   FUNC_1(VAR_9));
  return -VAR_7;
 }

 switch (VAR_12->fmt) {
 case 130:
  VAR_13 = VAR_14 ? VAR_2 : VAR_1;
  break;
 case 129:
  VAR_13 = VAR_3;
  break;
 case 128:
  VAR_13 = VAR_14 ? VAR_5 : VAR_4;
  break;
 default:
  FUNC_0(VAR_11->dev, "Unsupported DAI format 0x%08x.\n",
   VAR_12->fmt);
  return -VAR_7;
 }

 return FUNC_3(VAR_11, VAR_6,
          VAR_0, VAR_13);
}
