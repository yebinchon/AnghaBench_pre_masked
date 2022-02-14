
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
 struct snd_pcm_hw_params *VAR_3,
 struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 u16 VAR_6 = FUNC_1(VAR_5, VAR_1);

 VAR_6 &= ~0x18;

 switch (FUNC_0(VAR_3)) {
 case 16:
  break;
 case 20:
  VAR_6 |= 0x10;
  break;
 case 24:
  VAR_6 |= 0x08;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_5, VAR_1, VAR_6);

 return 0;
}
