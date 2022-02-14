
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
 struct snd_pcm_hw_params *VAR_6,
 struct snd_soc_dai *VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_7->component;
 u16 VAR_9;

 VAR_9 = FUNC_2(VAR_8, VAR_2) & ~0x60;

 switch (FUNC_1(VAR_6)) {
 case 16:
  break;
 case 20:
  VAR_9 |= 0x20;
  break;
 case 24:
  VAR_9 |= 0x40;
  break;
 case 32:
  VAR_9 |= 0x60;
  break;
 default:
  return -VAR_0;
 }

 FUNC_3(VAR_8, VAR_2, VAR_9);

 if (VAR_5->stream == VAR_1) {
  VAR_9 = FUNC_2(VAR_8, VAR_3);

  if (FUNC_0(VAR_6) <= 24000)
   VAR_9 |= VAR_4;
  else
   VAR_9 &= ~VAR_4;

  FUNC_3(VAR_8, VAR_3, VAR_9);
 }

 return 0;
}
