
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct ak4458_priv {int fs; int fmt; int slot_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct ak4458_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_8,
       struct snd_pcm_hw_params *VAR_9,
       struct snd_soc_dai *VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_10->component;
 struct ak4458_priv *VAR_12 = FUNC_4(VAR_11);
 int VAR_13 = FUNC_1(FUNC_2(VAR_9), VAR_12->slot_width);
 int VAR_14;
 u8 VAR_15;

 VAR_14 = FUNC_3(VAR_9);
 VAR_12->fs = VAR_14;


 FUNC_5(VAR_11, VAR_0, 0x80, 0x80);

 switch (VAR_13) {
 case 16:
  if (VAR_12->fmt == 130)
   VAR_15 = VAR_2;
  else
   VAR_15 = VAR_1;
  break;
 case 32:
  switch (VAR_12->fmt) {
  case 130:
   VAR_15 = VAR_3;
   break;
  case 129:
   VAR_15 = VAR_5;
   break;
  case 128:
   VAR_15 = VAR_4;
   break;
  case 131:
   VAR_15 = VAR_5;
   break;
  default:
   return -VAR_7;
  }
  break;
 default:
  return -VAR_7;
 }

 FUNC_5(VAR_11, VAR_0,
       VAR_6, VAR_15);

 FUNC_0(VAR_11, 0);
 FUNC_0(VAR_11, 1);

 return 0;
}
