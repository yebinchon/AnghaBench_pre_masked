
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct ak5558_priv {int slot_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct ak5558_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
       struct snd_pcm_hw_params *VAR_6,
       struct snd_soc_dai *VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_7->component;
 struct ak5558_priv *VAR_9 = FUNC_2(VAR_8);
 u8 VAR_10;
 int VAR_11 = FUNC_0(FUNC_1(VAR_6), VAR_9->slot_width);

 switch (VAR_11) {
 case 16:
  VAR_10 = VAR_2;
  break;
 case 32:
  VAR_10 = VAR_3;
  break;
 default:
  return -VAR_4;
 }

 FUNC_3(VAR_8, VAR_0, VAR_1, VAR_10);

 return 0;
}
