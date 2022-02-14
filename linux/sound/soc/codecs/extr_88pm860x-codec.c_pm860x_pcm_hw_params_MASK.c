
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
    struct snd_pcm_hw_params *VAR_5,
    struct snd_soc_dai *VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_6->component;
 unsigned char VAR_8 = 0, VAR_9 = 0;


 switch (FUNC_1(VAR_5)) {
 case 16:
  VAR_8 &= ~VAR_1;
  break;
 case 18:
  VAR_8 |= VAR_1;
  break;
 default:
  return -VAR_0;
 }
 VAR_9 |= VAR_1;
 FUNC_2(VAR_7, VAR_2, VAR_9, VAR_8);


 switch (FUNC_0(VAR_5)) {
 case 8000:
  VAR_8 = 0;
  break;
 case 16000:
  VAR_8 = 3;
  break;
 case 32000:
  VAR_8 = 6;
  break;
 case 48000:
  VAR_8 = 8;
  break;
 default:
  return -VAR_0;
 }
 FUNC_2(VAR_7, VAR_3, 0x0f, VAR_8);

 return 0;
}
